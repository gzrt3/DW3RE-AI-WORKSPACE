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

// Function: FUN_00170dd0
// Address: 0x170dd0 - 0x170e7c
void FUN_00170dd0_0x170dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170dd0_0x170dd0");
#endif

    switch (ctx->pc) {
        case 0x170df0u: goto label_170df0;
        case 0x170e08u: goto label_170e08;
        case 0x170e78u: goto label_170e78;
        default: break;
    }

    ctx->pc = 0x170dd0u;

    // 0x170dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170de0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x170de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x170de4: 0x278481cb  addiu       $a0, $gp, -0x7E35
    ctx->pc = 0x170de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934987));
    // 0x170de8: 0x24c64480  addiu       $a2, $a2, 0x4480
    ctx->pc = 0x170de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17536));
    // 0x170dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170df0:
    // 0x170df0: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x170df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170df4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x170DF4u;
    {
        const bool branch_taken_0x170df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0xc95021  addu        $t2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170df4) {
            ctx->pc = 0x170E60u;
            goto label_170e60;
        }
    }
    ctx->pc = 0x170DFCu;
    // 0x170dfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x170dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x170E00u;
    {
        const bool branch_taken_0x170e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E00u;
        // 0x170e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e00) {
            ctx->pc = 0x170E50u;
            goto label_170e50;
        }
    }
    ctx->pc = 0x170E08u;
label_170e08:
    // 0x170e08: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x170e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170e0c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x170E0Cu;
    {
        const bool branch_taken_0x170e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e0c) {
            ctx->pc = 0x170E44u;
            goto label_170e44;
        }
    }
    ctx->pc = 0x170E14u;
    // 0x170e14: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x170e18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x170E18u;
    {
        const bool branch_taken_0x170e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e18) {
            ctx->pc = 0x170E44u;
            goto label_170e44;
        }
    }
    ctx->pc = 0x170E20u;
    // 0x170e20: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x170e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x170e24: 0x162082b  sltu        $at, $t3, $v0
    ctx->pc = 0x170e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170e28: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x170E28u;
    {
        const bool branch_taken_0x170e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E28u;
        // 0x170e2c: 0x1482821  addu        $a1, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e28) {
            ctx->pc = 0x170E44u;
            goto label_170e44;
        }
    }
    ctx->pc = 0x170E30u;
    // 0x170e30: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x170e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
    // 0x170e34: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x170e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x170e38: 0x8f828738  lw          $v0, -0x78C8($gp)
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x170e3c: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x170e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x170e40: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x170e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_170e44:
    // 0x170e44: 0x0  nop
    ctx->pc = 0x170e44u;
    // NOP
    // 0x170e48: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x170e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x170e4c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_170e50:
    // 0x170e50: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x170e54: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x170e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170e58: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x170E58u;
    {
        const bool branch_taken_0x170e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170e58) {
            ctx->pc = 0x170E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170e08;
        }
    }
    ctx->pc = 0x170E60u;
label_170e60:
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
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170df0;
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
    ctx->pc = 0x170e7cu;
}
