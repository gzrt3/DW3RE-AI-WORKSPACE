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

// Function: FUN_001afb88
// Address: 0x1afb88 - 0x1afc20
void FUN_001afb88_0x1afb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afb88_0x1afb88");
#endif

    switch (ctx->pc) {
        case 0x1afbb4u: goto label_1afbb4;
        case 0x1afbc0u: goto label_1afbc0;
        case 0x1afbc8u: goto label_1afbc8;
        case 0x1afbdcu: goto label_1afbdc;
        case 0x1afc08u: goto label_1afc08;
        default: break;
    }

    ctx->pc = 0x1afb88u;

    // 0x1afb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afb8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1afb90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afb94: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AFB94u;
    {
        const bool branch_taken_0x1afb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB94u;
        // 0x1afb98: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb94) {
            ctx->pc = 0x1AFBECu;
            goto label_1afbec;
        }
    }
    ctx->pc = 0x1AFB9Cu;
    // 0x1afb9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afba0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afba0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287290u));
    // 0x1afba4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFBA4u;
    {
        const bool branch_taken_0x1afba4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afba4) {
            ctx->pc = 0x1AFBB4u;
            goto label_1afbb4;
        }
    }
    ctx->pc = 0x1AFBACu;
    // 0x1afbac: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFBACu;
    SET_GPR_U32(ctx, 31, 0x1AFBB4u);
    ctx->pc = 0x1AFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBACu;
    // 0x1afbb0: 0x2484aa28  addiu       $a0, $a0, -0x55D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFBACu, 0x1AFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBB4u;
label_1afbb4:
    // 0x1afbb4: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1afbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1afbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFBB8u;
    {
        const bool branch_taken_0x1afbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB8u;
        // 0x1afbbc: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbb8) {
            ctx->pc = 0x1AFBC8u;
            goto label_1afbc8;
        }
    }
    ctx->pc = 0x1AFBC0u;
label_1afbc0:
    // 0x1afbc0: 0xc06bc12  jal         func_1AF048
    ctx->pc = 0x1AFBC0u;
    SET_GPR_U32(ctx, 31, 0x1AFBC8u);
    ctx->pc = 0x1AFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBC0u;
    // 0x1afbc4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF048u, 0x1AFBC0u, 0x1AFBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBC8u;
label_1afbc8:
    // 0x1afbc8: 0x8e2272b0  lw          $v0, 0x72B0($s1)
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29360)));
    // 0x1afbcc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1AFBCCu;
    {
        const bool branch_taken_0x1afbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afbcc) {
            ctx->pc = 0x1AFBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afbc0;
        }
    }
    ctx->pc = 0x1AFBD4u;
    // 0x1afbd4: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFBD4u;
    SET_GPR_U32(ctx, 31, 0x1AFBDCu);
    ctx->pc = 0x1AFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBD4u;
    // 0x1afbd8: 0x26048450  addiu       $a0, $s0, -0x7BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFBD4u, 0x1AFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBDCu;
label_1afbdc:
    // 0x1afbdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AFBDCu;
    {
        const bool branch_taken_0x1afbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBDCu;
        // 0x1afbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbdc) {
            ctx->pc = 0x1AFBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afbc0;
        }
    }
    ctx->pc = 0x1AFBE4u;
    // 0x1afbe4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AFBE4u;
    {
        const bool branch_taken_0x1afbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE4u;
        // 0x1afbe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe4) {
            ctx->pc = 0x1AFC18u;
            goto label_1afc18;
        }
    }
    ctx->pc = 0x1AFBECu;
label_1afbec:
    // 0x1afbec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afbf0: 0x8c4372b0  lw          $v1, 0x72B0($v0)
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2872B0u));
    // 0x1afbf4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFBF4u;
    {
        const bool branch_taken_0x1afbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBF4u;
        // 0x1afbf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbf4) {
            ctx->pc = 0x1AFC14u;
            goto label_1afc14;
        }
    }
    ctx->pc = 0x1AFBFCu;
    // 0x1afbfc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1afc00: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFC00u;
    SET_GPR_U32(ctx, 31, 0x1AFC08u);
    ctx->pc = 0x1AFC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC00u;
    // 0x1afc04: 0x24848450  addiu       $a0, $a0, -0x7BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFC00u, 0x1AFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC08u;
label_1afc08:
    // 0x1afc08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC08u;
        // 0x1afc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC14u;
            goto label_1afc14;
        }
    }
    ctx->pc = 0x1AFC10u;
    // 0x1afc10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afc14:
    // 0x1afc14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1afc18:
    // 0x1afc18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afc18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1afc20u;
}
