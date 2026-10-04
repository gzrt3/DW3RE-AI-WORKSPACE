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

// Function: entry_0022ec7c
// Address: 0x22ec7c - 0x22ed20
void entry_0022ec7c_0x22ec7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec7c_0x22ec7c");
#endif

    switch (ctx->pc) {
        case 0x22eca8u: goto label_22eca8;
        case 0x22ece4u: goto label_22ece4;
        default: break;
    }

    ctx->pc = 0x22ec7cu;

    // 0x22ec7c: 0x0  nop
    ctx->pc = 0x22ec7cu;
    // NOP
    // 0x22ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x22EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EC88u;
    // 0x22ec88: 0x0  nop
    ctx->pc = 0x22ec88u;
    // NOP
    // 0x22ec8c: 0x0  nop
    ctx->pc = 0x22ec8cu;
    // NOP
    // 0x22ec90: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x22EC90u;
    {
        const bool branch_taken_0x22ec90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec90) {
            ctx->pc = 0x22ECD4u;
            goto label_22ecd4;
        }
    }
    ctx->pc = 0x22EC98u;
    // 0x22ec98: 0x8f8585d0  lw          $a1, -0x7A30($gp)
    ctx->pc = 0x22ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x22ec9c: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x22EC9Cu;
    {
        const bool branch_taken_0x22ec9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec9c) {
            ctx->pc = 0x22ED0Cu;
            goto label_22ed0c;
        }
    }
    ctx->pc = 0x22ECA4u;
    // 0x22eca4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22eca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22eca8:
    // 0x22eca8: 0x90a30096  lbu         $v1, 0x96($a1)
    ctx->pc = 0x22eca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x22ecac: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22ECACu;
    {
        const bool branch_taken_0x22ecac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ecac) {
            ctx->pc = 0x22ECC0u;
            goto label_22ecc0;
        }
    }
    ctx->pc = 0x22ECB4u;
    // 0x22ecb4: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x22ecb8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x22ecb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x22ecbc: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x22ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_22ecc0:
    // 0x22ecc0: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x22ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x22ecc4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22ECC4u;
    {
        const bool branch_taken_0x22ecc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ecc4) {
            ctx->pc = 0x22ECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eca8;
        }
    }
    ctx->pc = 0x22ECCCu;
    // 0x22eccc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22ECCCu;
    {
        const bool branch_taken_0x22eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eccc) {
            ctx->pc = 0x22ED0Cu;
            goto label_22ed0c;
        }
    }
    ctx->pc = 0x22ECD4u;
label_22ecd4:
    // 0x22ecd4: 0x8f8685d0  lw          $a2, -0x7A30($gp)
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x22ecd8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x22ECD8u;
    {
        const bool branch_taken_0x22ecd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECD8u;
        // 0x22ecdc: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecd8) {
            ctx->pc = 0x22ED0Cu;
            goto label_22ed0c;
        }
    }
    ctx->pc = 0x22ECE0u;
    // 0x22ece0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_22ece4:
    // 0x22ece4: 0x90c30096  lbu         $v1, 0x96($a2)
    ctx->pc = 0x22ece4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x22ece8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22ECE8u;
    {
        const bool branch_taken_0x22ece8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22ece8) {
            ctx->pc = 0x22ECFCu;
            goto label_22ecfc;
        }
    }
    ctx->pc = 0x22ECF0u;
    // 0x22ecf0: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x22ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x22ecf4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x22ecf8: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x22ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
label_22ecfc:
    // 0x22ecfc: 0x0  nop
    ctx->pc = 0x22ecfcu;
    // NOP
    // 0x22ed00: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x22ed04: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22ED04u;
    {
        const bool branch_taken_0x22ed04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed04) {
            ctx->pc = 0x22ECE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ece4;
        }
    }
    ctx->pc = 0x22ED0Cu;
label_22ed0c:
    // 0x22ed0c: 0x0  nop
    ctx->pc = 0x22ed0cu;
    // NOP
    // 0x22ed10: 0x3e00008  jr          $ra
    ctx->pc = 0x22ED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED18u;
    // 0x22ed18: 0x0  nop
    ctx->pc = 0x22ed18u;
    // NOP
    // 0x22ed1c: 0x0  nop
    ctx->pc = 0x22ed1cu;
    // NOP
    ctx->pc = 0x22ed20u;
}
