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

// Function: entry_00226a88
// Address: 0x226a88 - 0x226a94
void entry_00226a88_0x226a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226a88_0x226a88");
#endif

    ctx->pc = 0x226a88u;

    // 0x226a88: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x226a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226a8c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x226a90: 0xa0224912  sb          $v0, 0x4912($at)
    ctx->pc = 0x226a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x334912u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334912u, _value); } while (0);
    ctx->pc = 0x226a94u;
}
