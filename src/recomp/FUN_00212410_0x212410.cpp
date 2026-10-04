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

// Function: FUN_00212410
// Address: 0x212410 - 0x212424
void FUN_00212410_0x212410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212410_0x212410");
#endif

    ctx->pc = 0x212410u;

    // 0x212410: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x212414: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x212414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212418: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x212418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21241c: 0x2442fc20  addiu       $v0, $v0, -0x3E0
    ctx->pc = 0x21241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966304));
    // 0x212420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x212424u;
}
