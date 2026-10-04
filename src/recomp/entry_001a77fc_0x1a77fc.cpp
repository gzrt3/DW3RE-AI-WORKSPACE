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

// Function: entry_001a77fc
// Address: 0x1a77fc - 0x1a78a8
void entry_001a77fc_0x1a77fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a77fc_0x1a77fc");
#endif

    ctx->pc = 0x1a77fcu;

    // 0x1a77fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a77fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7800: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7804: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7808: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a7808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a780c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a780cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7810: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7810u;
        // 0x1a7814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7818u;
    // 0x1a7818: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1a7818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1a781c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1a7820: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a7824: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7824u;
    {
        const bool branch_taken_0x1a7824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7824) {
            ctx->pc = 0x1A7828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7824u;
            // 0x1a7828: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7834u;
            goto label_1a7834;
        }
    }
    ctx->pc = 0x1A782Cu;
    // 0x1a782c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A782Cu;
    {
        const bool branch_taken_0x1a782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A782Cu;
        // 0x1a7830: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a782c) {
            ctx->pc = 0x1A7838u;
            goto label_1a7838;
        }
    }
    ctx->pc = 0x1A7834u;
label_1a7834:
    // 0x1a7834: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x1a7834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_1a7838:
    // 0x1a7838: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1a7838u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x1a783c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a7840: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a7844: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1a7844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x1a7848: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1a7848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x1a784c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1a784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a7850: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1a7850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x1a7854: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a7858: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1a7858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1a785c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a7860: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1a7860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1a7864: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1a7864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a7868: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1a7868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1a786c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1a786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1a7870: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1a7870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1a7874: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a7878: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1a7878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1a787c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a7880: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7880u;
    {
        const bool branch_taken_0x1a7880 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a7880) {
            ctx->pc = 0x1A789Cu;
            goto label_1a789c;
        }
    }
    ctx->pc = 0x1A7888u;
    // 0x1a7888: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a788c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A788Cu;
    {
        const bool branch_taken_0x1a788c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a788c) {
            ctx->pc = 0x1A789Cu;
            goto label_1a789c;
        }
    }
    ctx->pc = 0x1A7894u;
    // 0x1a7894: 0x80695b4  j           func_1A56D0
    ctx->pc = 0x1A7894u;
    ctx->pc = 0x1A56D0u;
    FUN_001a56d0_0x1a56d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A789Cu;
label_1a789c:
    // 0x1a789c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A78A4u;
    // 0x1a78a4: 0x0  nop
    ctx->pc = 0x1a78a4u;
    // NOP
    ctx->pc = 0x1a78a8u;
}
