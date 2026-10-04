#pragma once

#include "ps2_runtime.h"
#include <cstdint>
#include <cstring>
#include <iomanip>
#include <ostream>

namespace fate::trace {

// Capture bits, never decimal floating point: signed zero, denormals and the
// EE's non-IEEE exponent patterns must survive the evidence format unchanged.
inline void write_extended_state(std::ostream& out, const R5900Context& ctx) {
    const auto flags = out.flags();
    const auto fill = out.fill();
    auto bits = [&](const auto& value) {
        static_assert(sizeof(value) == sizeof(uint32_t));
        uint32_t word;
        std::memcpy(&word, &value, sizeof(word));
        out << '"' << "0x" << std::hex << std::setfill('0') << std::setw(8) << word << '"';
    };
    out << ",\"fpu\":{\"f\":[";
    for (unsigned i = 0; i < 32; ++i) {
        if (i) out << ',';
        bits(ctx.f[i]);
    }
    out << "],\"acc\":"; bits(ctx.f_acc);
    out << ",\"fcr31\":"; bits(ctx.fcr31);
    out << "},\"vu0\":{\"vf\":[";
    for (unsigned i = 0; i < 32; ++i) {
        if (i) out << ',';
        uint32_t words[4];
        std::memcpy(words, &ctx.vu0_vf[i], sizeof(words));
        out << '[';
        for (unsigned lane = 0; lane < 4; ++lane) {
            if (lane) out << ',';
            bits(words[lane]);
        }
        out << ']';
    }
    out << "],\"vi\":[";
    for (unsigned i = 0; i < 16; ++i) {
        if (i) out << ',';
        const uint32_t word = ctx.vi[i];
        bits(word);
    }
    out << "],\"acc\":[";
    uint32_t accumulator[4];
    std::memcpy(accumulator, &ctx.vu0_acc, sizeof(accumulator));
    for (unsigned lane = 0; lane < 4; ++lane) {
        if (lane) out << ',';
        bits(accumulator[lane]);
    }
    out << "],\"q\":"; bits(ctx.vu0_q);
    out << ",\"p\":"; bits(ctx.vu0_p);
    out << ",\"i\":"; bits(ctx.vu0_i);
    const uint32_t status = ctx.vu0_status;
    out << ",\"status\":"; bits(status);
    out << ",\"mac\":"; bits(ctx.vu0_mac_flags);
    out << ",\"clip\":"; bits(ctx.vu0_clip_flags);
    out << '}';
    out.flags(flags);
    out.fill(fill);
}

} // namespace fate::trace
