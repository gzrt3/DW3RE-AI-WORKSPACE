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

// Function: FUN_001a5a10
// Address: 0x1a5a10 - 0x1a5a28
void FUN_001a5a10_0x1a5a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5a10_0x1a5a10");
#endif

    ctx->pc = 0x1a5a10u;

    // 0x1a5a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5a14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a5a18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5a20: 0xc069314  jal         func_1A4C50
    ctx->pc = 0x1A5A20u;
    SET_GPR_U32(ctx, 31, 0x1A5A28u);
    ctx->pc = 0x1A5A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A20u;
    // 0x1a5a24: 0x2404fff7  addiu       $a0, $zero, -0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C50u, 0x1A5A20u, 0x1A5A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A28u;
}
