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

// Function: FUN_00158d20
// Address: 0x158d20 - 0x158d2c
void FUN_00158d20_0x158d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158d20_0x158d20");
#endif

    ctx->pc = 0x158d20u;

    // 0x158d20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158d24: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x158d24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF0u, _value); } while (0);
    // 0x158d28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x158d2cu;
}
