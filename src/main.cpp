// main.cpp — Dynasty Warriors 3 XL PC Native Boot Engine
//
// Architecture:
//   1. Allocate 32MB RDRAM buffer (PS2 physical memory map)
//   2. Load ELF segments into RDRAM at their virtual addresses
//   3. Set up initial CPU context (SP, GP as the ELF expects)
//   4. Register all recompiled functions with the dispatcher
//   5. Register HLE function overrides (CDVD, pad, GS, etc.)
//   6. Call _start -> execution continues through the dispatcher's
//      dispatchGuestBranch until the game loop takes over
//

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ee_scheduler.h"
#include "fate/boot_continuations.hpp"
#include "fate/dispatcher.hpp"
#include "fate/elf.hpp"
#include "fate/guest_float_environment.hpp"
#include "fate/vfs/vfs_hook.hpp"
#include "fate/input/pad_bridge.hpp"
#include "fate/native_iop_boot.hpp"
#include "fate/resume_catalog.hpp"
#include "fate/native_presenter.hpp"
#include <charconv>

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <memory>
#include <stdexcept>
#include <cstdio>
#include <limits>
#include <filesystem>

// ============================================================
// ELF loader — reads the game ELF into RDRAM
// ============================================================
static bool load_elf_into_rdram(const char* elf_path, uint8_t* rdram, uint32_t rdram_size,
                                 uint32_t& entry_point, uint32_t& gp_value) {
    std::ifstream f(elf_path, std::ios::binary | std::ios::ate);
    if (!f) {
        std::cerr << "[ELF] Cannot open: " << elf_path << "\n";
        return false;
    }

    const std::streamoff file_size = f.tellg();
    if (file_size < 0 || static_cast<std::uint64_t>(file_size) > std::numeric_limits<std::size_t>::max() ||
        static_cast<std::uint64_t>(file_size) > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        std::cerr << "[ELF] Invalid or unsupported file size\n";
        return false;
    }

    std::vector<std::byte> file_bytes(static_cast<std::size_t>(file_size));
    f.seekg(0, std::ios::beg);
    if (!file_bytes.empty()) {
        f.read(reinterpret_cast<char*>(file_bytes.data()), static_cast<std::streamsize>(file_bytes.size()));
        if (f.gcount() != static_cast<std::streamsize>(file_bytes.size())) {
            std::cerr << "[ELF] Short read while loading input file\n";
            return false;
        }
    }

    try {
        const fate::elf::Image image = fate::elf::Image::parse(file_bytes);
        image.load_segments(file_bytes, std::span<std::byte>(reinterpret_cast<std::byte*>(rdram), rdram_size));
        entry_point = image.entry_point();
        gp_value = 0; // The current retail entry initializes GP itself.

        std::cout << "[ELF] Entry: 0x" << std::hex << entry_point << std::dec << "\n";
        std::cout << "[ELF] " << image.program_headers().size() << " program headers\n";
        for (const auto& program : image.program_headers()) {
            if (program.type != 1U) {
                continue;
            }
            const std::uint32_t physical = program.virtual_address & 0x1fffffffu;
            std::cout << "[ELF] LOAD vaddr=0x" << std::hex << program.virtual_address
                      << " phys=0x" << physical
                      << " filesz=0x" << program.file_size
                      << " memsz=0x" << program.memory_size << std::dec << "\n";
        }
        return true;
    } catch (const std::exception& error) {
        std::cerr << "[ELF] Invalid image: " << error.what() << "\n";
        return false;
    }
}

// ============================================================
// Global pointer to runtime for use in the function registrar
// ============================================================
static PS2Runtime* g_runtime_ptr = nullptr;

// ============================================================
// HLE function registration — called AFTER the runtime is created
// ============================================================
extern "C" {
    // These are defined in vfs_hook.cpp and hle_stubs.cpp
    void hle_sceCdSearchFile(uint8_t*, R5900Context*, PS2Runtime*);
    void hle_sceCdRead      (uint8_t*, R5900Context*, PS2Runtime*);
    void hle_sceCdSync      (uint8_t*, R5900Context*, PS2Runtime*);
    void hle_sceCdGetError  (uint8_t*, R5900Context*, PS2Runtime*);
    void hle_FlushCache     (uint8_t*, R5900Context*, PS2Runtime*);
}

// Global pointer for hooks
extern "C" {
    void (*g_ps2_indirect_jump_handler)(uint32_t, uint8_t*, R5900Context*, PS2Runtime*) = nullptr;
}

int main(int argc, char** argv) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    const char* dump_root = "C:/DW3/sources/dumps/dw3xl_ps2";
    const char* elf_path  = "C:/DW3/sources/dumps/dw3xl_ps2/SLUS_206.17";

    bool live = false;
    unsigned live_seconds = 0;
    int positional = 0;
    for (int i = 1; i < argc; ++i) {
        const std::string_view arg(argv[i]);
        if (arg == "--live") live = true;
        else if (arg == "--live-seconds" && i + 1 < argc) {
            const std::string_view duration(argv[++i]);
            const auto parsed = std::from_chars(duration.data(), duration.data() + duration.size(), live_seconds);
            if (parsed.ec != std::errc{} || parsed.ptr != duration.data() + duration.size() ||
                live_seconds == 0 || live_seconds > 86400) {
                std::cerr << "[BOOT] --live-seconds requires an integer from 1 to 86400.\n";
                return 2;
            }
            live = true;
        } else if (!arg.starts_with("--") && positional < 2) {
            if (positional++ == 0) dump_root = argv[i];
            else elf_path = argv[i];
        } else {
            std::cerr << "Usage: fate_game [dump-root] [elf] [--live] [--live-seconds N]\n";
            return 2;
        }
    }

    std::cout << "[BOOT] Dynasty Warriors 3 XL - PC Native Boot" << std::endl;
    std::cout << "[BOOT] Dump root: " << dump_root << std::endl;
    std::cout << "[BOOT] ELF path:  " << elf_path  << std::endl;

    // -----------------------------------------------------------------
    // 1. Construct the owning runtime and initialize its bounded EE memory.
    // -----------------------------------------------------------------
    auto runtime = std::make_unique<PS2Runtime>();
    constexpr uint32_t RDRAM_SIZE = 32u * 1024u * 1024u;
    if (!runtime->memory().initialize(RDRAM_SIZE) || !runtime->syncCoreSubsystems()) {
        std::cerr << "[BOOT] Runtime memory/subsystem initialization failed." << std::endl;
        return -1;
    }
    uint8_t* rdram = runtime->memory().getRDRAM();
    std::cout << "[MEM ] RDRAM allocated: " << (RDRAM_SIZE >> 20) << " MB at host addr "
              << static_cast<void*>(rdram) << std::endl;

    // -----------------------------------------------------------------
    // 2. Load ELF into RDRAM
    // -----------------------------------------------------------------
    uint32_t entry_point = 0, gp_value = 0;
    if (!load_elf_into_rdram(elf_path, rdram, RDRAM_SIZE, entry_point, gp_value)) {
        std::cerr << "[ELF] FATAL: Failed to load ELF. Cannot continue." << std::endl;
        return -1;
    }

    // -----------------------------------------------------------------
    // 3. Initialize dispatcher (registers all recompiled functions)
    // -----------------------------------------------------------------
    std::cout << "[CORE] Initializing dispatcher..." << std::endl;
    fate::dispatch::init_dispatcher();
    std::cout << "[CORE] Dispatcher initialized." << std::endl;
    try {
        fate::recomp::register_boot_continuations(*runtime);
        const auto resumes = fate::recomp::register_generated_resumes(*runtime);
        std::cout << "[CORE] Verified generated resume aliases installed: " << resumes << std::endl;
        std::cout << "[CORE] Verified boot continuations registered." << std::endl;
    } catch (const std::exception& error) {
        std::cerr << "[CORE] Boot continuation registration failed: " << error.what() << std::endl;
        return -1;
    }

    // -----------------------------------------------------------------
    // 4. Initialize VFS (map actual dump files to PS2 CD paths)
    // -----------------------------------------------------------------
    std::cout << "[VFS ] Initializing VFS..." << std::endl;
    fate::vfs::VFSHook::get().initialize(dump_root);
    auto io_paths = PS2Runtime::getIoPaths();
    io_paths.cdRoot = std::filesystem::absolute(dump_root);
    io_paths.hostRoot = std::filesystem::absolute("data");
    PS2Runtime::setIoPaths(io_paths);
    try {
        fate::configure_native_iop_boot(*runtime, io_paths.hostRoot / "iop");
    } catch (const std::exception& error) {
        std::cerr << "[IOP ] " << error.what() << std::endl;
        return -1;
    }

    // -----------------------------------------------------------------
    // 5. Initialize Input Bridge
    // -----------------------------------------------------------------
    std::cout << "[INPUT] Initializing Pad Bridge..." << std::endl;
    fate::input::PadBridge::get().initialize();

    // -----------------------------------------------------------------
    // 6. Publish the constructed runtime for host callbacks.
    // -----------------------------------------------------------------
    g_runtime_ptr = runtime.get();

    // -----------------------------------------------------------------
    // 7. Set up initial CPU context
    // -----------------------------------------------------------------
    R5900Context& ctx = runtime->cpu();

    // PS2 EE kernel stack pointer — kernel sets SP to 0x82000 by convention
    // (top of kernel stack area, grows downward)
    // For DW3XL: ELF loads at 0x100000, so stack can be below that
    constexpr uint32_t INITIAL_SP = 0x00080000; // 512 KB mark — safe below ELF load base
    const uint64_t initial_sp_words[2]{INITIAL_SP, 0u};
    std::memcpy(&ctx.r[29], initial_sp_words, sizeof(initial_sp_words)); // $sp

    // Set GP to 0 — the ELF will initialize it in _start prologue
    const uint64_t initial_gp_words[2]{0u, 0u};
    std::memcpy(&ctx.r[28], initial_gp_words, sizeof(initial_gp_words)); // $gp

    // Start from the entry declared by the loaded ELF. The retail image currently
    // declares 0x00100008, which is also registered in the dispatcher catalog.
    ctx.pc = entry_point;
    runtime->eeScheduler().reset(rdram, ctx);

    // In the standalone no-BIOS target, explicitly load the owned ROM SIFCMD
    // service after EE memory and scheduler initialization. Its InitCmd
    // continuation runs on IOP cycles and waits for the real EE packet.
    const auto sifcmd = runtime->loadIopModule("rom0:SIFCMD");
    if (sifcmd.moduleId <= 0) {
        std::cerr << "[IOP ] ROM SIFCMD service initialization failed." << std::endl;
        return -1;
    }
    const auto cdvdfsv_path = io_paths.hostRoot / "iop" / "dw3xl" / "CDVDFSV.IRX";
    if (!runtime->queueIopModuleAfterRpcInit("host0:iop/boot/REBOOT.IRX")) {
        std::cerr << "[IOP ] Original REBOOT startup queue rejected." << std::endl;
        return -1;
    }
    if (!std::filesystem::is_regular_file(cdvdfsv_path) ||
        !runtime->queueIopModuleAfterRpcInit("host0:iop/dw3xl/CDVDFSV.IRX")) {
        std::cerr << "[IOP ] Missing extracted CDVDFSV; prepare data with tools/extract_iop_modules.py." << std::endl;
        return -1;
    }

    std::cout << "[CPU ] Initial PC=0x" << std::hex << ctx.pc
              << " SP=0x" << INITIAL_SP << std::dec << std::endl;

    // -----------------------------------------------------------------
    // 8. Execute _start through the dispatcher
    // -----------------------------------------------------------------
    std::cout << "[EXEC] Invoking ELF _start via recompiled dispatcher..." << std::endl;

    try {
        auto start_func = fate::dispatch::get_function(entry_point);
        if (!start_func) {
            std::cerr << "[EXEC] FATAL: _start (0x" << std::hex << entry_point
                      << ") not found in dispatcher!" << std::dec << std::endl;
            return -1;
        }

        // The scheduler owns guest contexts, events and syscall invocations.
        // Calling translations directly leaves safe-point events unprocessed
        // and cannot resume EeDispatcherTransfer from installed handlers.
        const fate::GuestFloatEnvironment guest_float_environment;
        runtime->setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
        if (live) {
            const auto result = fate::run_native_live(*runtime, live_seconds);
            // An intentional observer stop is not an ELF return or a verified boot.
            if (result == fate::LiveExit::WindowClosed) return 0;
            if (result == fate::LiveExit::Deadline) return 2;
        } else {
            runtime->eeScheduler().run();
        }
        if (ctx.pc != 0) {
            std::cerr << "[EXEC] Execution stopped at PC=0x" << std::hex << ctx.pc << std::dec << std::endl;
            ctx.dump();
            return -1;
        }

        std::cout << "[EXEC] _start returned. Final PC=0x" << std::hex << ctx.pc << std::dec << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "[EXEC] NATIVE EXCEPTION: " << e.what() << std::endl;
        std::cerr << "[CPU ] At PC=0x" << std::hex << ctx.pc << std::dec << std::endl;
        ctx.dump();
        return -1;
    } catch (...) {
        std::cerr << "[EXEC] UNKNOWN EXCEPTION at PC=0x" << std::hex << ctx.pc << std::dec << std::endl;
        ctx.dump();
        return -1;
    }

    return 0;
}
