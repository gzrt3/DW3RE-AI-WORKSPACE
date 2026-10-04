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

// Function: entry_001dfc10
// Address: 0x1dfc10 - 0x1dfc40
void entry_001dfc10_0x1dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfc10_0x1dfc10");
#endif

    ctx->pc = 0x1dfc10u;

    // 0x1dfc10: 0x250d0005  addiu       $t5, $t0, 0x5
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1dfc14: 0xed7818  mult        $t7, $a3, $t5
    ctx->pc = 0x1dfc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1dfc18: 0x24ce0005  addiu       $t6, $a2, 0x5
    ctx->pc = 0x1dfc18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1dfc1c: 0x486823  subu        $t5, $v0, $t0
    ctx->pc = 0x1dfc1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1dfc20: 0x6f7823  subu        $t7, $v1, $t7
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1dfc24: 0x70ed6818  mult1       $t5, $a3, $t5
    ctx->pc = 0x1dfc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dfc28: 0x6d8823  subu        $s1, $v1, $t5
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1dfc2c: 0x3296823  subu        $t5, $t9, $t1
    ctx->pc = 0x1dfc2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x1dfc30: 0x70ed6818  mult1       $t5, $a3, $t5
    ctx->pc = 0x1dfc30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dfc34: 0x25b00160  addiu       $s0, $t5, 0x160
    ctx->pc = 0x1dfc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 352));
    // 0x1dfc38: 0xee6818  mult        $t5, $a3, $t6
    ctx->pc = 0x1dfc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dfc3c: 0x25ae0180  addiu       $t6, $t5, 0x180
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
    ctx->pc = 0x1dfc40u;
}
