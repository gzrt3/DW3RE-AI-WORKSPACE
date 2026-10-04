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

// Function: FUN_00233538
// Address: 0x233538 - 0x233564
void FUN_00233538_0x233538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233538_0x233538");
#endif

    switch (ctx->pc) {
        case 0x233554u: goto label_233554;
        default: break;
    }

    ctx->pc = 0x233538u;

    // 0x233538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23353c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233540: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x233544: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x233548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23354c: 0xc08cd14  jal         func_233450
    ctx->pc = 0x23354Cu;
    SET_GPR_U32(ctx, 31, 0x233554u);
    ctx->pc = 0x233550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23354Cu;
    // 0x233550: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233450u, 0x23354Cu, 0x233554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233554u;
label_233554:
    // 0x233554: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x233554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x233558: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x23355c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x233564u;
}
