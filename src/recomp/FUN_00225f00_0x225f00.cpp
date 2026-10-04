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

// Function: FUN_00225f00
// Address: 0x225f00 - 0x225f18
void FUN_00225f00_0x225f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225f00_0x225f00");
#endif

    ctx->pc = 0x225f00u;

    // 0x225f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f10: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x225F10u;
    SET_GPR_U32(ctx, 31, 0x225F18u);
    ctx->pc = 0x225F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F10u;
    // 0x225f14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x225F10u, 0x225F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F18u;
}
