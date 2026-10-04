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

// Function: FUN_00144da0
// Address: 0x144da0 - 0x144db8
void FUN_00144da0_0x144da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144da0_0x144da0");
#endif

    ctx->pc = 0x144da0u;

    // 0x144da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144dac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x144dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144db0: 0xc070120  jal         func_1C0480
    ctx->pc = 0x144DB0u;
    SET_GPR_U32(ctx, 31, 0x144DB8u);
    ctx->pc = 0x144DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DB0u;
    // 0x144db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0480u, 0x144DB0u, 0x144DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DB8u;
}
