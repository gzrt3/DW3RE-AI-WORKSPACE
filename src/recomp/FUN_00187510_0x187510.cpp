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

// Function: FUN_00187510
// Address: 0x187510 - 0x18752c
void FUN_00187510_0x187510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187510_0x187510");
#endif

    ctx->pc = 0x187510u;

    // 0x187510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18751c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187524: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x187524u;
    SET_GPR_U32(ctx, 31, 0x18752Cu);
    ctx->pc = 0x187528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187524u;
    // 0x187528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x187524u, 0x18752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18752Cu;
}
