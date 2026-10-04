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

// Function: entry_001dfb00
// Address: 0x1dfb00 - 0x1dfb20
void entry_001dfb00_0x1dfb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb00_0x1dfb00");
#endif

    ctx->pc = 0x1dfb00u;

    // 0x1dfb00: 0x246a0006  addiu       $t2, $v1, 0x6
    ctx->pc = 0x1dfb00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1dfb04: 0xea5818  mult        $t3, $a3, $t2
    ctx->pc = 0x1dfb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1dfb08: 0x1c35023  subu        $t2, $t6, $v1
    ctx->pc = 0x1dfb08u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1dfb0c: 0xb5823  negu        $t3, $t3
    ctx->pc = 0x1dfb0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
    // 0x1dfb10: 0x70ea5018  mult1       $t2, $a3, $t2
    ctx->pc = 0x1dfb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1dfb14: 0x255801e0  addiu       $t8, $t2, 0x1E0
    ctx->pc = 0x1dfb14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 480));
    // 0x1dfb18: 0x255901c0  addiu       $t9, $t2, 0x1C0
    ctx->pc = 0x1dfb18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 448));
    // 0x1dfb1c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1dfb1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dfb20u;
}
