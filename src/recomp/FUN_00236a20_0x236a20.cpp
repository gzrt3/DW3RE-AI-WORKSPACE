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

// Function: FUN_00236a20
// Address: 0x236a20 - 0x236a54
void FUN_00236a20_0x236a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236a20_0x236a20");
#endif

    switch (ctx->pc) {
        case 0x236a38u: goto label_236a38;
        case 0x236a48u: goto label_236a48;
        default: break;
    }

    ctx->pc = 0x236a20u;

    // 0x236a20: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236a24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236a2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236a30: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236A30u;
    SET_GPR_U32(ctx, 31, 0x236A38u);
    ctx->pc = 0x236A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A30u;
    // 0x236a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236A30u, 0x236A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A38u;
label_236a38:
    // 0x236a38: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x236a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x236a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a40: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236A40u;
    SET_GPR_U32(ctx, 31, 0x236A48u);
    ctx->pc = 0x236A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A40u;
    // 0x236a44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236A40u, 0x236A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A48u;
label_236a48:
    // 0x236a48: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236a4c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236A4Cu;
    SET_GPR_U32(ctx, 31, 0x236A54u);
    ctx->pc = 0x236A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A4Cu;
    // 0x236a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236A4Cu, 0x236A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A54u;
}
