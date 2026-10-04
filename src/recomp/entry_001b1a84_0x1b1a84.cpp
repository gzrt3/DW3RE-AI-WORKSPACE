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

// Function: entry_001b1a84
// Address: 0x1b1a84 - 0x1b1b00
void entry_001b1a84_0x1b1a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a84_0x1b1a84");
#endif

    ctx->pc = 0x1b1a84u;

    // 0x1b1a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b1a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1a88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b1a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1a8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b1a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b1a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AA0u;
        // 0x1b1aa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1AA8u;
    // 0x1b1aa8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1aac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1b1ab0: 0x8c456228  lw          $a1, 0x6228($v0)
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x376228u));
    // 0x1b1ab4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1AB4u;
    {
        const bool branch_taken_0x1b1ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AB4u;
        // 0x1b1ab8: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ab4) {
            ctx->pc = 0x1B1AC4u;
            goto label_1b1ac4;
        }
    }
    ctx->pc = 0x1B1ABCu;
    // 0x1b1abc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1ac0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1b1ac4:
    // 0x1b1ac4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1ac8: 0x8c43622c  lw          $v1, 0x622C($v0)
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x37622Cu));
    // 0x1b1acc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1ACCu;
    {
        const bool branch_taken_0x1b1acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ACCu;
        // 0x1b1ad0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1acc) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1AD4u;
    // 0x1b1ad4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b1ad8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b1adc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1ae0:
    // 0x1b1ae0: 0x8c436230  lw          $v1, 0x6230($v0)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25136)));
    // 0x1b1ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1AE4u;
    {
        const bool branch_taken_0x1b1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ae4) {
            ctx->pc = 0x1B1AF4u;
            goto label_1b1af4;
        }
    }
    ctx->pc = 0x1B1AECu;
    // 0x1b1aec: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1b1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1b1af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b1af4:
    // 0x1b1af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1AFCu;
    // 0x1b1afc: 0x0  nop
    ctx->pc = 0x1b1afcu;
    // NOP
    ctx->pc = 0x1b1b00u;
}
