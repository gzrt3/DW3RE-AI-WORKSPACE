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

// Function: entry_001ea814
// Address: 0x1ea814 - 0x1ea870
void entry_001ea814_0x1ea814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea814_0x1ea814");
#endif

    switch (ctx->pc) {
        case 0x1ea858u: goto label_1ea858;
        default: break;
    }

    ctx->pc = 0x1ea814u;

    // 0x1ea814: 0x8f868ec8  lw          $a2, -0x7138($gp)
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
    // 0x1ea818: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x1EA818u;
    {
        const bool branch_taken_0x1ea818 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea818) {
            ctx->pc = 0x1EA91Cu;
            return;
        }
    }
    ctx->pc = 0x1EA820u;
    // 0x1ea820: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ea824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ea828: 0x14c3004c  bne         $a2, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1EA828u;
    {
        const bool branch_taken_0x1ea828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0xaf858ec0  sw          $a1, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea828) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA830u;
    // 0x1ea830: 0x8f878ebc  lw          $a3, -0x7144($gp)
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
    // 0x1ea834: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1ea838: 0xdf8587c8  ld          $a1, -0x7838($gp)
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea83c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1ea840: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea844: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1ea844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1ea848: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA848u;
    {
        const bool branch_taken_0x1ea848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA848u;
        // 0x1ea84c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea848) {
            ctx->pc = 0x1EA870u;
            return;
        }
    }
    ctx->pc = 0x1EA850u;
    // 0x1ea850: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA850u;
    SET_GPR_U32(ctx, 31, 0x1EA858u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA850u, 0x1EA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA858u;
label_1ea858:
    // 0x1ea858: 0x8f858ec4  lw          $a1, -0x713C($gp)
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
    // 0x1ea85c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea860: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea864: 0x65200b  movn        $a0, $v1, $a1
    ctx->pc = 0x1ea864u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1ea868: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1EA868u;
    {
        const bool branch_taken_0x1ea868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA868u;
        // 0x1ea86c: 0xaf848ec8  sw          $a0, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea868) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA870u;
}
