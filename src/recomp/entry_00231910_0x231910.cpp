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

// Function: entry_00231910
// Address: 0x231910 - 0x23193c
void entry_00231910_0x231910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231910_0x231910");
#endif

    switch (ctx->pc) {
        case 0x231918u: goto label_231918;
        case 0x231938u: goto label_231938;
        default: break;
    }

    ctx->pc = 0x231910u;

    // 0x231910: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x231910u;
    SET_GPR_U32(ctx, 31, 0x231918u);
    ctx->pc = 0x231914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231910u;
    // 0x231914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x231910u, 0x231918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231918u;
label_231918:
    // 0x231918: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x23191c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x23191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x231920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231924: 0x8c421208  lw          $v0, 0x1208($v0)
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4616)));
    // 0x231928: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231928u;
    {
        const bool branch_taken_0x231928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x231928) {
            ctx->pc = 0x23193Cu;
            return;
        }
    }
    ctx->pc = 0x231930u;
    // 0x231930: 0xc08d14c  jal         func_234530
    ctx->pc = 0x231930u;
    SET_GPR_U32(ctx, 31, 0x231938u);
    ctx->pc = 0x231934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231930u;
    // 0x231934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234530u, 0x231930u, 0x231938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    ctx->pc = 0x23193cu;
}
