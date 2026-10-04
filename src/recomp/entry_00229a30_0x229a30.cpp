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

// Function: entry_00229a30
// Address: 0x229a30 - 0x229a6c
void entry_00229a30_0x229a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229a30_0x229a30");
#endif

    switch (ctx->pc) {
        case 0x229a54u: goto label_229a54;
        case 0x229a60u: goto label_229a60;
        default: break;
    }

    ctx->pc = 0x229a30u;

    // 0x229a30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a34: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A270u));
    // 0x229a38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x229a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x229a3c: 0x8c22cc38  lw          $v0, -0x33C8($at)
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29CC38u));
    // 0x229a40: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x229a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229a44: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x229A44u;
    {
        const bool branch_taken_0x229a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A44u;
        // 0x229a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a44) {
            ctx->pc = 0x229AE0u;
            return;
        }
    }
    ctx->pc = 0x229A4Cu;
    // 0x229a4c: 0xc08a004  jal         func_228010
    ctx->pc = 0x229A4Cu;
    SET_GPR_U32(ctx, 31, 0x229A54u);
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229A4Cu, 0x229A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A54u;
label_229a54:
    // 0x229a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a58: 0xc08a004  jal         func_228010
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A58u;
    // 0x229a5c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229A58u, 0x229A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x229a64: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x229A64u;
    {
        const bool branch_taken_0x229a64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a64) {
            ctx->pc = 0x229AE0u;
            return;
        }
    }
    ctx->pc = 0x229A6Cu;
}
