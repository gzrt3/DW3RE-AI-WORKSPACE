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

// Function: FUN_0023abd0
// Address: 0x23abd0 - 0x23ac64
void FUN_0023abd0_0x23abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023abd0_0x23abd0");
#endif

    ctx->pc = 0x23abd0u;

    // 0x23abd0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23abd4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x23abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x23abd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23ABD8u;
    {
        const bool branch_taken_0x23abd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABD8u;
        // 0x23abdc: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abd8) {
            ctx->pc = 0x23AC10u;
            goto label_23ac10;
        }
    }
    ctx->pc = 0x23ABE0u;
    // 0x23abe0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x23ABE0u;
    {
        const bool branch_taken_0x23abe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABE0u;
        // 0x23abe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abe0) {
            ctx->pc = 0x23AC84u;
            return;
        }
    }
    ctx->pc = 0x23ABE8u;
    // 0x23abe8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x23abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x23abec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23ABECu;
    {
        const bool branch_taken_0x23abec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABECu;
        // 0x23abf0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abec) {
            ctx->pc = 0x23AC00u;
            goto label_23ac00;
        }
    }
    ctx->pc = 0x23ABF4u;
    // 0x23abf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABF8u;
        // 0x23abfc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC00u;
label_23ac00:
    // 0x23ac00: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x23ac04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ac08: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC08u;
        // 0x23ac0c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC10u;
label_23ac10:
    // 0x23ac10: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x23ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x23ac14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AC14u;
    {
        const bool branch_taken_0x23ac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC14u;
        // 0x23ac18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac14) {
            ctx->pc = 0x23AC24u;
            goto label_23ac24;
        }
    }
    ctx->pc = 0x23AC1Cu;
    // 0x23ac1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ac20: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23ac24:
    // 0x23ac24: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x23ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23ac28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC28u;
    {
        const bool branch_taken_0x23ac28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC28u;
        // 0x23ac2c: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac28) {
            ctx->pc = 0x23AC3Cu;
            goto label_23ac3c;
        }
    }
    ctx->pc = 0x23AC30u;
    // 0x23ac30: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23ac34: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x23ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x23ac38: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x23ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_23ac3c:
    // 0x23ac3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC3Cu;
    {
        const bool branch_taken_0x23ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC3Cu;
        // 0x23ac40: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac3c) {
            ctx->pc = 0x23AC50u;
            goto label_23ac50;
        }
    }
    ctx->pc = 0x23AC44u;
    // 0x23ac44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x23ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x23ac48: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x23ac4c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x23ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_23ac50:
    // 0x23ac50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC50u;
    {
        const bool branch_taken_0x23ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC50u;
        // 0x23ac54: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac50) {
            ctx->pc = 0x23AC64u;
            return;
        }
    }
    ctx->pc = 0x23AC58u;
    // 0x23ac58: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x23ac5c: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x23ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x23ac60: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x23ac64u;
}
