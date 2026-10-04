#include "fate/trace_state.hpp"
#include "fate/guest_float_environment.hpp"
#include <sstream>
#include <stdexcept>

int main() {
    const unsigned saved = _mm_getcsr();
    // Clear both modes so the test proves that the guard enables them.
    const unsigned initial = saved & ~(_MM_FLUSH_ZERO_ON | _MM_DENORMALS_ZERO_ON);
    _mm_setcsr(initial);
    try {
        const fate::GuestFloatEnvironment guard;
        const unsigned expected = initial | _MM_FLUSH_ZERO_ON | _MM_DENORMALS_ZERO_ON;
        if (_mm_getcsr() != expected) return 1;
        throw std::runtime_error("restore on unwind");
    } catch (const std::runtime_error&) {}
    const bool restored = _mm_getcsr() == initial;
    _mm_setcsr(saved);
    if (!restored) return 2;

    R5900Context ctx;
    const uint32_t cases[]{0x80000000u, 0x00000001u, 0x7f800000u, 0x7fc01234u};
    for (unsigned i = 0; i < 4; ++i) std::memcpy(&ctx.f[i], &cases[i], sizeof(uint32_t));
    std::memcpy(&ctx.vu0_vf[7], cases, sizeof(cases));
    ctx.fcr31 = 0x01000001;
    std::ostringstream stream;
    stream << std::dec << std::setfill(' ');
    const auto flags = stream.flags();
    fate::trace::write_extended_state(stream, ctx);
    if (stream.flags() != flags || stream.fill() != ' ') return 3;
    const std::string expected = "[\"0x80000000\",\"0x00000001\",\"0x7f800000\",\"0x7fc01234\"";
    const auto text = stream.str();
    const auto first = text.find(expected);
    if (first == std::string::npos || text.find(expected, first+1) == std::string::npos) return 4;
    if (text.find("\"fcr31\":\"0x01000001\"") == std::string::npos) return 5;
    return 0;
}
