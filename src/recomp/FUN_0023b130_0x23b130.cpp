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

// Function: FUN_0023b130
// Address: 0x23b130 - 0x23b180
void FUN_0023b130_0x23b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b130_0x23b130");
#endif

    ctx->pc = 0x23b130u;

    // 0x23b130: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23b134: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23b138: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23b138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b13c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23B13Cu;
    {
        const bool branch_taken_0x23b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b13c) {
            ctx->pc = 0x23B190u;
            return;
        }
    }
    ctx->pc = 0x23B144u;
    // 0x23b144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b148: 0x248a0014  addiu       $t2, $a0, 0x14
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x23b14c: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x23b150: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x23b154: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b158: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x23b158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x23b15c: 0x0  nop
    ctx->pc = 0x23b15cu;
    // NOP
    // 0x23b160: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x23b160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x23b164: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x23b164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23b168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b16c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x23b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23b170: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b174: 0x147402b  sltu        $t0, $t2, $a3
    ctx->pc = 0x23b174u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23b178: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x23b178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23b17c: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B17Cu;
    {
        const bool branch_taken_0x23b17c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x23b17c) {
            ctx->pc = 0x23B190u;
            return;
        }
    }
    ctx->pc = 0x23B184u;
}
