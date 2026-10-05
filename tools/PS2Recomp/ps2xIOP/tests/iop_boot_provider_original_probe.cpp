#include "iop_compat_test_support.h"
#include "emulator/iop_emulator.h"

#include <filesystem>
#include <fstream>
#include <iterator>
#include <set>

namespace {
using namespace iop_test;
using ps2x::iop::detail::IopEmulator;
constexpr uint32_t Completion = 0x13579BDFu, Unwritten = 0xABADBABEu;
constexpr uint32_t ImportOffset = 0x300u, ResultOffset = 0xE00u;
constexpr uint32_t jal(uint32_t at) { return 0x0C000000u | (at >> 2u); }

struct Original {
    const char *file;
    const char *library;
    uint32_t size;
    uint64_t fingerprint;
    uint32_t tableFile, tablePc, slots;
    const char *sha256;
    std::vector<uint8_t> bytes;
    uint16_t version = 0x0101u;
};

// Full-file SHA256 provenance is also retained in provider-audit-001.
// The bounded probe verifies exact size and a complete-file FNV64 fingerprint;
// FNV64 is a revision guard, not a cryptographic integrity claim.
std::array<Original, 5> providers{{
    {"SIFMAN", "sifman", 5937u, 0x91A78C5AB461FD4Aull, 0xFA0u, 0xF00u, 36u,
     "999a2aeeb1fca70a4b89ee13a4db5cd8fbb15f503d8a9d336b184e57d70c6dcd", {}},
    {"SIFCMD", "sifcmd", 10105u, 0x5C9611C1D6FC9FDDull, 0x19D0u, 0x1920u, 32u,
     "cbea6f65e4f38b2c212ebdbacfed21451a1cb46b8c1286ff3e2ef7408956af8a", {}},
    {"CDVDMAN", "cdvdman", 72389u, 0x82C5A9489885FE0Cull, 0x9C20u, 0x9B80u, 113u,
     "a79d31b188b9738d9eeecee2b31f3cc8acd3af424fda7ba2c794de5b81d7eb8d", {}},
    {"VBLANK", "vblank", 3465u, 0x25DE498EDCD7F020ull, 0x730u, 0x690u, 10u,
     "5181693327dfd6ee0be8e2331a287109098e26253a4788a5d121f1fd73f1e4ce", {}},
    {"TIMEMANI", "timrman", 6069u, 0x369014E971B91609ull, 0xE40u, 0xDA0u, 28u,
     "1825b7fb1517f340b9e5dddf7c52d3a911e58055a00aa9472a4e18a195c1dbfd", {}, 0x0103u}
}};

uint64_t fingerprint(std::span<const uint8_t> bytes) {
    uint64_t result = 14695981039346656037ull;
    for (const uint8_t byte : bytes) result = (result ^ byte) * 1099511628211ull;
    return result;
}
uint32_t fileWord(const std::vector<uint8_t> &bytes, uint32_t at) {
    require(at <= bytes.size() && bytes.size() - at >= 4u, "original word outside file");
    return uint32_t(bytes[at]) | (uint32_t(bytes[at + 1u]) << 8u) |
        (uint32_t(bytes[at + 2u]) << 16u) | (uint32_t(bytes[at + 3u]) << 24u);
}
uint16_t fileHalf(const std::vector<uint8_t> &bytes, uint32_t at) {
    require(at <= bytes.size() && bytes.size() - at >= 2u, "original half outside file");
    return static_cast<uint16_t>(uint16_t(bytes[at]) | (uint16_t(bytes[at + 1u]) << 8u));
}
std::vector<uint8_t> readOriginal(const std::filesystem::path &path, uint32_t size, uint64_t expected) {
    std::ifstream stream(path, std::ios::binary);
    require(stream.good(), "private original input unavailable");
    std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(stream), {}};
    require(bytes.size() == size && fingerprint(bytes) == expected, "original revision fingerprint mismatch");
    return bytes;
}
uint32_t word(const IopEmulator &iop, uint32_t at) {
    uint32_t result = 0u;
    require(iop.readMemory(at, &result, sizeof(result)), "probe RAM word outside ownership");
    return result;
}
std::string guestString(const IopEmulator &iop, uint32_t at, uint32_t limit) {
    std::string result;
    for (uint32_t n = 0u; n < limit; ++n) {
        uint8_t byte = 0u;
        require(iop.readMemory(at + n, &byte, 1u), "probe string outside ownership");
        if (byte == 0u) return result;
        result.push_back(static_cast<char>(byte));
    }
    return result;
}
uint32_t loaderData(const IopEmulator &iop) { return word(iop, 0x3F0u) - 0x20u; }
uint32_t providerTable(const IopEmulator &iop, const char *library) {
    std::set<uint32_t> seen;
    uint32_t found = 0u;
    for (uint32_t at = word(iop, loaderData(iop)); at != 0u; at = word(iop, at)) {
        require(seen.size() < 64u && seen.insert(at).second, "provider list cycle/out of bound");
        if (guestString(iop, at + 12u, 8u) == library) {
            require(found == 0u, "duplicate original provider table");
            found = at;
        }
    }
    return found;
}
uint32_t moduleInfo(const IopEmulator &iop, int32_t id) {
    std::set<uint32_t> seen;
    for (uint32_t at = word(iop, loaderData(iop) + 16u); at != 0u; at = word(iop, at)) {
        require(seen.size() < 64u && seen.insert(at).second, "module list cycle/out of bound");
        if (word(iop, at + 12u) == static_cast<uint32_t>(id)) return at;
    }
    throw std::runtime_error("installed provider ModuleInfo absent");
}

class ProbeHost : public Host {
public:
    bool readSifRegister(uint32_t index, uint32_t &value) const override {
        if (index == 0u || index >= registers.size()) { value = 0u; return false; }
        value = registers[index]; ++sifReads; return true;
    }
    bool writeSifRegister(uint32_t index, uint32_t value) override {
        if (index == 0u || index >= registers.size()) return false;
        if (index == 3u) registers[index] &= ~value;
        else if (index == 4u) registers[index] |= value;
        else registers[index] = value;
        ++sifWrites; return true;
    }
    std::array<uint32_t, 5> registers{};
    mutable size_t sifReads = 0u;
    size_t sifWrites = 0u;
};

struct Fixture {
    ProbeHost host;
    IopEmulator iop{host};
    explicit Fixture(const std::vector<uint8_t> &loadcore) {
        require(iop.initializeLoaderState(), "owned loader state unavailable");
        const auto result = iop.installHleLibraryImage("rom0:LOADCORE", loadcore);
        require(result.moduleId > 0 && result.startResult == 0, "original LOADCORE table installation failed");
        require(iop.instructions() == 0u && iop.threadCount() == 0u, "table fixture executed startup code");
    }
    void install(const Original &original) {
        const uint64_t instructions = iop.instructions();
        const uint32_t threads = iop.threadCount(), servers = iop.rpcServerCount();
        const auto sifRegisters = host.registers;
        const auto reads = host.sifReads, writes = host.sifWrites;
        const uint32_t count = iop.loadedModuleCount();
        require(providerTable(iop, original.library) == 0u, "original provider already installed");
        const auto result = iop.installHleLibraryImage(std::string("rom0:") + original.file, original.bytes);
        require(result.moduleId > 0 && result.startResult == 0, "original HLE provider installation failed");
        require(iop.loadedModuleCount() == count + 1u, "provider metadata registration count differs");
        require(iop.instructions() == instructions && iop.threadCount() == threads &&
            iop.rpcServerCount() == servers && host.registers == sifRegisters &&
            host.sifReads == reads && host.sifWrites == writes,
            "HLE table installation executed original startup or published hardware state");

        const uint32_t descriptor = moduleInfo(iop, result.moduleId);
        const uint32_t text = word(iop, descriptor + 24u);
        const uint32_t ph = fileWord(original.bytes, 28u), meta = fileWord(original.bytes, ph + 4u);
        const uint32_t load = fileWord(original.bytes, ph + 36u);
        const uint32_t id = fileWord(original.bytes, meta);
        const uint32_t name = fileWord(original.bytes, load + id);
        require(guestString(iop, word(iop, descriptor + 4u), 80u) ==
            std::string(reinterpret_cast<const char *>(original.bytes.data() + load + name)),
            "original ModuleInfo name changed");
        require((word(iop, descriptor + 8u) & 0xFFFFu) == fileHalf(original.bytes, load + id + 4u),
            "original ModuleInfo version changed");
        require((word(iop, descriptor + 8u) >> 16u) == 3u, "HLE provider metadata not resident");
        require(word(iop, descriptor + 16u) == text + fileWord(original.bytes, meta + 4u) &&
            word(iop, descriptor + 20u) == text + fileWord(original.bytes, meta + 8u),
            "original entry/GP relocation metadata changed");
        for (uint32_t n = 0u; n < 3u; ++n)
            require(word(iop, descriptor + 28u + n * 4u) == fileWord(original.bytes, meta + 12u + n * 4u),
                "original text/data/BSS metadata changed");

        const uint32_t table = providerTable(iop, original.library);
        require(table == text + original.tablePc && (word(iop, table + 8u) & 0xFFFFu) == original.version,
            "original library address/name/version differs");
        require((word(iop, table + 8u) >> 16u & 1u) == 0u, "provider is not eligible for original automatic linking");
        std::set<uint32_t> thunks;
        for (uint32_t ordinal = 0u; ordinal < original.slots; ++ordinal) {
            const uint32_t target = word(iop, table + 20u + ordinal * 4u);
            require(target != 0u && thunks.insert(target).second && word(iop, target) == 0x0000000Du &&
                word(iop, target + 4u) == 0u, "original ordinal lost its owned HLE thunk");
        }
        require(word(iop, table + 20u + original.slots * 4u) == 0u, "original export count changed");
        require(fingerprint(original.bytes) == original.fingerprint, "private original bytes mutated");
    }
    void installAll() { for (const auto &original : providers) install(original); }
};

struct Action { uint16_t ordinal; std::array<uint32_t, 4> args{}; uint32_t incomingV0 = 0u; };
Irx consumer(uint32_t base, const char *library, uint16_t version,
    const std::vector<uint16_t> &ordinals, const std::vector<Action> &actions = {}) {
    require(!ordinals.empty() && ordinals.size() <= 120u, "consumer ordinal list out of bound");
    Irx image(base, 0x1000u);
    std::vector<uint32_t> code{0x27BDFFE0u, 0xAFBF001Cu};
    const auto load = [&](uint32_t reg, uint32_t value) {
        code.push_back(0x3C000000u | (reg << 16u) | (value >> 16u));
        code.push_back(0x34000000u | (reg << 21u) | (reg << 16u) | (value & 0xFFFFu));
    };
    load(4u, base + ImportOffset);
    load(5u, 20u + static_cast<uint32_t>(ordinals.size()) * 8u + 8u);
    code.push_back(jal(base + 0x214u)); code.push_back(0u);
    load(8u, base + ResultOffset); code.push_back(0xAD020000u);
    const size_t failedBranch = code.size(); code.push_back(0u); code.push_back(0u);
    for (size_t n = 0u; n < actions.size(); ++n) {
        const auto found = std::find(ordinals.begin(), ordinals.end(), actions[n].ordinal);
        require(found != ordinals.end(), "action ordinal missing from consumer table");
        for (uint32_t arg = 0u; arg < 4u; ++arg) load(4u + arg, actions[n].args[arg]);
        load(2u, actions[n].incomingV0);
        const uint32_t index = static_cast<uint32_t>(std::distance(ordinals.begin(), found));
        code.push_back(jal(base + ImportOffset + 20u + index * 8u)); code.push_back(0u);
        load(8u, base + ResultOffset + 4u + static_cast<uint32_t>(n) * 4u); code.push_back(0xAD020000u);
    }
    load(8u, base + ResultOffset + 0x40u); load(9u, Completion); code.push_back(0xAD090000u);
    const size_t epilogue = code.size();
    const uint32_t displacement = static_cast<uint32_t>(epilogue - failedBranch - 1u);
    require(displacement < 0x8000u && code.size() * 4u < 0x200u, "consumer branch/code exceeds fixture");
    code[failedBranch] = 0x04400000u | displacement;
    code.insert(code.end(), {0x8FBF001Cu, 0x27BD0020u, 0x03E00008u, 0x00001021u});
    for (uint32_t n = 0u; n < code.size(); ++n) image.words(n * 4u, {code[n]});
    image.words(0x200u, {0x41E00000u, 0u, 0x0103u, 0x64616F6Cu, 0x65726F63u,
        0x03E00008u, 0x24000008u, 0u, 0u});
    image.words(ImportOffset, {0x41E00000u, 0u, version});
    require(std::strlen(library) < 8u, "consumer library name exceeds ABI");
    std::memcpy(image.bytes.data() + 0x100u + ImportOffset + 12u, library, std::strlen(library));
    for (uint32_t n = 0u; n < ordinals.size(); ++n)
        image.words(ImportOffset + 20u + n * 8u, {0x03E00008u, 0x24000000u | ordinals[n]});
    for (uint32_t n = 0u; n < 0x80u; n += 4u) image.words(ResultOffset + n, {Unwritten});
    return image;
}

void assertLinked(const Fixture &fixture, uint32_t base, const Original &original,
    const std::vector<uint16_t> &ordinals, uint16_t requestedVersion = 0x0101u) {
    const auto &iop = fixture.iop;
    const uint32_t table = providerTable(iop, original.library), imported = base + ImportOffset;
    require(word(iop, base + ResultOffset) == 0u && word(iop, base + ResultOffset + 0x40u) == Completion,
        "original link did not return before fixture completion");
    require((word(iop, imported + 8u) & 0xFFFFu) == requestedVersion &&
        (word(iop, imported + 8u) >> 16u & 7u) == 2u,
        "linked consumer version/flags changed");
    for (uint32_t n = 0u; n < ordinals.size(); ++n) {
        const uint32_t stub = imported + 20u + n * 8u;
        const uint32_t target = ordinals[n] < original.slots ? word(iop, table + 20u + ordinals[n] * 4u) : 0u;
        const uint32_t expected = target == 0u ? 0x03E00008u : 0x08000000u | ((target >> 2u) & 0x03FFFFFFu);
        require(word(iop, stub) == expected && word(iop, stub + 4u) == (0x24000000u | ordinals[n]),
            "original linked ordinal/ADDIU delay differs");
    }
}

void linkMatrix(const std::vector<uint8_t> &loadcore) {
    Fixture fixture(loadcore);
    uint32_t comparisons = 0u;
    for (uint32_t index = 0u; index < providers.size(); ++index) {
        const auto &original = providers[index];
        std::vector<uint16_t> ordinals;
        for (uint32_t n = 0u; n <= original.slots; ++n) ordinals.push_back(static_cast<uint16_t>(n));
        const uint32_t before = 0x80000u + index * 0x4000u, after = before + 0x2000u;
        require(fixture.iop.loadOwnedModule("probe:missing-provider", consumer(before, original.library, 0x0101u, ordinals).bytes).startResult == 0,
            "negative link fixture failed to return its branch");
        require(word(fixture.iop, before + ResultOffset) == UINT32_MAX &&
            word(fixture.iop, before + ResultOffset + 0x40u) == Unwritten,
            "missing physical provider linked or executed fixture success path");
        for (uint32_t n = 0u; n < ordinals.size(); ++n)
            require(word(fixture.iop, before + ImportOffset + 20u + n * 8u) == 0x03E00008u,
                "missing-provider rollback left a patched import");
        fixture.install(original);
        require(fixture.iop.loadOwnedModule("probe:resolved-provider", consumer(after, original.library, 0x0101u, ordinals).bytes).startResult == 0,
            "positive link fixture failed");
        assertLinked(fixture, after, original, ordinals);
        comparisons += static_cast<uint32_t>(ordinals.size());
    }
    std::cout << "PASS " << providers.size() << " original provider link transitions; ordinal comparisons=" << comparisons << '\n';
}

void majorVersion(const std::vector<uint8_t> &loadcore) {
    Fixture fixture(loadcore); fixture.install(providers[0]);
    const std::vector<uint16_t> ordinals{5u, 29u};
    require(fixture.iop.loadOwnedModule("probe:minor", consumer(0x80000u, "sifman", 0x017Fu, ordinals).bytes).startResult == 0,
        "major-only link fixture failed");
    assertLinked(fixture, 0x80000u, providers[0], ordinals, 0x017Fu);
    require(fixture.iop.loadOwnedModule("probe:wrong-major", consumer(0x82000u, "sifman", 0x0201u, ordinals).bytes).startResult == 0 &&
        word(fixture.iop, 0x82000u + ResultOffset) == UINT32_MAX &&
        word(fixture.iop, 0x82000u + ResultOffset + 0x40u) == Unwritten,
        "wrong library major resolved or executed success path");
    std::cout << "PASS original library major matching and requested minor preservation\n";
    fixture.install(providers[4]);
    const std::vector<uint16_t> koeiOrdinals{4u,20u,22u,23u};
    require(fixture.iop.loadOwnedModule("probe:koeisnd-timer-imports",
        consumer(0x84000u,"timrman",0x0102u,koeiOrdinals).bytes).startResult==0,
        "KOEISND timer import fixture failed");
    assertLinked(fixture,0x84000u,providers[4],koeiOrdinals,0x0102u);
    std::cout << "PASS KOEISND timrman0102 imports4/20/22/23 link to TIMEMANI0103; timer execution untested\n";
}

void ownedDispatch(const std::vector<uint8_t> &loadcore) {
    Fixture fixture(loadcore); fixture.installAll();
    const auto sifman = consumer(0x80000u, "sifman", 0x0101u, {5u, 29u},
        {{5u, {}}, {29u, {}}});
    require(fixture.iop.loadOwnedModule("probe:sifman-owner", sifman.bytes).startResult == 0 &&
        word(fixture.iop, 0x80000u + ResultOffset + 4u) == 0u &&
        word(fixture.iop, 0x80000u + ResultOffset + 8u) == 1u,
        "SIFMAN init/check did not share existing native owner");
    require(fixture.host.registers[2] == 0u && !fixture.iop.rpcInitializationComplete(),
        "provider table alone fabricated command/RPC readiness");
    require(fixture.iop.installCommandService(), "explicit owned SIF command receiver installation failed");
    const uint32_t receiver = fixture.host.registers[2];
    const size_t published = fixture.host.sifWrites;
    require(receiver != 0u && fixture.iop.isMemoryRange(receiver, 0x80u), "published receiver has no owned RAM");
    require(fixture.iop.installCommandService() && fixture.host.registers[2] == receiver &&
        fixture.host.sifWrites == published && fixture.host.registers[1] == 0u &&
        fixture.host.registers[4] == 0u && !fixture.iop.rpcInitializationComplete(),
        "receiver reinstallation changed ownership or invented an EE peer");
    const auto sifcmd = consumer(0x82000u, "sifcmd", 0x0101u, {7u, 6u},
        {{7u, {3u, 0x5A331122u, 0u, 0u}, 0xA1B2C3D4u}, {6u, {3u, 0u, 0u, 0u}}});
    require(fixture.iop.loadOwnedModule("probe:sifcmd-owner", sifcmd.bytes).startResult == 0 &&
        word(fixture.iop, 0x82000u + ResultOffset + 4u) == 0xA1B2C3D4u &&
        word(fixture.iop, 0x82000u + ResultOffset + 8u) == 0x5A331122u,
        "SIFCMD void-return/soft-register owner differs");
    const auto cdvd = consumer(0x84000u, "cdvdman", 0x0101u, {50u},
        {{50u, {static_cast<uint32_t>(-11), 0u, 0u, 0u}}, {50u, {static_cast<uint32_t>(-11), 0u, 0u, 0u}}});
    require(fixture.iop.loadOwnedModule("probe:cdvd-owner", cdvd.bytes).startResult == 0 &&
        word(fixture.iop, 0x84000u + ResultOffset + 4u) != 0u &&
        word(fixture.iop, 0x84000u + ResultOffset + 4u) == word(fixture.iop, 0x84000u + ResultOffset + 8u),
        "CDVDMAN shared event owner differs");
    std::cout << "PASS existing SIFMAN/SIFCMD/CDVDMAN owned dispatch; no hardware parity claim\n";
}

void rejectedDispatch(const std::vector<uint8_t> &loadcore, const Original &original, uint16_t ordinal) {
    Fixture fixture(loadcore); fixture.installAll();
    const auto result = fixture.iop.loadOwnedModule("probe:rejected-ordinal",
        consumer(0x80000u, original.library, 0x0101u, {ordinal}, {{ordinal, {}}}).bytes);
    require(result.startResult == -1 && word(fixture.iop, 0x80000u + ResultOffset) == 0u &&
        word(fixture.iop, 0x80000u + ResultOffset + 4u) == Unwritten &&
        word(fixture.iop, 0x80000u + ResultOffset + 0x40u) == Unwritten,
        "unsupported/missing ordinal returned or executed completion stores");
    const uint32_t descriptor = moduleInfo(fixture.iop, result.moduleId);
    require((word(fixture.iop, descriptor + 8u) >> 16u & 15u) != 3u,
        "incomplete ordinal caller became resident");
    const std::string barrier = std::string("unhandled import ") + original.library + ':' + std::to_string(ordinal);
    require(std::any_of(fixture.host.logs.begin(), fixture.host.logs.end(), [&](const std::string &line) {
        return line.find(barrier) != std::string::npos;
    }), "rejected ordinal lost its explicit import barrier");
    std::cout << "PASS explicit barrier " << original.library << ':' << ordinal << '\n';
}
}

int main(int argc, char **argv) {
    try {
        require(argc == 2, "usage: ps2_iop_boot_provider_original_probe private-boot-module-directory");
        const std::filesystem::path directory(argv[1]);
        const auto loadcore = readOriginal(directory / "LOADCORE.IRX", 9849u, 0x2DA4F777096F198Eull);
        for (auto &original : providers) {
            original.bytes = readOriginal(directory / (std::string(original.file) + ".IRX"), original.size, original.fingerprint);
            require(fileWord(original.bytes, 0u) == 0x464C457Fu && fileHalf(original.bytes, 16u) == 0xFF80u &&
                fileHalf(original.bytes, 18u) == 8u && fileWord(original.bytes, original.tableFile) == 0x41C00000u &&
                fileHalf(original.bytes, original.tableFile + 8u) == original.version &&
                fileWord(original.bytes, original.tableFile + 20u + original.slots * 4u) == 0u,
                "selected original ELF/export revision anchors mismatch");
            std::cout << "ORIGINAL " << original.file << " size=" << original.size << " sha256=" << original.sha256 << '\n';
        }
        linkMatrix(loadcore);
        majorVersion(loadcore);
        ownedDispatch(loadcore);
        rejectedDispatch(loadcore, providers[0], 6u);
        rejectedDispatch(loadcore, providers[3], 8u);
        rejectedDispatch(loadcore, providers[3], 9u);
        for (const auto &original : providers)
            rejectedDispatch(loadcore, original, static_cast<uint16_t>(original.slots));
        std::cout << "PASS scoped original provider metadata/link/dispatch contract. Synthetic callers only; "
            "no original provider startups, VBLANK callback/timing, disc IO, PCSX2 lockstep or gameplay parity tested.\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "FAIL original boot provider contract: " << error.what() << '\n';
        return 1;
    }
}
