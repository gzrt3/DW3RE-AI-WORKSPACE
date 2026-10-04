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

// Function: FUN_001a2e20
// Address: 0x1a2e20 - 0x1a2f88
void FUN_001a2e20_0x1a2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2e20_0x1a2e20");
#endif

    switch (ctx->pc) {
        case 0x1a2e68u: goto label_1a2e68;
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e80u: goto label_1a2e80;
        case 0x1a2e88u: goto label_1a2e88;
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f48u: goto label_1a2f48;
        default: break;
    }

    ctx->pc = 0x1a2e20u;

    // 0x1a2e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a2e24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a2e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a2e2c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a2e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a2e34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a2e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2e44: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1a2e48: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1a2e4c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1a2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1a2e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2E50u;
    {
        const bool branch_taken_0x1a2e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E50u;
        // 0x1a2e54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e50) {
            ctx->pc = 0x1A2E70u;
            goto label_1a2e70;
        }
    }
    ctx->pc = 0x1A2E58u;
    // 0x1a2e58: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a2e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e60: 0xc068d1e  jal         func_1A3478
    ctx->pc = 0x1A2E60u;
    SET_GPR_U32(ctx, 31, 0x1A2E68u);
    ctx->pc = 0x1A2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E60u;
    // 0x1a2e64: 0x24a5a318  addiu       $a1, $a1, -0x5CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3478u, 0x1A2E60u, 0x1A2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E68u;
label_1a2e68:
    // 0x1a2e68: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A2E68u;
    {
        const bool branch_taken_0x1a2e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E68u;
        // 0x1a2e6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e68) {
            ctx->pc = 0x1A2F74u;
            goto label_1a2f74;
        }
    }
    ctx->pc = 0x1A2E70u;
label_1a2e70:
    // 0x1a2e70: 0xae000820  sw          $zero, 0x820($s0)
    ctx->pc = 0x1a2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
    // 0x1a2e74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2e78:
    // 0x1a2e78: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2E78u;
    {
        const bool branch_taken_0x1a2e78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E78u;
        // 0x1a2e7c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e78) {
            ctx->pc = 0x1A2EB0u;
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2E80u;
label_1a2e80:
    // 0x1a2e80: 0xc067e60  jal         func_19F980
    ctx->pc = 0x1A2E80u;
    SET_GPR_U32(ctx, 31, 0x1A2E88u);
    ctx->pc = 0x1A2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E80u;
    // 0x1a2e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F980u, 0x1A2E80u, 0x1A2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E88u;
label_1a2e88:
    // 0x1a2e88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a2e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2E8Cu;
    {
        const bool branch_taken_0x1a2e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E8Cu;
        // 0x1a2e90: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e8c) {
            ctx->pc = 0x1A2EB0u;
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2E94u;
    // 0x1a2e94: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a2e98: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1a2e9c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2E9Cu;
    {
        const bool branch_taken_0x1a2e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e9c) {
            ctx->pc = 0x1A2EB0u;
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2EA4u;
    // 0x1a2ea4: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1a2ea8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A2EA8u;
    {
        const bool branch_taken_0x1a2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EA8u;
        // 0x1a2eac: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ea8) {
            ctx->pc = 0x1A2E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e80;
        }
    }
    ctx->pc = 0x1A2EB0u;
label_1a2eb0:
    // 0x1a2eb0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A2EB0u;
    {
        const bool branch_taken_0x1a2eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB0u;
        // 0x1a2eb4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eb0) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2EB8u;
    // 0x1a2eb8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a2ebc: 0x2442a360  addiu       $v0, $v0, -0x5CA0
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
    // 0x1a2ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2ec8: 0x800008  jr          $a0
    ctx->pc = 0x1A2EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2ED0u: goto label_1a2ed0;
            case 0x1A2EE4u: goto label_1a2ee4;
            case 0x1A2F14u: goto label_1a2f14;
            case 0x1A2F38u: goto label_1a2f38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2ED0u;
label_1a2ed0:
    // 0x1a2ed0: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x1A2ED0u;
    SET_GPR_U32(ctx, 31, 0x1A2ED8u);
    ctx->pc = 0x1A2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2ED0u;
    // 0x1a2ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x1A2ED0u, 0x1A2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2ED8u;
label_1a2ed8:
    // 0x1a2ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2edc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A2EDCu;
    {
        const bool branch_taken_0x1a2edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2edc) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2EE4u;
label_1a2ee4:
    // 0x1a2ee4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1a2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1a2ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2eec: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1a2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1a2ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ef4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1a2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1a2ef8: 0xc068c2a  jal         func_1A30A8
    ctx->pc = 0x1A2EF8u;
    SET_GPR_U32(ctx, 31, 0x1A2F00u);
    ctx->pc = 0x1A2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EF8u;
    // 0x1a2efc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30A8u, 0x1A2EF8u, 0x1A2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F00u;
label_1a2f00:
    // 0x1a2f00: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1a2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1a2f04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2f0c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A2F0Cu;
    {
        const bool branch_taken_0x1a2f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F0Cu;
        // 0x1a2f10: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f0c) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2F14u;
label_1a2f14:
    // 0x1a2f14: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a2f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f1c: 0xc068c2a  jal         func_1A30A8
    ctx->pc = 0x1A2F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F24u);
    ctx->pc = 0x1A2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F1Cu;
    // 0x1a2f20: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30A8u, 0x1A2F1Cu, 0x1A2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F24u;
label_1a2f24:
    // 0x1a2f24: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1a2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a2f28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2f30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2F30u;
    {
        const bool branch_taken_0x1a2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F30u;
        // 0x1a2f34: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f30) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2F38u;
label_1a2f38:
    // 0x1a2f38: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1a2f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f40: 0xc068c2a  jal         func_1A30A8
    ctx->pc = 0x1A2F40u;
    SET_GPR_U32(ctx, 31, 0x1A2F48u);
    ctx->pc = 0x1A2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F40u;
    // 0x1a2f44: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30A8u, 0x1A2F40u, 0x1A2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F48u;
label_1a2f48:
    // 0x1a2f48: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1a2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1a2f4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2f54: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1a2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_1a2f58:
    // 0x1a2f58: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1a2f5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2F5Cu;
    {
        const bool branch_taken_0x1a2f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F5Cu;
        // 0x1a2f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f5c) {
            ctx->pc = 0x1A2F74u;
            goto label_1a2f74;
        }
    }
    ctx->pc = 0x1A2F64u;
    // 0x1a2f64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2f68: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1A2F68u;
    {
        const bool branch_taken_0x1a2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F68u;
        // 0x1a2f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f68) {
            ctx->pc = 0x1A2E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e78;
        }
    }
    ctx->pc = 0x1A2F70u;
    // 0x1a2f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2f74:
    // 0x1a2f74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a2f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2f78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a2f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2f7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a2f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2f80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a2f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a2f88u;
}
