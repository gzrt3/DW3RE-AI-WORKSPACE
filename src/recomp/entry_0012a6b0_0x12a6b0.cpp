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

// Function: entry_0012a6b0
// Address: 0x12a6b0 - 0x12a6c0
void entry_0012a6b0_0x12a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a6b0_0x12a6b0");
#endif

    ctx->pc = 0x12a6b0u;

    // 0x12a6b0: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x12a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x12a6b4: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12a6b8: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12A6B8u;
    SET_GPR_U32(ctx, 31, 0x12A6C0u);
    ctx->pc = 0x12A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6B8u;
    // 0x12a6bc: 0x26050330  addiu       $a1, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12A6B8u, 0x12A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6C0u;
}
