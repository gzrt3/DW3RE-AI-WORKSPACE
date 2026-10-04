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

// Function: FUN_001a4130
// Address: 0x1a4130 - 0x1a4144
void FUN_001a4130_0x1a4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4130_0x1a4130");
#endif

    ctx->pc = 0x1a4130u;

    // 0x1a4130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a413c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A413Cu;
    SET_GPR_U32(ctx, 31, 0x1A4144u);
    ctx->pc = 0x1A4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A413Cu;
    // 0x1a4140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A413Cu, 0x1A4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4144u;
}
