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

// Function: FUN_002365e8
// Address: 0x2365e8 - 0x236660
void FUN_002365e8_0x2365e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002365e8_0x2365e8");
#endif

    switch (ctx->pc) {
        case 0x236610u: goto label_236610;
        case 0x236620u: goto label_236620;
        case 0x236640u: goto label_236640;
        case 0x23664cu: goto label_23664c;
        default: break;
    }

    ctx->pc = 0x2365e8u;

    // 0x2365e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2365e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2365ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2365ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2365f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2365f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365f4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2365f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2365f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2365fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2365fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236604: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x236608: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236608u;
    SET_GPR_U32(ctx, 31, 0x236610u);
    ctx->pc = 0x23660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236608u;
    // 0x23660c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236608u, 0x236610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236610u;
label_236610:
    // 0x236610: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x236610u;
    {
        const bool branch_taken_0x236610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236610u;
        // 0x236614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236610) {
            ctx->pc = 0x236650u;
            goto label_236650;
        }
    }
    ctx->pc = 0x236618u;
    // 0x236618: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236618u;
    SET_GPR_U32(ctx, 31, 0x236620u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236618u, 0x236620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236620u;
label_236620:
    // 0x236620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236628: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x236628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x23662c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23662Cu;
    {
        const bool branch_taken_0x23662c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x236630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23662Cu;
        // 0x236630: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23662c) {
            ctx->pc = 0x236644u;
            goto label_236644;
        }
    }
    ctx->pc = 0x236634u;
    // 0x236634: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236638: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236638u;
    SET_GPR_U32(ctx, 31, 0x236640u);
    ctx->pc = 0x23663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236638u;
    // 0x23663c: 0xac52b1c0  sw          $s2, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236638u, 0x236640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236640u;
label_236640:
    // 0x236640: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236644:
    // 0x236644: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236644u;
    SET_GPR_U32(ctx, 31, 0x23664Cu);
    ctx->pc = 0x236648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236644u;
    // 0x236648: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236644u, 0x23664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23664Cu;
label_23664c:
    // 0x23664c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23664cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236650:
    // 0x236650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236658: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23665c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x236660u;
}
