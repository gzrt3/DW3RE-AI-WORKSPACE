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

// Function: entry_00229960
// Address: 0x229960 - 0x22999c
void entry_00229960_0x229960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229960_0x229960");
#endif

    switch (ctx->pc) {
        case 0x229970u: goto label_229970;
        case 0x229984u: goto label_229984;
        case 0x229990u: goto label_229990;
        default: break;
    }

    ctx->pc = 0x229960u;

    // 0x229960: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229968: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229968u;
    SET_GPR_U32(ctx, 31, 0x229970u);
    ctx->pc = 0x22996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229968u;
    // 0x22996c: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229968u, 0x229970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229970u;
label_229970:
    // 0x229970: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x229974: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x229974u;
    {
        const bool branch_taken_0x229974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x229974) {
            ctx->pc = 0x229A30u;
            return;
        }
    }
    ctx->pc = 0x22997Cu;
    // 0x22997c: 0xc08a004  jal         func_228010
    ctx->pc = 0x22997Cu;
    SET_GPR_U32(ctx, 31, 0x229984u);
    ctx->pc = 0x229980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22997Cu;
    // 0x229980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x22997Cu, 0x229984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229984u;
label_229984:
    // 0x229984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229988: 0xc08a004  jal         func_228010
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229988u, 0x229990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x229994: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x229994u;
    {
        const bool branch_taken_0x229994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229994) {
            ctx->pc = 0x2299E0u;
            return;
        }
    }
    ctx->pc = 0x22999Cu;
}
