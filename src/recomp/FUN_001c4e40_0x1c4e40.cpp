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

// Function: FUN_001c4e40
// Address: 0x1c4e40 - 0x1c4e60
void FUN_001c4e40_0x1c4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4e40_0x1c4e40");
#endif

    ctx->pc = 0x1c4e40u;

    // 0x1c4e40: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c4e44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4e48: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1c4e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c4e4c: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x1c4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1c4e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4e58: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x1C4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E58u;
    // 0x1c4e5c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C4E58u, 0x1C4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E60u;
}
