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

// Function: FUN_00237088
// Address: 0x237088 - 0x2370a8
void FUN_00237088_0x237088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237088_0x237088");
#endif

    ctx->pc = 0x237088u;

    // 0x237088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23708c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237090: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x237090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x237094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237098: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x237098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23709c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2370a0: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x2370A0u;
    SET_GPR_U32(ctx, 31, 0x2370A8u);
    ctx->pc = 0x2370A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370A0u;
    // 0x2370a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x2370A0u, 0x2370A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370A8u;
}
