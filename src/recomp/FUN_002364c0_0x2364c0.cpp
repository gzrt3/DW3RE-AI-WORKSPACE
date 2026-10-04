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

// Function: FUN_002364c0
// Address: 0x2364c0 - 0x236538
void FUN_002364c0_0x2364c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002364c0_0x2364c0");
#endif

    switch (ctx->pc) {
        case 0x2364e8u: goto label_2364e8;
        case 0x2364f8u: goto label_2364f8;
        case 0x236518u: goto label_236518;
        case 0x236524u: goto label_236524;
        default: break;
    }

    ctx->pc = 0x2364c0u;

    // 0x2364c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2364c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2364c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2364c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2364c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2364cc: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2364d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2364d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2364d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2364d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2364d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2364d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2364dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2364dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2364e0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2364E0u;
    SET_GPR_U32(ctx, 31, 0x2364E8u);
    ctx->pc = 0x2364E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364E0u;
    // 0x2364e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2364E0u, 0x2364E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364E8u;
label_2364e8:
    // 0x2364e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2364E8u;
    {
        const bool branch_taken_0x2364e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2364ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E8u;
        // 0x2364ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364e8) {
            ctx->pc = 0x236528u;
            goto label_236528;
        }
    }
    ctx->pc = 0x2364F0u;
    // 0x2364f0: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x2364F0u;
    SET_GPR_U32(ctx, 31, 0x2364F8u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x2364F0u, 0x2364F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364F8u;
label_2364f8:
    // 0x2364f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2364f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2364fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2364fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236500: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x236504: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236504u;
    {
        const bool branch_taken_0x236504 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x236508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236504u;
        // 0x236508: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236504) {
            ctx->pc = 0x23651Cu;
            goto label_23651c;
        }
    }
    ctx->pc = 0x23650Cu;
    // 0x23650c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x23650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236510: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236510u;
    SET_GPR_U32(ctx, 31, 0x236518u);
    ctx->pc = 0x236514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236510u;
    // 0x236514: 0xac52b1c0  sw          $s2, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236510u, 0x236518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236518u;
label_236518:
    // 0x236518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23651c:
    // 0x23651c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x23651Cu;
    SET_GPR_U32(ctx, 31, 0x236524u);
    ctx->pc = 0x236520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23651Cu;
    // 0x236520: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x23651Cu, 0x236524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236524u;
label_236524:
    // 0x236524: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x236524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236528:
    // 0x236528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23652c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23652cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236534: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x236538u;
}
