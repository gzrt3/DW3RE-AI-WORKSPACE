#include "fate/pad_boot_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <cstring>
#include <stdexcept>

namespace {
__m128i pad_load_quadword(PS2Runtime* runtime,R5900Context* ctx,uint32_t address) {
    try {
        return runtime->memory().read128(address&~15u);
    } catch(const std::exception&) {
        ctx->cop0_badvaddr=address;
        runtime->SignalException(ctx,EXCEPTION_ADDRESS_ERROR_LOAD);
        return _mm_setzero_si128();
    }
}
#include "recovered/pad_boot_tail_00170b24.inc"
#include "recovered/pad_init_resume_001addd0.inc"
#include "recovered/pad_version_return_001aef98.inc"
static_assert(sizeof(fate_recovered_00170b24_words)==fate::recomp::PadBootEnd-fate::recomp::PadBootStart);
static_assert(sizeof(fate_recovered_001addd0_words)==fate::recomp::PadInitEnd-fate::recomp::PadInitStart);
static_assert(sizeof(fate_recovered_001aef98_words)==fate::recomp::PadVersionEnd-fate::recomp::PadVersionStart);
}

std::span<const uint32_t> fate::recomp::pad_version_original_words() noexcept {
    return fate_recovered_001aef98_words;
}

void fate::recomp::register_pad_version_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+PadVersionStart,fate_recovered_001aef98_words.data(),sizeof(fate_recovered_001aef98_words))!=0)
        throw std::runtime_error("Pad version continuation words differ from original XL ELF");
    for(const auto pc:PadVersionPcs)
        if(runtime.hasFunction(pc)) throw std::runtime_error("Pad version continuation mapping conflict");
    for(const auto pc:PadVersionPcs)
        if(!runtime.registerFunction(pc,fate_recovered_001aef98))
            throw std::runtime_error("Pad version continuation registration failed");
}

std::span<const uint32_t> fate::recomp::pad_init_original_words() noexcept {
    return fate_recovered_001addd0_words;
}

void fate::recomp::register_pad_init_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+PadInitStart,fate_recovered_001addd0_words.data(),sizeof(fate_recovered_001addd0_words))!=0)
        throw std::runtime_error("Pad init continuation words differ from original XL ELF");
    for(const auto pc:PadInitPcs)
        if(runtime.hasFunction(pc)) throw std::runtime_error("Pad init continuation mapping conflict");
    for(const auto pc:PadInitPcs)
        if(!runtime.registerFunction(pc,fate_recovered_001addd0))
            throw std::runtime_error("Pad init continuation registration failed");
}

std::span<const uint32_t> fate::recomp::pad_boot_original_words() noexcept {
    return fate_recovered_00170b24_words;
}

void fate::recomp::register_pad_boot_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+PadBootStart,fate_recovered_00170b24_words.data(),sizeof(fate_recovered_00170b24_words))!=0)
        throw std::runtime_error("Pad boot continuation words differ from original XL ELF");
    for(const auto pc:PadBootPcs)
        if(runtime.hasFunction(pc)) throw std::runtime_error("Pad boot continuation mapping conflict");
    for(const auto pc:PadBootPcs)
        if(!runtime.registerFunction(pc,fate_recovered_00170b24))
            throw std::runtime_error("Pad boot continuation registration failed");
}
