#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00136270
// Address: 0x136270 - 0x136278
void entry_00136270_0x136270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136270_0x136270");
#endif

    ctx->pc = 0x136270u;

    // 0x136270: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136274: 0xa022a401  sb          $v0, -0x5BFF($at)
    ctx->pc = 0x136274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A401u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A401u, _value); } while (0);
    ctx->pc = 0x136278u;
}
