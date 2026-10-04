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

// Function: entry_00214d6c
// Address: 0x214d6c - 0x214d94
void entry_00214d6c_0x214d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214d6c_0x214d6c");
#endif

    ctx->pc = 0x214d6cu;

    // 0x214d6c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x214d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x214d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x214d74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d78: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x214d78u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d7c: 0x306a0400  andi        $t2, $v1, 0x400
    ctx->pc = 0x214d7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x214d80: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x214d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x214d84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214d88: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x214d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x214d8c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x214d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x214d90: 0x2407005b  addiu       $a3, $zero, 0x5B
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->pc = 0x214d94u;
}
