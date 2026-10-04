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

// Function: FUN_0013cc40
// Address: 0x13cc40 - 0x13cc60
void FUN_0013cc40_0x13cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cc40_0x13cc40");
#endif

    ctx->pc = 0x13cc40u;

    // 0x13cc40: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13cc44: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13cc48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cc4c: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x13cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x13cc50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cc58: 0xc066e26  jal         func_19B898
    ctx->pc = 0x13CC58u;
    SET_GPR_U32(ctx, 31, 0x13CC60u);
    ctx->pc = 0x13CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC58u;
    // 0x13cc5c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x13CC58u, 0x13CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC60u;
}
