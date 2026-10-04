#include "fate/dispatcher.hpp"
#include "ps2_runtime.h"

#include <cstddef>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>

static_assert(sizeof(R5900Context{}.r[0]) == 16, "R5900 GPR width must remain 128 bits");
static_assert(alignof(R5900Context) == 16, "R5900 context alignment is architectural");
static_assert(sizeof(R5900Context{}.pc) == sizeof(std::uint32_t), "Guest PC must remain 32 bits");
static_assert(sizeof(R5900Context{}.hi) == sizeof(std::uint64_t), "R5900 HI must remain 64 bits");
static_assert(sizeof(PS2Runtime::RecompiledFunction) == sizeof(void*), "Host function pointers remain native width");

namespace {

void dynamic_test_function(std::uint8_t*, R5900Context*, PS2Runtime*) {}

}

int main() {
    constexpr std::uint32_t entry = 0x00100008u;
    constexpr std::uint32_t first_direct_target = 0x001ad6e8u;
    constexpr std::uint32_t dynamic_pc = 0x00300000u;

    try {
        auto runtime = std::make_unique<PS2Runtime>();
        if (!runtime->memory().initialize(PS2_RAM_SIZE) || !runtime->syncCoreSubsystems()) {
            throw std::runtime_error("PS2Runtime initialization failed");
        }

        fate::dispatch::init_dispatcher();
        const auto host_entry = fate::dispatch::get_function(entry);
        const auto runtime_entry = runtime->lookupFunction(entry);
        const auto host_target = fate::dispatch::get_function(first_direct_target);
        const auto runtime_target = runtime->lookupFunction(first_direct_target);
        if (!host_entry || !host_target || !runtime->hasFunction(entry) ||
            !runtime->hasFunction(first_direct_target) || runtime_entry != host_entry ||
            runtime_target != host_target) {
            throw std::runtime_error("Host and PS2Runtime dispatch catalogs disagree");
        }
        if (runtime->hasFunction(entry - 4u) || fate::dispatch::get_function(entry - 4u)) {
            throw std::runtime_error("An untranslated guest PC was reported as registered");
        }
        if (!runtime->registerFunction(dynamic_pc, &dynamic_test_function) ||
            fate::dispatch::get_function(dynamic_pc) != &dynamic_test_function ||
            runtime->lookupFunction(dynamic_pc) != &dynamic_test_function) {
            throw std::runtime_error("Runtime registration is not visible to host dispatch");
        }
        if (!runtime->registerFunction(entry, &dynamic_test_function) ||
            fate::dispatch::get_function(entry) != &dynamic_test_function ||
            runtime->lookupFunction(entry) != &dynamic_test_function) {
            throw std::runtime_error("Runtime replacement is not visible to host dispatch");
        }

        std::cout << "dispatch_contract=PASS entry=0x100008 first_target=0x1ad6e8"
                  << " dynamic_registration=PASS replacement=PASS"
                  << " table_base=0x" << std::hex << g_ps2RecompiledFunctionTableBase
                  << " table_end=0x" << g_ps2RecompiledFunctionTableEnd
                  << " slots=" << std::dec << g_ps2RecompiledFunctionTableSlotCount
                  << " runtime_size=" << sizeof(PS2Runtime)
                  << " runtime_alignment=" << alignof(PS2Runtime) << '\n';
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "dispatch_contract=FAIL reason=" << error.what() << '\n';
        return 1;
    }
}
