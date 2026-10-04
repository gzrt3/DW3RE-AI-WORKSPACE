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

// Function: FUN_00190640
// Address: 0x190640 - 0x19067c
void FUN_00190640_0x190640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190640_0x190640");
#endif

    switch (ctx->pc) {
        case 0x190660u: goto label_190660;
        case 0x190668u: goto label_190668;
        case 0x190678u: goto label_190678;
        default: break;
    }

    ctx->pc = 0x190640u;

    // 0x190640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190648: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x19064c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x190650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190650u;
    {
        const bool branch_taken_0x190650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190650u;
        // 0x190654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190650) {
            ctx->pc = 0x190670u;
            goto label_190670;
        }
    }
    ctx->pc = 0x190658u;
    // 0x190658: 0xc0641a4  jal         func_190690
    ctx->pc = 0x190658u;
    SET_GPR_U32(ctx, 31, 0x190660u);
    ctx->pc = 0x19065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190658u;
    // 0x19065c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190690u, 0x190658u, 0x190660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190660u;
label_190660:
    // 0x190660: 0xc0641a4  jal         func_190690
    ctx->pc = 0x190660u;
    SET_GPR_U32(ctx, 31, 0x190668u);
    ctx->pc = 0x190664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190660u;
    // 0x190664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190690u, 0x190660u, 0x190668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190668u;
label_190668:
    // 0x190668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x190668u;
    {
        const bool branch_taken_0x190668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190668u;
        // 0x19066c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190668) {
            ctx->pc = 0x19067Cu;
            return;
        }
    }
    ctx->pc = 0x190670u;
label_190670:
    // 0x190670: 0xc0641a4  jal         func_190690
    ctx->pc = 0x190670u;
    SET_GPR_U32(ctx, 31, 0x190678u);
    ctx->pc = 0x190690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190690u, 0x190670u, 0x190678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190678u;
label_190678:
    // 0x190678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19067cu;
}
