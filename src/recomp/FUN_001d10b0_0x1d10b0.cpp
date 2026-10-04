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

// Function: FUN_001d10b0
// Address: 0x1d10b0 - 0x1d10c4
void FUN_001d10b0_0x1d10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d10b0_0x1d10b0");
#endif

    ctx->pc = 0x1d10b0u;

    // 0x1d10b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d10b4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d10b8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1d10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1d10bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d10c0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1d10c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    ctx->pc = 0x1d10c4u;
}
