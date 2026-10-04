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

// Function: FUN_00236ee0
// Address: 0x236ee0 - 0x236f14
void FUN_00236ee0_0x236ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236ee0_0x236ee0");
#endif

    switch (ctx->pc) {
        case 0x236ef8u: goto label_236ef8;
        case 0x236f08u: goto label_236f08;
        default: break;
    }

    ctx->pc = 0x236ee0u;

    // 0x236ee0: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236ee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236eec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236ef0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236EF0u;
    SET_GPR_U32(ctx, 31, 0x236EF8u);
    ctx->pc = 0x236EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EF0u;
    // 0x236ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236EF0u, 0x236EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EF8u;
label_236ef8:
    // 0x236ef8: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x236ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x236efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f00: 0xc08db22  jal         func_236C88
    ctx->pc = 0x236F00u;
    SET_GPR_U32(ctx, 31, 0x236F08u);
    ctx->pc = 0x236F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F00u;
    // 0x236f04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C88u, 0x236F00u, 0x236F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F08u;
label_236f08:
    // 0x236f08: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236f0c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236F0Cu;
    SET_GPR_U32(ctx, 31, 0x236F14u);
    ctx->pc = 0x236F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F0Cu;
    // 0x236f10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236F0Cu, 0x236F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F14u;
}
