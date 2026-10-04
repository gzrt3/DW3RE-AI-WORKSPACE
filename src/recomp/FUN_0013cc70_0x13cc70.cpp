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

// Function: FUN_0013cc70
// Address: 0x13cc70 - 0x13cc8c
void FUN_0013cc70_0x13cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cc70_0x13cc70");
#endif

    ctx->pc = 0x13cc70u;

    // 0x13cc70: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13cc74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cc78: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x13cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13cc7c: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x13cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x13cc80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cc84: 0xc066e26  jal         func_19B898
    ctx->pc = 0x13CC84u;
    SET_GPR_U32(ctx, 31, 0x13CC8Cu);
    ctx->pc = 0x13CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC84u;
    // 0x13cc88: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x13CC84u, 0x13CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC8Cu;
}
