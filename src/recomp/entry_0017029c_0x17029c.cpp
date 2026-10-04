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

// Function: entry_0017029c
// Address: 0x17029c - 0x1702b8
void entry_0017029c_0x17029c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017029c_0x17029c");
#endif

    ctx->pc = 0x17029cu;

    // 0x17029c: 0x1471024  and         $v0, $t2, $a3
    ctx->pc = 0x17029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1702a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1702a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1702a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1702a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1702a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1702acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1702b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1702b4: 0xe37004  sllv        $t6, $v1, $a3
    ctx->pc = 0x1702b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    ctx->pc = 0x1702b8u;
}
