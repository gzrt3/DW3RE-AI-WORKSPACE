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

// Function: FUN_0014c8e0
// Address: 0x14c8e0 - 0x14c92c
void FUN_0014c8e0_0x14c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c8e0_0x14c8e0");
#endif

    switch (ctx->pc) {
        case 0x14c8f0u: goto label_14c8f0;
        case 0x14c8f8u: goto label_14c8f8;
        case 0x14c928u: goto label_14c928;
        default: break;
    }

    ctx->pc = 0x14c8e0u;

    // 0x14c8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c8e8: 0xc045bac  jal         func_116EB0
    ctx->pc = 0x14C8E8u;
    SET_GPR_U32(ctx, 31, 0x14C8F0u);
    ctx->pc = 0x116EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EB0u, 0x14C8E8u, 0x14C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8F0u;
label_14c8f0:
    // 0x14c8f0: 0xc053250  jal         func_14C940
    ctx->pc = 0x14C8F0u;
    SET_GPR_U32(ctx, 31, 0x14C8F8u);
    ctx->pc = 0x14C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8F0u;
    // 0x14c8f4: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C940u, 0x14C8F0u, 0x14C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8F8u;
label_14c8f8:
    // 0x14c8f8: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x14c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x14c8fc: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x14c8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x14c900: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C900u;
    {
        const bool branch_taken_0x14c900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C900u;
        // 0x14c904: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c900) {
            ctx->pc = 0x14C918u;
            goto label_14c918;
        }
    }
    ctx->pc = 0x14C908u;
    // 0x14c908: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x14c908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x14c90c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C90Cu;
    {
        const bool branch_taken_0x14c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c90c) {
            ctx->pc = 0x14C928u;
            goto label_14c928;
        }
    }
    ctx->pc = 0x14C914u;
    // 0x14c914: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x14c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_14c918:
    // 0x14c918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C918u;
    {
        const bool branch_taken_0x14c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c918) {
            ctx->pc = 0x14C928u;
            goto label_14c928;
        }
    }
    ctx->pc = 0x14C920u;
    // 0x14c920: 0xc053250  jal         func_14C940
    ctx->pc = 0x14C920u;
    SET_GPR_U32(ctx, 31, 0x14C928u);
    ctx->pc = 0x14C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C920u;
    // 0x14c924: 0x8f8480d4  lw          $a0, -0x7F2C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C940u, 0x14C920u, 0x14C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C928u;
label_14c928:
    // 0x14c928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14c92cu;
}
