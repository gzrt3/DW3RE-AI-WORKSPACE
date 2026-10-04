#pragma once

#include <immintrin.h>

namespace fate {

// MXCSR is thread-local. Scope this to each thread executing translated EE
// code and restore the caller's environment on return or exception. FTZ/DAZ
// cover denormals only; EE overflow, rounding and flags still need instruction
// semantics backed by reference traces.
class GuestFloatEnvironment {
public:
    GuestFloatEnvironment() noexcept : saved_(_mm_getcsr()) {
        _mm_setcsr(saved_ | _MM_FLUSH_ZERO_ON | _MM_DENORMALS_ZERO_ON);
    }
    ~GuestFloatEnvironment() noexcept { _mm_setcsr(saved_); }
    GuestFloatEnvironment(const GuestFloatEnvironment&) = delete;
    GuestFloatEnvironment& operator=(const GuestFloatEnvironment&) = delete;
private:
    unsigned saved_;
};

} // namespace fate
