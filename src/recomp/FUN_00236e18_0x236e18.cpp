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

// Function: FUN_00236e18
// Address: 0x236e18 - 0x236e4c
void FUN_00236e18_0x236e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236e18_0x236e18");
#endif

    switch (ctx->pc) {
        case 0x236e30u: goto label_236e30;
        case 0x236e40u: goto label_236e40;
        default: break;
    }

    ctx->pc = 0x236e18u;

    // 0x236e18: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236e24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236e28: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236E28u;
    SET_GPR_U32(ctx, 31, 0x236E30u);
    ctx->pc = 0x236E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E28u;
    // 0x236e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236E28u, 0x236E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E30u;
label_236e30:
    // 0x236e30: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x236e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e38: 0xc08db22  jal         func_236C88
    ctx->pc = 0x236E38u;
    SET_GPR_U32(ctx, 31, 0x236E40u);
    ctx->pc = 0x236E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E38u;
    // 0x236e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C88u, 0x236E38u, 0x236E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E40u;
label_236e40:
    // 0x236e40: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236e44: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236E44u;
    SET_GPR_U32(ctx, 31, 0x236E4Cu);
    ctx->pc = 0x236E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E44u;
    // 0x236e48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236E44u, 0x236E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E4Cu;
}
