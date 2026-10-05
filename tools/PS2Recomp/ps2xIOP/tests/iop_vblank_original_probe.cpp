#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"
#include "emulator/iop_emulator_const.h"
#include <filesystem>
#include <fstream>
#include <iterator>
#include <set>

namespace {
using namespace iop_test;
using ps2x::iop::detail::IopEmulator;
uint64_t fingerprint(std::span<const uint8_t> bytes) {
    uint64_t value = 14695981039346656037ull;
    for (auto byte : bytes) value = (value ^ byte) * 1099511628211ull;
    return value;
}
std::vector<uint8_t> original(const std::filesystem::path& path, size_t size, uint64_t hash) {
    std::ifstream stream(path, std::ios::binary);
    require(stream.good(), "original unavailable");
    std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(stream), {}};
    require(bytes.size() == size && fingerprint(bytes) == hash, "original revision mismatch");
    return bytes;
}
struct Fixture {
    Host host;
    IopEmulator iop{host};
    uint32_t base = 0, caller = 0x40000;
    uint32_t reader = 0, writer = 0;
    uint32_t read(uint32_t address) const {
        uint32_t result = 0;
        require(iop.readMemory(address, &result, 4), "unowned probe read"); return result;
    }
    void write(uint32_t address, uint32_t value) {
        require(iop.writeMemory(address, &value, 4), "unowned probe write");
    }
    uint32_t nodes(uint32_t head) const {
        std::set<uint32_t> visited;
        for (auto node = read(head); node != head; node = read(node)) {
            require(node >= base + 0x810 && node < base + 0x950 &&
                (node - base - 0x810) % 20 == 0 && visited.insert(node).second,
                "invalid original node list");
            require(read(read(node) + 4) == node, "broken original next/previous link");
        }
        return static_cast<uint32_t>(visited.size());
    }
    Fixture(const std::vector<uint8_t>& loadcore, const std::vector<uint8_t>& vblank) {
        require(iop.initializeLoaderState(), "loader state failed");
        require(iop.installHleLibraryImage("rom0:LOADCORE", loadcore).startResult == 0, "LOADCORE failed");
        const auto result = iop.loadOwnedModule("rom0:VBLANK", vblank);
        for (const auto& line : host.logs) std::cout << line << '\n';
        require(result.moduleId > 0 && result.startResult == 0, "original VBLANK init failed");
        const uint32_t data = read(0x3F0) - 0x20;
        for (auto descriptor = read(data + 16); descriptor; descriptor = read(descriptor))
            if (read(descriptor + 12) == static_cast<uint32_t>(result.moduleId)) base = read(descriptor + 24);
        require(base != 0 && read(base + 0x7F0) != 0, "original event/module state absent");
        require(read(base + 0x6C4) == base + 0x164, "original export8 was replaced");
        require(nodes(base + 0x7F8) == 1 && nodes(base + 0x800) == 1 && nodes(base + 0x808) == 14,
            "original initial node ownership differs");
        reader = iop.allocateMemory(16);
        write(reader, 0x8C820000); write(reader + 4, 0);
        write(reader + 8, 0x03E00008); write(reader + 12, 0);
        writer = iop.allocateMemory(16);
        write(writer, 0xAC850000); write(writer + 4, 0x03E00008);
        write(writer + 8, 0x00001021); write(writer + 12, 0);
        require((call(reader, {0x1F801074, 0, 0, 0}) & 0x801) == 0x801,
            "original IRQ enables absent");
        require(iop.instructions() > 100, "original initializer did not execute");
    }
    uint32_t hardware(uint32_t address) { return call(reader, {address, 0, 0, 0}); }
    void hardware(uint32_t address, uint32_t value) { (void)call(writer, {address, value, 0, 0}); }
    uint32_t reg(uint32_t phase, uint32_t priority, uint32_t function, uint32_t argument = 0) {
        return call(base + 0x164, {phase, priority, function, argument});
    }
    uint32_t import(const char* name, uint32_t ordinal) {
        const uint32_t table = iop.allocateMemory(64);
        require(iop.zeroMemory(table, 64), "import storage failed");
        write(table, 0x41E00000); write(table + 8, 0x0101);
        require(std::strlen(name) <= 8 && iop.writeMemory(table + 12, name, std::strlen(name)),
            "import name failed");
        write(table + 20, 0x03E00008); write(table + 24, 0x24000000 | ordinal);
        return table + 20;
    }
    uint32_t thread(uint32_t entry, uint32_t argument) {
        const auto descriptor = iop.allocateMemory(24);
        const uint32_t values[]{0, 0, entry, 0x1000, 0x40, 0};
        require(iop.writeMemory(descriptor, values, sizeof(values)), "thread descriptor failed");
        const auto id = call(import("thbase", 4), {descriptor, 0, 0, 0});
        require(id > 0 && id < 100 && call(import("thbase", 6), {id, argument, 0, 0}) == 0,
            "thread creation/start failed");
        return id;
    }
    uint32_t release(uint32_t phase, uint32_t function) {
        return call(base + 0x2AC, {phase, function, 0, 0});
    }
    std::vector<uint32_t> functions(uint32_t phase) const {
        const uint32_t head = base + (phase ? 0x800 : 0x7F8);
        std::vector<uint32_t> result;
        for (auto node = read(head); node != head; node = read(node)) {
            require(result.size() < 16, "callback list cycle"); result.push_back(read(node + 12));
        }
        return result;
    }
    uint32_t callback(uint32_t result, bool guarded = false) {
        const uint32_t address = iop.allocateMemory(0x100);
        std::vector<uint32_t> code{
            0x27BDFFE0, 0xAFBF001C, 0xAFB00018, 0x00808021,
            0x8C820000, 0, 0x24420001, 0xAC820000, 0xAC9C0004, 0xAC840008};
        if (guarded) {
            // Attempt Register/Release inside the original IRQ dispatcher.
            code.insert(code.end(), {0x00002021, 0x00002821,
                0x3C060000 | address >> 16, 0x34C60000 | (address & 0xFFFF), 0x02003821,
                0x0C000000 | (base + 0x164) >> 2, 0, 0xAE02000C,
                0x00002021, 0x3C050000 | address >> 16, 0x34A50000 | (address & 0xFFFF),
                0x0C000000 | (base + 0x2AC) >> 2, 0, 0xAE020010});
        }
        code.insert(code.end(), {0x3C020000 | result >> 16, 0x34420000 | (result & 0xFFFF),
            0x8FBF001C, 0x8FB00018, 0, 0x03E00008, 0x27BD0020});
        require(iop.writeMemory(address, code.data(), code.size() * 4), "callback fixture write failed");
        return address;
    }
    uint32_t call(uint32_t function, std::array<uint32_t, 4> arguments) {
        const uint32_t at = caller; caller += 0x1000;
        Irx image(at, 0x400);
        std::vector<uint32_t> code{0x27BDFFE0, 0xAFBF001C};
        for (uint32_t i = 0; i < 4; ++i) {
            const uint32_t reg = i + 4;
            code.push_back(0x3C000000 | reg << 16 | arguments[i] >> 16);
            code.push_back(0x34000000 | reg << 21 | reg << 16 | (arguments[i] & 0xFFFF));
        }
        code.insert(code.end(), {0x0C000000 | function >> 2, 0,
            0x3C080000 | at >> 16, 0x35080000 | ((at + 0x300) & 0xFFFF), 0xAD020000,
            0x8FBF001C, 0, 0x27BD0020, 0x03E00008, 0x00001021});
        std::memcpy(image.bytes.data() + 0x100, code.data(), code.size() * 4);
        image.words(0x300, {0xABCDEF01});
        const auto result = iop.loadOwnedModule("probe:vblank-call", image.bytes);
        require(result.startResult == 0, "original VBLANK call incomplete");
        return read(at + 0x300);
    }
    void advance(uint64_t iopCycles) { iop.runEeCycles(iopCycles * 8); }
};
}

int main(int argc, char** argv) {
    try {
        require(argc == 2, "usage: ps2_iop_vblank_original_probe private-boot-directory");
        const std::filesystem::path directory(argv[1]);
        const auto loadcore = original(directory / "LOADCORE.IRX", 9849, 0x2DA4F777096F198Eull);
        const auto vblank = original(directory / "VBLANK.IRX", 3465, 0x25DE498EDCD7F020ull);
        Fixture f(loadcore, vblank);
        std::cout << "PASS original VBLANK initialization, exports, IRQ enables, event and 16 nodes\n";
        f.advance(kVblankPeriodCycles * 3);
        require(f.read(f.base + 0x7F4) >= 3, "original start IRQ counter did not advance");
        std::cout << "PASS original phase dispatch during idle\n";

        Fixture lists(loadcore, vblank);
        const uint32_t cb = lists.callback(1);
        const uint32_t next = lists.callback(1), early = lists.callback(1), equal = lists.callback(1);
        require(lists.reg(0, 0x10, cb) == 0 && lists.reg(0, 0x10, equal) == 0 &&
            lists.reg(0, 0xFFFFFFFF, early) == 0 && lists.reg(0, 0x100, next) == 0,
            "original registration failed");
        require(lists.functions(0) == std::vector<uint32_t>{early, cb, equal, lists.base + 0x4B4, next},
            "original signed/stable priority ordering differs");
        require(lists.reg(0, 2, cb, 99) == uint32_t(-104) && lists.reg(0xFFFFFFFF, 2, cb) == 0,
            "original phase/duplicate identity differs");
        for (uint32_t i = 0; i < 9; ++i)
            require(lists.reg(i % 2, i, cb + 0x1000 + i * 4) == 0, "original capacity fill failed");
        require(lists.nodes(lists.base + 0x808) == 0 && lists.reg(0, 0, cb) == uint32_t(-400),
            "original exhaustion must precede duplicate check");
        require(lists.release(1, cb) == 0 && lists.release(2, cb) == uint32_t(-105) &&
            lists.reg(0, 2, cb) == uint32_t(-104) && lists.release(0, cb) == 0,
            "original release/duplicate returns differ");
        std::cout << "PASS original priorities, phase identity, duplicate, 14 slots and release\n";

        Fixture callbacks(loadcore, vblank);
        const auto argument = callbacks.iop.allocateMemory(64);
        require(callbacks.iop.zeroMemory(argument, 64), "callback argument initialization failed");
        const auto persistent = callbacks.callback(1, true), once = callbacks.callback(0);
        require(callbacks.reg(0, 0x10, persistent, argument) == 0 &&
            callbacks.reg(1, 0x10, once, argument + 32) == 0, "callback registration failed");
        callbacks.advance(kVblankPeriodCycles * 3);
        require(callbacks.read(argument) >= 3 && callbacks.read(argument + 32) == 1,
            "original zero/nonzero callback lifetime differs");
        require(callbacks.read(argument + 4) == callbacks.base + 0x87E0 &&
            callbacks.read(argument + 8) == argument, "callback argument/dispatcher GP differs");
        require(callbacks.read(argument + 12) == uint32_t(-100) &&
            callbacks.read(argument + 16) == uint32_t(-100), "IRQ context guard was not observed");
        require(callbacks.functions(1) == std::vector<uint32_t>{callbacks.base + 0x4FC} &&
            callbacks.release(0, persistent) == 0, "original removal or IRQ context restoration failed");
        std::cout << "PASS original callback argument/GP, lifetime, IRQ guards and restored context\n";

        Fixture masked(loadcore, vblank);
        masked.hardware(0x1F801078, 0);
        const auto before = masked.read(masked.base + 0x7F4);
        masked.advance(kVblankPeriodCycles * 3);
        require(masked.read(masked.base + 0x7F4) == before &&
            (masked.hardware(0x1F801070) & 0x801) == 0x801, "masked phase IRQs were lost/dispatched");
        masked.hardware(0x1F801078, 1);
        require(masked.read(masked.base + 0x7F4) == before + 1 &&
            (masked.hardware(0x1F801070) & 0x801) == 0, "latched phase IRQs not coalesced/delivered");
        masked.hardware(0x1F801074, 0x800);
        const auto count = masked.read(masked.base + 0x7F4);
        masked.advance(kVblankPeriodCycles * 2);
        require(masked.read(masked.base + 0x7F4) == count &&
            (masked.hardware(0x1F801070) & 1) != 0, "per-IRQ mask lost the pending start");
        masked.hardware(0x1F801074, 0x801);
        require(masked.read(masked.base + 0x7F4) == count + 1, "per-IRQ unmask lost delivery");
        std::cout << "PASS global/per-IRQ masking, pending phases and unmask delivery\n";

        Fixture waits(loadcore, vblank);
        const auto storage = waits.iop.allocateMemory(0x200);
        require(waits.iop.zeroMemory(storage, 0x200), "wait storage failed");
        const uint32_t code[]{0x27BDFFE0, 0xAFBF001C, 0xAFB00018, 0x00808021,
            0x24020001, 0xAE020000, 0x0C000000 | (waits.base + 0x544) >> 2, 0,
            0x24020002, 0xAE020000, 0x8FBF001C, 0x8FB00018, 0, 0x03E00008, 0x27BD0020};
        require(waits.iop.writeMemory(storage, code, sizeof(code)), "wait code failed");
        waits.thread(storage, storage + 0x100);
        waits.advance(kVblankPeriodCycles / 2);
        require(waits.read(storage + 0x100) == 1, "original WaitVblankStart did not block");
        waits.advance(kVblankPeriodCycles);
        require(waits.read(storage + 0x100) == 2, "original WaitVblankStart did not resume on owning thread");
        const auto status = waits.call(waits.import("thbase", 41), {});
        require(waits.call(waits.import("thevent", 11), {status, 0x200, 1, storage + 0x104}) == 0 &&
            (waits.read(storage + 0x104) & 0x200) != 0, "first start IRQ did not set system status event");
        std::cout << "PASS original wait blocks/resumes and first-start system event\n";

        Fixture dma(loadcore, vblank);
        const auto dmaArg = dma.iop.allocateMemory(0x200);
        require(dma.iop.zeroMemory(dmaArg, 0x200), "DMA fixture failed");
        const auto first = dma.callback(1), second = dma.callback(1);
        // Prefix the first handler with CpuDisableIntr's MMIO effect.
        const uint32_t maskThenJump[]{0x3C081F80, 0xAD001078, 0x08000000 | first >> 2, 0};
        require(dma.iop.writeMemory(dmaArg, maskThenJump, sizeof(maskThenJump)), "DMA first handler failed");
        const auto registerIrq = dma.import("intrman", 4), enableIrq = dma.import("intrman", 6);
        require(dma.call(registerIrq, {0x24, 1, dmaArg, dmaArg + 0x100}) == 0 &&
            dma.call(registerIrq, {0x28, 1, second, dmaArg + 0x140}) == 0 &&
            dma.call(enableIrq, {0x24, 0, 0, 0}) == 0 && dma.call(enableIrq, {0x28, 0, 0, 0}) == 0,
            "DMA IRQ registration failed");
        dma.hardware(0x1F801078, 0);
        dma.hardware(0x1F8010C8, 0x01000000); dma.hardware(0x1F801508, 0x01000000);
        dma.advance(200);
        dma.hardware(0x1F801078, 1);
        require(dma.read(dmaArg + 0x100) == 1 && dma.read(dmaArg + 0x140) == 0,
            "second DMA ran after first handler masked interrupts");
        dma.hardware(0x1F801078, 1);
        dma.advance(200);
        require(dma.read(dmaArg + 0x100) == 1 && dma.read(dmaArg + 0x140) == 1,
            "second pending DMA lost or duplicated across first callback mask");
        std::cout << "PASS DMA callback masking preserves later pending completion\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "FAIL original VBLANK probe: " << error.what() << '\n'; return 1;
    }
}
