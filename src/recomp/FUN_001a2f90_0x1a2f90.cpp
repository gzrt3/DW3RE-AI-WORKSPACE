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

// Function: FUN_001a2f90
// Address: 0x1a2f90 - 0x1a3034
void FUN_001a2f90_0x1a2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2f90_0x1a2f90");
#endif

    switch (ctx->pc) {
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2ff8u: goto label_1a2ff8;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a302cu: goto label_1a302c;
        default: break;
    }

    ctx->pc = 0x1a2f90u;

    // 0x1a2f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a2f94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2f98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a2f9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a2fa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a2fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a2fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2fb4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FB4u;
    {
        const bool branch_taken_0x1a2fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FB4u;
        // 0x1a2fb8: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb4) {
            ctx->pc = 0x1A2FC8u;
            goto label_1a2fc8;
        }
    }
    ctx->pc = 0x1A2FBCu;
    // 0x1a2fbc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1a2fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a2fc0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2FC0u;
    {
        const bool branch_taken_0x1a2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fc0) {
            ctx->pc = 0x1A3004u;
            goto label_1a3004;
        }
    }
    ctx->pc = 0x1A2FC8u;
label_1a2fc8:
    // 0x1a2fc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a2fcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FCCu;
    {
        const bool branch_taken_0x1a2fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FCCu;
        // 0x1a2fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fcc) {
            ctx->pc = 0x1A2FE0u;
            goto label_1a2fe0;
        }
    }
    ctx->pc = 0x1A2FD4u;
    // 0x1a2fd4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a2fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2fdc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a2fe0:
    // 0x1a2fe0: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A2FE0u;
    SET_GPR_U32(ctx, 31, 0x1A2FE8u);
    ctx->pc = 0x1A2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FE0u;
    // 0x1a2fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A2FE0u, 0x1A2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FE8u;
label_1a2fe8:
    // 0x1a2fe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FE8u;
    {
        const bool branch_taken_0x1a2fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FE8u;
        // 0x1a2fec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fe8) {
            ctx->pc = 0x1A2FFCu;
            goto label_1a2ffc;
        }
    }
    ctx->pc = 0x1A2FF0u;
    // 0x1a2ff0: 0xc068088  jal         func_1A0220
    ctx->pc = 0x1A2FF0u;
    SET_GPR_U32(ctx, 31, 0x1A2FF8u);
    ctx->pc = 0x1A2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FF0u;
    // 0x1a2ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0220u, 0x1A2FF0u, 0x1A2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FF8u;
label_1a2ff8:
    // 0x1a2ff8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a2ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a2ffc:
    // 0x1a2ffc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2FFCu;
    {
        const bool branch_taken_0x1a2ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FFCu;
        // 0x1a3000: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ffc) {
            ctx->pc = 0x1A301Cu;
            goto label_1a301c;
        }
    }
    ctx->pc = 0x1A3004u;
label_1a3004:
    // 0x1a3004: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A3004u;
    SET_GPR_U32(ctx, 31, 0x1A300Cu);
    ctx->pc = 0x1A3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3004u;
    // 0x1a3008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A3004u, 0x1A300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A300Cu;
label_1a300c:
    // 0x1a300c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a3010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3014: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x1A3014u;
    SET_GPR_U32(ctx, 31, 0x1A301Cu);
    ctx->pc = 0x1A3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3014u;
    // 0x1a3018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x1A3014u, 0x1A301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A301Cu;
label_1a301c:
    // 0x1a301c: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1a301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a3020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3024: 0xc0680bc  jal         func_1A02F0
    ctx->pc = 0x1A3024u;
    SET_GPR_U32(ctx, 31, 0x1A302Cu);
    ctx->pc = 0x1A3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3024u;
    // 0x1a3028: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02F0u, 0x1A3024u, 0x1A302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A302Cu;
label_1a302c:
    // 0x1a302c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a3030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1a3034u;
}
