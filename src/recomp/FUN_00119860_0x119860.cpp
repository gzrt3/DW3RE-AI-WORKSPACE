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

// Function: FUN_00119860
// Address: 0x119860 - 0x11987c
void FUN_00119860_0x119860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119860_0x119860");
#endif

    switch (ctx->pc) {
        case 0x119874u: goto label_119874;
        default: break;
    }

    ctx->pc = 0x119860u;

    // 0x119860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11986c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x11986Cu;
    SET_GPR_U32(ctx, 31, 0x119874u);
    ctx->pc = 0x119870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11986Cu;
    // 0x119870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x11986Cu, 0x119874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119874u;
label_119874:
    // 0x119874: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x119874u;
    SET_GPR_U32(ctx, 31, 0x11987Cu);
    ctx->pc = 0x119878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119874u;
    // 0x119878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x119874u, 0x11987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11987Cu;
}
