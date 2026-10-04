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

// Function: FUN_00233e38
// Address: 0x233e38 - 0x233e4c
void FUN_00233e38_0x233e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233e38_0x233e38");
#endif

    ctx->pc = 0x233e38u;

    // 0x233e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233e44: 0xc08cf6c  jal         func_233DB0
    ctx->pc = 0x233E44u;
    SET_GPR_U32(ctx, 31, 0x233E4Cu);
    ctx->pc = 0x233E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E44u;
    // 0x233e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DB0u, 0x233E44u, 0x233E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E4Cu;
}
