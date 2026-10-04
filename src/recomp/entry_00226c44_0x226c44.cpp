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

// Function: entry_00226c44
// Address: 0x226c44 - 0x226d10
void entry_00226c44_0x226c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226c44_0x226c44");
#endif

    switch (ctx->pc) {
        case 0x226ca8u: goto label_226ca8;
        default: break;
    }

    ctx->pc = 0x226c44u;

    // 0x226c44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226c54: 0x3e00008  jr          $ra
    ctx->pc = 0x226C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C54u;
        // 0x226c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226C5Cu;
    // 0x226c5c: 0x0  nop
    ctx->pc = 0x226c5cu;
    // NOP
    // 0x226c60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x226c64: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x226c68: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x226c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x226c6c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x226C6Cu;
    {
        const bool branch_taken_0x226c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226c6c) {
            ctx->pc = 0x226CE8u;
            goto label_226ce8;
        }
    }
    ctx->pc = 0x226C74u;
    // 0x226c74: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226c7c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x226C7Cu;
    {
        const bool branch_taken_0x226c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C7Cu;
        // 0x226c80: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c7c) {
            ctx->pc = 0x226CE8u;
            goto label_226ce8;
        }
    }
    ctx->pc = 0x226C84u;
    // 0x226c84: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
    // 0x226c88: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c8c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x226c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x226c90: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x226C90u;
    {
        const bool branch_taken_0x226c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C90u;
        // 0x226c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c90) {
            ctx->pc = 0x226CDCu;
            goto label_226cdc;
        }
    }
    ctx->pc = 0x226C98u;
    // 0x226c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x226ca0: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
    // 0x226ca4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_226ca8:
    // 0x226ca8: 0x90420682  lbu         $v0, 0x682($v0)
    ctx->pc = 0x226ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1666)));
    // 0x226cac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x226CACu;
    {
        const bool branch_taken_0x226cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226cac) {
            ctx->pc = 0x226CB8u;
            goto label_226cb8;
        }
    }
    ctx->pc = 0x226CB4u;
    // 0x226cb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x226cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_226cb8:
    // 0x226cb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x226cbc: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x226cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x226cc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x226CC0u;
    {
        const bool branch_taken_0x226cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC0u;
        // 0x226cc4: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cc0) {
            ctx->pc = 0x226CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ca8;
        }
    }
    ctx->pc = 0x226CC8u;
    // 0x226cc8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x226cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x226ccc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226CCCu;
    {
        const bool branch_taken_0x226ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CCCu;
        // 0x226cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ccc) {
            ctx->pc = 0x226CE0u;
            goto label_226ce0;
        }
    }
    ctx->pc = 0x226CD4u;
    // 0x226cd4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x226cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226cd8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x226cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_226cdc:
    // 0x226cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226ce0:
    // 0x226ce0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x226CE0u;
    {
        const bool branch_taken_0x226ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ce0) {
            ctx->pc = 0x226D04u;
            goto label_226d04;
        }
    }
    ctx->pc = 0x226CE8u;
label_226ce8:
    // 0x226ce8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226cec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x226cf0: 0x246350b0  addiu       $v1, $v1, 0x50B0
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20656));
    // 0x226cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cf8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x226d00: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x226d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_226d04:
    // 0x226d04: 0x3e00008  jr          $ra
    ctx->pc = 0x226D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D0Cu;
    // 0x226d0c: 0x0  nop
    ctx->pc = 0x226d0cu;
    // NOP
    ctx->pc = 0x226d10u;
}
