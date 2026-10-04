#define NOMINMAX
#include "fate/boot_chain_probe.hpp"
#include "fate/elf.hpp"
#include "fate/provenance.hpp"
#include <iostream>
#include <iomanip>
#include <ps2_runtime.h>
#include <ps2_runtime_macros.h>
#include <algorithm>
#include <array>
#include <bit>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <optional>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
// Include after PS2 declarations: Windows defines EXCEPTION_BREAKPOINT as a macro.
#include <windows.h>

void entry_0x100008(std::uint8_t*, R5900Context*, PS2Runtime*);

namespace fate::bootchain {
namespace {
std::string hex(std::uint64_t value, int width = 8) {
    std::ostringstream out;
    out << "0x" << std::hex << std::setfill('0') << std::setw(width) << value;
    return out.str();
}
std::uint32_t u32(std::span<const std::byte> bytes, std::size_t offset) {
    if (offset > bytes.size() || bytes.size() - offset < 4) throw std::runtime_error("Truncated word");
    std::uint32_t result{};
    for (unsigned i = 0; i < 4; ++i) result |= std::to_integer<std::uint32_t>(bytes[offset + i]) << (8u * i);
    return result;
}
std::array<std::uint64_t, 2> reg(const R5900Context& ctx, std::size_t index) {
    std::array<std::uint64_t, 2> value{};
    std::memcpy(value.data(), &ctx.r[index], sizeof(value));
    return value;
}
void snapshot(std::ostream& out, const R5900Context& ctx) {
    out << "{\"pc\":\"" << hex(ctx.pc) << "\",\"gpr128\":[";
    for (std::size_t i = 0; i < 32; ++i) {
        const auto value = reg(ctx, i);
        if (i != 0) out << ',';
        out << "{\"index\":" << i << ",\"low\":\"" << hex(value[0], 16)
            << "\",\"high\":\"" << hex(value[1], 16) << "\"}";
    }
    out << "],\"insn_count\":" << ctx.insn_count << ",\"sa\":" << ctx.sa
        << ",\"hi\":\"" << hex(ctx.hi, 16) << "\",\"lo\":\"" << hex(ctx.lo, 16)
        << "\",\"hi1\":\"" << hex(ctx.hi1, 16) << "\",\"lo1\":\"" << hex(ctx.lo1, 16)
        << "\",\"cop0_status\":\"" << hex(ctx.cop0_status)
        << "\",\"cop0_cause\":\"" << hex(ctx.cop0_cause)
        << "\",\"cop0_epc\":\"" << hex(ctx.cop0_epc)
        << "\",\"branch_pc\":\"" << hex(ctx.branch_pc)
        << "\",\"in_delay_slot\":" << (ctx.in_delay_slot ? "true" : "false") << '}';
}
struct Stop : std::runtime_error {
    std::string category;
    Stop(std::string classification, const std::string& reason)
        : std::runtime_error(reason), category(std::move(classification)) {}
};
struct Probe {
    Loaded* loaded{};
    std::filesystem::path evidence;
    std::ofstream trace;
    std::array<std::array<std::uint64_t, 2>, 32> expected{};
    std::vector<std::uint8_t> expected_ram;
    std::uint32_t expected_pc{};
    bool delay{};
    std::uint32_t delay_target{};
    std::optional<std::uint32_t> pending_store;
    std::uint64_t instructions{};
    const PS2Runtime* raw_candidate{};
    std::string last_method;

    void compare(const R5900Context& ctx) {
        for (std::size_t i = 0; i < expected.size(); ++i) {
            if (reg(ctx, i) != expected[i]) throw Stop("CPU_OR_ABI", "GPR differs from ELF-derived instruction oracle: r" + std::to_string(i));
        }
        if (ctx.in_delay_slot != delay) throw Stop("CPU", "Delay-slot state differs from instruction oracle");
        if (pending_store) {
            const auto address = *pending_store;
            if (!std::equal(expected_ram.begin() + address, expected_ram.begin() + address + 16, loaded->ram.begin() + address)) {
                throw Stop("CPU_OR_MEMORY", "SQ destination differs from instruction oracle");
            }
            pending_store.reset();
        }
    }
    void signed_word(std::size_t index, std::uint32_t bits) {
        if (index != 0) expected[index][0] = static_cast<std::uint64_t>(static_cast<std::int64_t>(std::bit_cast<std::int32_t>(bits)));
    }
    void advance(std::uint32_t pc, std::uint32_t word) {
        const auto op = word >> 26;
        const auto rs = static_cast<std::size_t>((word >> 21) & 31u);
        const auto rt = static_cast<std::size_t>((word >> 16) & 31u);
        const auto rd = static_cast<std::size_t>((word >> 11) & 31u);
        const auto immediate = static_cast<std::int32_t>(std::bit_cast<std::int16_t>(static_cast<std::uint16_t>(word)));
        const bool was_delay = delay;
        std::uint32_t next = pc + 4u;
        if (word == 0) {
            // Architectural NOP.
        } else if (op == 15u) {
            signed_word(rt, (word & 0xffffu) << 16);
        } else if (op == 9u) {
            signed_word(rt, static_cast<std::uint32_t>(expected[rs][0]) + static_cast<std::uint32_t>(immediate));
        } else if (op == 0u && (word & 63u) == 43u) {
            if (rd != 0) expected[rd][0] = expected[rs][0] < expected[rt][0] ? 1u : 0u;
        } else if (op == 31u) {
            const auto address = static_cast<std::uint32_t>(expected[rs][0]) + static_cast<std::uint32_t>(immediate);
            if ((address & 15u) != 0 || address > ram_size - 16u) throw Stop("MEMORY", "SQ outside aligned EE RAM");
            std::memcpy(expected_ram.data() + address, expected[rt].data(), 16);
            pending_store = address;
        } else if (op == 5u && !was_delay) {
            const bool taken = expected[rs][0] != expected[rt][0];
            delay_target = taken ? pc + 4u + static_cast<std::uint32_t>(immediate * 4) : pc + 8u;
            delay = true;
        } else {
            throw Stop("REFERENCE_LIMIT", "Instruction outside bounded reference subset at " + hex(pc));
        }
        if (was_delay) { next = delay_target; delay = false; }
        expected_pc = next;
        ++instructions;
    }
};
Probe* active{};
std::vector<std::byte> read_file(const std::filesystem::path& path) {
    std::ifstream input(path, std::ios::binary | std::ios::ate);
    const auto length = input.tellg();
    if (!input || length < 0 || length > 16 * 1024 * 1024) throw std::runtime_error("Cannot read bounded ELF input");
    std::vector<std::byte> bytes(static_cast<std::size_t>(length));
    input.seekg(0);
    input.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    if (!input) throw std::runtime_error("Short ELF read");
    return bytes;
}
void put32(std::vector<std::byte>& bytes, std::size_t offset, std::uint32_t value) {
    for (unsigned i = 0; i < 4; ++i) bytes.at(offset + i) = static_cast<std::byte>((value >> (i * 8u)) & 255u);
}
void put16(std::vector<std::byte>& bytes, std::size_t offset, std::uint16_t value) {
    bytes.at(offset) = static_cast<std::byte>(value & 255u);
    bytes.at(offset + 1) = static_cast<std::byte>(value >> 8);
}
std::vector<std::byte> fixture() {
    std::vector<std::byte> bytes(512);
    bytes[0] = std::byte{0x7f}; bytes[1] = std::byte{'E'}; bytes[2] = std::byte{'L'}; bytes[3] = std::byte{'F'};
    bytes[4] = bytes[5] = bytes[6] = std::byte{1};
    put16(bytes, 16, 2); put16(bytes, 18, 8); put32(bytes, 20, 1);
    put32(bytes, 24, 0x100000); put32(bytes, 28, 0x80);
    put16(bytes, 40, 52); put16(bytes, 42, 32); put16(bytes, 44, 1);
    put32(bytes, 0x80, 1); put32(bytes, 0x84, 0x100); put32(bytes, 0x88, 0x100000);
    put32(bytes, 0x8c, 0x100000); put32(bytes, 0x90, 32); put32(bytes, 0x94, 64);
    put32(bytes, 0x98, 5); put32(bytes, 0x9c, 16);
    std::fill(bytes.begin() + 0x100, bytes.begin() + 0x120, std::byte{0xa5});
    return bytes;
}
}

Loaded load(std::span<const std::byte> bytes) {
    const auto image = elf::Image::parse(bytes);
    if (bytes[6] != std::byte{1} || u32(bytes, 20) != 1u ||
        bytes[16] != std::byte{2} || bytes[17] != std::byte{0} ||
        bytes[40] != std::byte{52} || bytes[41] != std::byte{0}) {
        throw std::runtime_error("Expected current ET_EXEC ELF32 header");
    }
    Loaded staged;
    staged.entry = image.entry_point();
    bool executable_entry{};
    for (const auto& ph : image.program_headers()) {
        if (ph.type != 1u) continue;
        const auto region = ph.virtual_address & 0xe0000000u;
        if (region != 0 && region != 0x80000000u && region != 0xa0000000u) throw std::runtime_error("Unsupported ELF guest address region");
        const auto physical = ph.virtual_address & 0x1fffffffu;
        if (ph.file_size > ph.memory_size || physical > ram_size || ph.memory_size > ram_size - physical ||
            ph.offset > bytes.size() || ph.file_size > bytes.size() - ph.offset) {
            throw std::runtime_error("PT_LOAD exceeds bounded file or EE RAM");
        }
        if (ph.alignment > 1u && ((ph.alignment & (ph.alignment - 1u)) != 0 ||
            ph.virtual_address % ph.alignment != ph.offset % ph.alignment)) throw std::runtime_error("Invalid PT_LOAD alignment");
        for (const auto& prior : staged.segments) {
            if (ph.memory_size != 0 && prior.memory_size != 0 && physical < prior.physical + prior.memory_size && prior.physical < physical + ph.memory_size) {
                // Retail XL repeats zero-fill ranges. Their intersection is idempotent;
                // any overlap touching file-backed bytes remains rejected.
                const auto overlap_start = std::max(physical, prior.physical);
                if (overlap_start < physical + ph.file_size || overlap_start < prior.physical + prior.file_size) {
                    throw std::runtime_error("Conflicting PT_LOAD memory overlap");
                }
            }
        }
        if ((ph.flags & 1u) != 0 && staged.entry >= ph.virtual_address &&
            static_cast<std::uint64_t>(staged.entry) < static_cast<std::uint64_t>(ph.virtual_address) + ph.file_size) executable_entry = true;
        staged.segments.push_back({physical, ph.offset, ph.file_size, ph.memory_size, ph.flags});
    }
    if (!executable_entry || (staged.entry & 3u) != 0) throw std::runtime_error("Entry is not aligned file-backed executable memory");
    staged.ram.assign(ram_size, 0);
    for (const auto& ph : staged.segments) {
        std::memcpy(staged.ram.data() + ph.physical, bytes.data() + ph.offset, ph.file_size);
        if (std::memcmp(staged.ram.data() + ph.physical, bytes.data() + ph.offset, ph.file_size) != 0 ||
            !std::all_of(staged.ram.begin() + ph.physical + ph.file_size, staged.ram.begin() + ph.physical + ph.memory_size, [](auto value) { return value == 0; })) {
            throw std::runtime_error("Loaded segment or BSS verification failed");
        }
    }
    return staged;
}
void observe(const R5900Context& ctx, std::uint32_t pc, std::uint32_t word) {
    if (!active) throw std::runtime_error("Probe is not initialized");
    auto& probe = *active;
    if (probe.instructions >= 128u) throw Stop("BUDGET", "Diagnostic instruction budget exhausted");
    if (pc != probe.expected_pc) throw Stop("CPU", "Next instruction PC differs from ELF-derived oracle");
    if (pc > ram_size - 4u || u32(std::as_bytes(std::span(probe.loaded->ram)), pc) != word) throw Stop("RECOMP_OR_LOADER", "Generated opcode annotation does not match loaded retail bytes");
    probe.compare(ctx);
    probe.trace << "{\"event\":\"before_instruction\",\"ordinal\":" << probe.instructions
        << ",\"instruction_pc\":\"" << hex(pc) << "\",\"word\":\"" << hex(word) << "\",\"state\":";
    snapshot(probe.trace, ctx);
    probe.trace << "}\n";
    probe.advance(pc, word);
}
void require_runtime(const PS2Runtime* candidate, const R5900Context& ctx, const char* method) {
    if (!active) throw std::runtime_error("Probe is not initialized");
    active->compare(ctx);
    if (ctx.pc != active->expected_pc) throw Stop("CPU", "Branch destination differs after delay slot");
    active->last_method = method;
    active->trace << "{\"event\":\"runtime_lifetime_barrier\",\"method\":\"" << method
        << "\",\"candidate_matches_baseline_raw_buffer\":" << (candidate == active->raw_candidate ? "true" : "false") << ",\"state\":";
    snapshot(active->trace, ctx);
    active->trace << "}\n";
    std::array<void*, 16> frames{};
    const auto count = CaptureStackBackTrace(0, static_cast<DWORD>(frames.size()), frames.data(), nullptr);
    const auto module_base = reinterpret_cast<std::uintptr_t>(GetModuleHandleW(nullptr));
    std::ofstream native_stack(active->evidence / "native_stack.json");
    native_stack << "{\"module_base\":\"" << hex(module_base, 16) << "\",\"frames\":[";
    for (USHORT i = 0; i < count; ++i) {
        if (i != 0) native_stack << ',';
        const auto address = reinterpret_cast<std::uintptr_t>(frames[i]);
        native_stack << "{\"address\":\"" << hex(address, 16) << "\",\"relative_to_main_module\":";
        if (address >= module_base) native_stack << '\"' << hex(address - module_base, 16) << '\"';
        else native_stack << "null";
        native_stack << '}';
    }
    native_stack << "],\"symbolization\":\"Use matching diagnostic EXE/PDB; system-module frames may be outside main module\"}\n";
    throw Stop("ABI_RUNTIME_LIFETIME", "Baseline provides raw storage, not a constructed PS2Runtime object; invocation prohibited");
}
int run(const std::filesystem::path& elf_path, const std::filesystem::path& evidence) {
    provenance::verify_file(elf_path, 1905272u, "d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731");
    auto bytes = read_file(elf_path);
    auto loaded = load(bytes);
    if (loaded.entry != 0x00100008u) throw std::runtime_error("Pinned XL entry does not match translated entry");
    std::filesystem::create_directories(evidence);
    R5900Context ctx;
    const std::array<std::uint64_t, 2> initial_sp{0x00080000u, 0u};
    std::memcpy(&ctx.r[29], initial_sp.data(), sizeof(initial_sp));
    ctx.pc = loaded.entry;
    std::ofstream initial(evidence / "initial.json");
    initial << "{\"entry\":\"" << hex(loaded.entry) << "\",\"ram_size\":" << ram_size << ",\"pt_load\":[";
    for (std::size_t i = 0; i < loaded.segments.size(); ++i) {
        if (i != 0) initial << ',';
        const auto& ph = loaded.segments[i];
        initial << "{\"physical\":\"" << hex(ph.physical) << "\",\"file_offset\":" << ph.offset
            << ",\"filesz\":" << ph.file_size << ",\"memsz\":" << ph.memory_size << ",\"flags\":" << ph.flags << '}';
    }
    initial << "],\"context_alignment\":" << alignof(R5900Context)
        << ",\"context_size\":" << sizeof(R5900Context)
        << ",\"host_pointer_bits\":" << sizeof(void*) * 8u
        << ",\"runtime_class_size\":" << sizeof(PS2Runtime)
        << ",\"runtime_class_alignment\":" << alignof(PS2Runtime)
        << ",\"baseline_raw_buffer_bytes\":16384"
        << ",\"runtime_object_constructed\":false,\"initial_state_provenance\":\"baseline host seed; not measured PCSX2 handoff\",\"state\":";
    snapshot(initial, ctx); initial << "}\n";
    std::ofstream stack(evidence / "stack_initial.bin", std::ios::binary);
    stack.write(reinterpret_cast<const char*>(loaded.ram.data() + 0x80000), 64);
    Probe probe;
    probe.loaded = &loaded; probe.evidence = evidence; probe.expected_pc = ctx.pc; probe.expected_ram = loaded.ram;
    for (std::size_t i = 0; i < 32; ++i) probe.expected[i] = reg(ctx, i);
    probe.trace.open(evidence / "trace.jsonl");
    if (!initial || !stack || !probe.trace) throw std::runtime_error("Cannot write probe evidence");
    // Preserve baseline pointer binding without invoking a method on raw storage.
    alignas(PS2Runtime) std::array<std::uint8_t, 16384> raw_storage{};
    auto* candidate = reinterpret_cast<PS2Runtime*>(raw_storage.data());
    probe.raw_candidate = candidate;
    active = &probe;
    try {
        entry_0x100008(loaded.ram.data(), &ctx, candidate);
        active = nullptr;
        throw std::runtime_error("Entry unexpectedly returned without diagnostic stop");
    } catch (const Stop& stop) {
        active = nullptr;
        std::ofstream result(evidence / "divergence.json");
        result << "{\"status\":\"STOPPED_NOT_CLOSED\",\"category\":\"" << stop.category
            << "\",\"reason\":\"" << stop.what() << "\",\"method\":\"" << probe.last_method
            << "\",\"instructions_compared\":" << probe.instructions
            << ",\"oracle\":\"bounded independent ELF-derived interpreter, not PCSX2 trace\",\"runtime_call_executed\":false,\"patched_past_divergence\":false,\"state\":";
        snapshot(result, ctx); result << "}\n";
        std::cout << stop.category << " PC=" << hex(ctx.pc) << " branch=" << hex(ctx.branch_pc) << " compared=" << probe.instructions << '\n';
        return stop.category == "ABI_RUNTIME_LIFETIME" ? 23 : 24;
    } catch (...) { active = nullptr; throw; }
}
int self_test() {
    auto bytes = fixture();
    const auto good = load(bytes);
    if (good.ram.size() != ram_size || good.ram[0x100000] != 0xa5u || good.ram[0x100020] != 0) throw std::runtime_error("Segment copy/BSS fixture failed");
    std::size_t rejected{};
    const auto reject = [&](std::vector<std::byte> bad) {
        try { static_cast<void>(load(bad)); } catch (const std::exception&) { ++rejected; return; }
        throw std::runtime_error("Malformed ELF accepted");
    };
    auto bad = bytes; bad.resize(25); reject(bad);
    bad = bytes; put32(bad, 0x90, 65); reject(bad);
    bad = bytes; put32(bad, 0x84, 500); reject(bad);
    bad = bytes; put32(bad, 0x88, ram_size - 16); reject(bad);
    bad = bytes; put32(bad, 24, 0x100020); reject(bad);
    bad = bytes; put32(bad, 0x98, 6); reject(bad);
    bad = bytes; put32(bad, 0x9c, 3); reject(bad);
    bad = bytes; put16(bad, 16, 3); reject(bad);
    bad = bytes; put32(bad, 0x88, 0x70000000); reject(bad);
    bad = bytes; put16(bad, 44, 2); std::copy_n(bad.begin() + 0x80, 32, bad.begin() + 0xa0); reject(bad);
    auto repeated_bss = bytes;
    put16(repeated_bss, 44, 2);
    std::copy_n(repeated_bss.begin() + 0x80, 32, repeated_bss.begin() + 0xa0);
    put32(repeated_bss, 0xa4, 0x120); put32(repeated_bss, 0xa8, 0x100020);
    put32(repeated_bss, 0xac, 0x100020); put32(repeated_bss, 0xb0, 0);
    put32(repeated_bss, 0xb4, 64);
    const auto bss_image = load(repeated_bss);
    if (bss_image.ram[0x100000] != 0xa5u || bss_image.ram[0x100040] != 0u) {
        throw std::runtime_error("Idempotent BSS overlap fixture failed");
    }
    Probe oracle;
    oracle.expected[1][0] = 1; oracle.expected[2][0] = 1; oracle.expected[3][0] = 2;
    oracle.advance(0x10002c, 0x1420fffau);
    if (!oracle.delay || oracle.expected_pc != 0x100030) throw std::runtime_error("Branch delay fixture failed");
    oracle.advance(0x100030, 0x24420010u);
    if (oracle.delay || oracle.expected_pc != 0x100018 || oracle.expected[2][0] != 17) throw std::runtime_error("Taken branch delay execution failed");
    oracle.expected[1][0] = 0;
    oracle.advance(0x10002c, 0x1420fffau); oracle.advance(0x100030, 0x24420010u);
    if (oracle.expected_pc != 0x100034) throw std::runtime_error("Untaken delay fixture failed");
    R5900Context mismatch;
    bool detected{};
    try { oracle.compare(mismatch); } catch (const Stop&) { detected = true; }
    if (!detected) throw std::runtime_error("Oracle failed to detect GPR corruption");
    std::cout << "Loader negatives=" << rejected << "; delay-slot and corruption checks passed\n";
    return 0;
}
}

// ABI link symbols only: barriers intercept first; accidental calls fail closed.
bool PS2Runtime::eeCheckpointDue(std::uint32_t) noexcept { std::abort(); }
void PS2Runtime::handleSyscall(std::uint8_t*, R5900Context*, std::uint32_t) { throw std::runtime_error("Unexpected unguarded runtime syscall"); }
bool PS2Runtime::dispatchGuestBranch(std::uint8_t*, R5900Context*, std::uint32_t, std::uint32_t, std::uint32_t, GuestBranchKind, const char*) {
    throw std::runtime_error("Unexpected unguarded runtime dispatch");
}
void PS2Runtime::Store128(std::uint8_t*, R5900Context*, std::uint32_t, __m128i) { throw std::runtime_error("Unexpected special-address runtime store"); }
