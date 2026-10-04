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

// Function: FUN_0019e078
// Address: 0x19e078 - 0x19e098
void FUN_0019e078_0x19e078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e078_0x19e078");
#endif

    ctx->pc = 0x19e078u;

    // 0x19e078: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19e078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x19e07c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x19e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x19e080: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x19e080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x19e084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19e088: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e088u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19e08c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x19e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x19e090: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19e090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19e094: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->pc = 0x19e098u;
}
