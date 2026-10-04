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

// Function: FUN_00248a50
// Address: 0x248a50 - 0x248ac8
void FUN_00248a50_0x248a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00248a50_0x248a50");
#endif

    switch (ctx->pc) {
        case 0x248a94u: goto label_248a94;
        case 0x248aa4u: goto label_248aa4;
        case 0x248ab4u: goto label_248ab4;
        case 0x248ac4u: goto label_248ac4;
        default: break;
    }

    ctx->pc = 0x248a50u;

    // 0x248a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248a54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x248a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x248a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248a5c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x248a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248a60: 0x10c30016  beq         $a2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x248A60u;
    {
        const bool branch_taken_0x248a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x248A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A60u;
        // 0x248a64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a60) {
            ctx->pc = 0x248ABCu;
            goto label_248abc;
        }
    }
    ctx->pc = 0x248A68u;
    // 0x248a68: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x248A68u;
    {
        const bool branch_taken_0x248a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x248a68) {
            ctx->pc = 0x248AACu;
            goto label_248aac;
        }
    }
    ctx->pc = 0x248A70u;
    // 0x248a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248a74: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x248A74u;
    {
        const bool branch_taken_0x248a74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x248a74) {
            ctx->pc = 0x248A9Cu;
            goto label_248a9c;
        }
    }
    ctx->pc = 0x248A7Cu;
    // 0x248a7c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x248A7Cu;
    {
        const bool branch_taken_0x248a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a7c) {
            ctx->pc = 0x248A8Cu;
            goto label_248a8c;
        }
    }
    ctx->pc = 0x248A84u;
    // 0x248a84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x248A84u;
    {
        const bool branch_taken_0x248a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A84u;
        // 0x248a88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a84) {
            ctx->pc = 0x248AC8u;
            return;
        }
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0xc092368  jal         func_248DA0
    ctx->pc = 0x248A8Cu;
    SET_GPR_U32(ctx, 31, 0x248A94u);
    ctx->pc = 0x248DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DA0u, 0x248A8Cu, 0x248A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A94u;
label_248a94:
    // 0x248a94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x248A94u;
    {
        const bool branch_taken_0x248a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a94) {
            ctx->pc = 0x248AC4u;
            goto label_248ac4;
        }
    }
    ctx->pc = 0x248A9Cu;
label_248a9c:
    // 0x248a9c: 0xc09232c  jal         func_248CB0
    ctx->pc = 0x248A9Cu;
    SET_GPR_U32(ctx, 31, 0x248AA4u);
    ctx->pc = 0x248CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CB0u, 0x248A9Cu, 0x248AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AA4u;
label_248aa4:
    // 0x248aa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x248AA4u;
    {
        const bool branch_taken_0x248aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248aa4) {
            ctx->pc = 0x248AC4u;
            goto label_248ac4;
        }
    }
    ctx->pc = 0x248AACu;
label_248aac:
    // 0x248aac: 0xc0922f0  jal         func_248BC0
    ctx->pc = 0x248AACu;
    SET_GPR_U32(ctx, 31, 0x248AB4u);
    ctx->pc = 0x248BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248BC0u, 0x248AACu, 0x248AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AB4u;
label_248ab4:
    // 0x248ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248AB4u;
    {
        const bool branch_taken_0x248ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ab4) {
            ctx->pc = 0x248AC4u;
            goto label_248ac4;
        }
    }
    ctx->pc = 0x248ABCu;
label_248abc:
    // 0x248abc: 0xc0922b4  jal         func_248AD0
    ctx->pc = 0x248ABCu;
    SET_GPR_U32(ctx, 31, 0x248AC4u);
    ctx->pc = 0x248AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248AD0u, 0x248ABCu, 0x248AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AC4u;
label_248ac4:
    // 0x248ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x248ac8u;
}
