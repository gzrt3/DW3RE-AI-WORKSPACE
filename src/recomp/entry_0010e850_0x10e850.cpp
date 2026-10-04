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

// Function: entry_0010e850
// Address: 0x10e850 - 0x10e870
void entry_0010e850_0x10e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e850_0x10e850");
#endif

    ctx->pc = 0x10e850u;

    // 0x10e850: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e85c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10e860: 0xa103002f  sb          $v1, 0x2F($t0)
    ctx->pc = 0x10e860u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x10e864: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x10e864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e868: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x10e868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10e86c: 0xa102002e  sb          $v0, 0x2E($t0)
    ctx->pc = 0x10e86cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 46), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10e870u;
}
