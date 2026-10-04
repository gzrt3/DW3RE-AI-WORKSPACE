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

// Function: entry_00170e60
// Address: 0x170e60 - 0x170f30
void entry_00170e60_0x170e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e60_0x170e60");
#endif

    switch (ctx->pc) {
        case 0x170e78u: goto label_170e78;
        case 0x170eccu: goto label_170ecc;
        default: break;
    }

    ctx->pc = 0x170e60u;

    // 0x170e60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x170e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x170e64: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x170e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170e68: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x170E68u;
    {
        const bool branch_taken_0x170e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E68u;
        // 0x170e6c: 0x25290058  addiu       $t1, $t1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e68) {
            ctx->pc = 0x170DF0u;
            return;
        }
    }
    ctx->pc = 0x170E70u;
    // 0x170e70: 0xc05c230  jal         func_1708C0
    ctx->pc = 0x170E70u;
    SET_GPR_U32(ctx, 31, 0x170E78u);
    ctx->pc = 0x1708C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1708C0u, 0x170E70u, 0x170E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E78u;
label_170e78:
    // 0x170e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x170E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E7Cu;
        // 0x170e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170E84u;
    // 0x170e84: 0x0  nop
    ctx->pc = 0x170e84u;
    // NOP
    // 0x170e88: 0x0  nop
    ctx->pc = 0x170e88u;
    // NOP
    // 0x170e8c: 0x0  nop
    ctx->pc = 0x170e8cu;
    // NOP
    // 0x170e90: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x170e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170e94: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x170E94u;
    {
        const bool branch_taken_0x170e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E94u;
        // 0x170e98: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e94) {
            ctx->pc = 0x170F20u;
            goto label_170f20;
        }
    }
    ctx->pc = 0x170E9Cu;
    // 0x170e9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x170e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x170ea0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x170ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170ea4: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
    // 0x170ea8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x170eac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170eacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170eb0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x170eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170eb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170eb8: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x170eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x170ebc: 0x278681cb  addiu       $a2, $gp, -0x7E35
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934987));
    // 0x170ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170ec4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x170EC4u;
    {
        const bool branch_taken_0x170ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x674821  addu        $t1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec4) {
            ctx->pc = 0x170F10u;
            goto label_170f10;
        }
    }
    ctx->pc = 0x170ECCu;
label_170ecc:
    // 0x170ecc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x170ECCu;
    {
        const bool branch_taken_0x170ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ecc) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170ED4u;
    // 0x170ed4: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x170ed8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x170ED8u;
    {
        const bool branch_taken_0x170ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ed8) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170EE0u;
    // 0x170ee0: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x170ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x170ee4: 0x143082b  sltu        $at, $t2, $v1
    ctx->pc = 0x170ee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x170ee8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x170EE8u;
    {
        const bool branch_taken_0x170ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EE8u;
        // 0x170eec: 0x1283821  addu        $a3, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ee8) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170EF0u;
    // 0x170ef0: 0xace60040  sw          $a2, 0x40($a3)
    ctx->pc = 0x170ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 6));
    // 0x170ef4: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x170ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x170ef8: 0x8f838738  lw          $v1, -0x78C8($gp)
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x170efc: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x170efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
    // 0x170f00: 0xace50030  sw          $a1, 0x30($a3)
    ctx->pc = 0x170f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 5));
label_170f04:
    // 0x170f04: 0x0  nop
    ctx->pc = 0x170f04u;
    // NOP
    // 0x170f08: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x170f0c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x170f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_170f10:
    // 0x170f10: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x170f14: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x170f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x170f18: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x170F18u;
    {
        const bool branch_taken_0x170f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F18u;
        // 0x170f1c: 0x28810002  slti        $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f18) {
            ctx->pc = 0x170ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170ecc;
        }
    }
    ctx->pc = 0x170F20u;
label_170f20:
    // 0x170f20: 0x3e00008  jr          $ra
    ctx->pc = 0x170F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170F28u;
    // 0x170f28: 0x0  nop
    ctx->pc = 0x170f28u;
    // NOP
    // 0x170f2c: 0x0  nop
    ctx->pc = 0x170f2cu;
    // NOP
    ctx->pc = 0x170f30u;
}
