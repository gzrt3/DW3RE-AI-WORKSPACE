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

// Function: FUN_002368f0
// Address: 0x2368f0 - 0x236924
void FUN_002368f0_0x2368f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002368f0_0x2368f0");
#endif

    switch (ctx->pc) {
        case 0x236908u: goto label_236908;
        case 0x236918u: goto label_236918;
        default: break;
    }

    ctx->pc = 0x2368f0u;

    // 0x2368f0: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2368f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2368f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2368f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2368fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2368fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236900: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236900u;
    SET_GPR_U32(ctx, 31, 0x236908u);
    ctx->pc = 0x236904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236900u;
    // 0x236904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236900u, 0x236908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236908u;
label_236908:
    // 0x236908: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x236908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x23690c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23690cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236910: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236910u;
    SET_GPR_U32(ctx, 31, 0x236918u);
    ctx->pc = 0x236914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236910u;
    // 0x236914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236910u, 0x236918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236918u;
label_236918:
    // 0x236918: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x23691c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x23691Cu;
    SET_GPR_U32(ctx, 31, 0x236924u);
    ctx->pc = 0x236920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23691Cu;
    // 0x236920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x23691Cu, 0x236924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236924u;
}
