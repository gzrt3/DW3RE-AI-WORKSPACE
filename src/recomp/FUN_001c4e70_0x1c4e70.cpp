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

// Function: FUN_001c4e70
// Address: 0x1c4e70 - 0x1c4e94
void FUN_001c4e70_0x1c4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4e70_0x1c4e70");
#endif

    ctx->pc = 0x1c4e70u;

    // 0x1c4e70: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c4e74: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1c4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c4e78: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x1c4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1c4e7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4e80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c4e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4e8c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1C4E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4E94u);
    ctx->pc = 0x1C4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E8Cu;
    // 0x1c4e90: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C4E8Cu, 0x1C4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E94u;
}
