#include "fate/waitsema_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <cstring>
#include <stdexcept>

namespace {
#include "recovered/waitsema_resume_001b1004.inc"
static_assert(fate_recovered_001b1004_words.size()==85u);
static_assert(sizeof(fate_recovered_001b1004_words)==fate::recomp::WaitSemaResumeEnd-fate::recomp::WaitSemaResumeStart);
}

std::span<const uint32_t> fate::recomp::waitsema_original_words() noexcept {
    return fate_recovered_001b1004_words;
}

void fate::recomp::register_waitsema_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+WaitSemaResumeStart,fate_recovered_001b1004_words.data(),sizeof(fate_recovered_001b1004_words))!=0)
        throw std::runtime_error("WaitSema continuation words differ from original XL ELF");
    for(const auto pc:WaitSemaResumePcs)
        if(runtime.hasFunction(pc)) throw std::runtime_error("WaitSema continuation mapping conflict");
    for(const auto pc:WaitSemaResumePcs)
        if(!runtime.registerFunction(pc,fate_recovered_001b1004))
            throw std::runtime_error("WaitSema continuation registration failed");
}
