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

// Function: FUN_001b75d0
// Address: 0x1b75d0 - 0x1b7618
void FUN_001b75d0_0x1b75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b75d0_0x1b75d0");
#endif

    switch (ctx->pc) {
        case 0x1b75f0u: goto label_1b75f0;
        case 0x1b7600u: goto label_1b7600;
        case 0x1b7610u: goto label_1b7610;
        default: break;
    }

    ctx->pc = 0x1b75d0u;

    // 0x1b75d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b75d4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1b75d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1b75d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b75dc: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1b75dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1b75e0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1b75e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1b75e4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1b75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1b75e8: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B75E8u;
    SET_GPR_U32(ctx, 31, 0x1B75F0u);
    ctx->pc = 0x1B75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75E8u;
    // 0x1b75ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B75E8u, 0x1B75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75F0u;
label_1b75f0:
    // 0x1b75f0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b75f4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1b75f8: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B75F8u;
    SET_GPR_U32(ctx, 31, 0x1B7600u);
    ctx->pc = 0x1B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F8u;
    // 0x1b75fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B75F8u, 0x1B7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7600u;
label_1b7600:
    // 0x1b7600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7608: 0xc06dcdc  jal         func_1B7370
    ctx->pc = 0x1B7608u;
    SET_GPR_U32(ctx, 31, 0x1B7610u);
    ctx->pc = 0x1B760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7608u;
    // 0x1b760c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7370u, 0x1B7608u, 0x1B7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7610u;
label_1b7610:
    // 0x1b7610: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B7610u;
    SET_GPR_U32(ctx, 31, 0x1B7618u);
    ctx->pc = 0x1B7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7610u;
    // 0x1b7614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B7610u, 0x1B7618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7618u;
}
