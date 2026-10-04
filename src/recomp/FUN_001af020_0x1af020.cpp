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

// Function: FUN_001af020
// Address: 0x1af020 - 0x1af030
void FUN_001af020_0x1af020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af020_0x1af020");
#endif

    ctx->pc = 0x1af020u;

    // 0x1af020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af028: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1AF028u;
    SET_GPR_U32(ctx, 31, 0x1AF030u);
    ctx->pc = 0x1AF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF028u;
    // 0x1af02c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1AF028u, 0x1AF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF030u;
}
