#include "fate/pad_boot_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <cstring>
#include <stdexcept>

namespace {
bool pad_store8(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime,uint32_t address,uint8_t value) {
    ps2TraceGuestWrite(rdram,address,1u,value,0u,"WRITE8",ctx);
    try {
        runtime->memory().write8(address,value);
        return true;
    } catch(const std::exception&) {
        ctx->cop0_badvaddr=address;
        runtime->SignalException(ctx,EXCEPTION_ADDRESS_ERROR_STORE);
        return false;
    }
}
bool pad_store16(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime,uint32_t address,uint16_t value) {
    ps2TraceGuestWrite(rdram,address,2u,value,0u,"WRITE16",ctx);
    try {
        runtime->memory().write16(address,value);
        return true;
    } catch(const std::exception&) {
        ctx->cop0_badvaddr=address;
        runtime->SignalException(ctx,EXCEPTION_ADDRESS_ERROR_STORE);
        return false;
    }
}
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
#include "recovered/pad_initialize_return_001adf60.inc"
#include "recovered/pad_state_reset_001711e0.inc"
#include "recovered/pad_buffer_reset_00171130.inc"
#include "recovered/pad_configuration_00170d00.inc"
static_assert(sizeof(fate_recovered_00170b24_words)==fate::recomp::PadBootEnd-fate::recomp::PadBootStart);
static_assert(sizeof(fate_recovered_001addd0_words)==fate::recomp::PadInitEnd-fate::recomp::PadInitStart);
static_assert(sizeof(fate_recovered_001aef98_words)==fate::recomp::PadVersionEnd-fate::recomp::PadVersionStart);
static_assert(sizeof(fate_recovered_001adf60_words)==fate::recomp::PadInitializeReturnEnd-fate::recomp::PadInitializeReturnStart);
static_assert(sizeof(fate_recovered_001711e0_words)==fate::recomp::PadStateResetEnd-fate::recomp::PadStateResetStart);
static_assert(sizeof(fate_recovered_00171130_words)==fate::recomp::PadBufferResetEnd-fate::recomp::PadBufferResetStart);
static_assert(sizeof(fate_recovered_00170d00_words)==fate::recomp::PadConfigurationEnd-fate::recomp::PadConfigurationStart);
}

std::span<const uint32_t> fate::recomp::pad_initialize_return_original_words() noexcept {
    return fate_recovered_001adf60_words;
}

void fate::recomp::register_pad_initialize_return_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+PadInitializeReturnStart,fate_recovered_001adf60_words.data(),sizeof(fate_recovered_001adf60_words))!=0)
        throw std::runtime_error("Pad initialize return words differ from original XL ELF");
    for(const auto pc:PadInitializeReturnPcs)
        if(runtime.hasFunction(pc)) throw std::runtime_error("Pad initialize return mapping conflict");
    for(const auto pc:PadInitializeReturnPcs)
        if(!runtime.registerFunction(pc,fate_recovered_001adf60))
            throw std::runtime_error("Pad initialize return registration failed");
}

std::span<const uint32_t> fate::recomp::pad_state_reset_original_words() noexcept {
    return fate_recovered_001711e0_words;
}
std::span<const uint32_t> fate::recomp::pad_buffer_reset_original_words() noexcept {
    return fate_recovered_00171130_words;
}
std::span<const uint32_t> fate::recomp::pad_configuration_original_words() noexcept {
    return fate_recovered_00170d00_words;
}

void fate::recomp::register_pad_data_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+PadStateResetStart,fate_recovered_001711e0_words.data(),sizeof(fate_recovered_001711e0_words))!=0||
       std::memcmp(ram+PadBufferResetStart,fate_recovered_00171130_words.data(),sizeof(fate_recovered_00171130_words))!=0||
       std::memcmp(ram+PadConfigurationStart,fate_recovered_00170d00_words.data(),sizeof(fate_recovered_00170d00_words))!=0)
        throw std::runtime_error("Pad data initialization words differ from original XL ELF");
    for(const auto pc:PadDataPcs)
        if(runtime.hasFunction(pc)) throw std::runtime_error("Pad data initialization mapping conflict");
    for(const auto pc:PadDataPcs) {
        const auto function=pc>=PadStateResetStart?fate_recovered_001711e0:
            pc>=PadBufferResetStart?fate_recovered_00171130:fate_recovered_00170d00;
        if(!runtime.registerFunction(pc,function))
            throw std::runtime_error("Pad data initialization registration failed");
    }
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
