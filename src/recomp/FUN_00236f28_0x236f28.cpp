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

// Function: FUN_00236f28
// Address: 0x236f28 - 0x236f5c
void FUN_00236f28_0x236f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236f28_0x236f28");
#endif

    switch (ctx->pc) {
        case 0x236f40u: goto label_236f40;
        case 0x236f50u: goto label_236f50;
        default: break;
    }

    ctx->pc = 0x236f28u;

    // 0x236f28: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236f34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236f38: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236F38u;
    SET_GPR_U32(ctx, 31, 0x236F40u);
    ctx->pc = 0x236F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F38u;
    // 0x236f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236F38u, 0x236F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F40u;
label_236f40:
    // 0x236f40: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x236f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x236f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f48: 0xc08db22  jal         func_236C88
    ctx->pc = 0x236F48u;
    SET_GPR_U32(ctx, 31, 0x236F50u);
    ctx->pc = 0x236F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F48u;
    // 0x236f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C88u, 0x236F48u, 0x236F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F50u;
label_236f50:
    // 0x236f50: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236f54: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236F54u;
    SET_GPR_U32(ctx, 31, 0x236F5Cu);
    ctx->pc = 0x236F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F54u;
    // 0x236f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236F54u, 0x236F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F5Cu;
}
