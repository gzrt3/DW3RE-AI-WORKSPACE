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

// Function: entry_001369d0
// Address: 0x1369d0 - 0x1369f0
void entry_001369d0_0x1369d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001369d0_0x1369d0");
#endif

    switch (ctx->pc) {
        case 0x1369e8u: goto label_1369e8;
        default: break;
    }

    ctx->pc = 0x1369d0u;

    // 0x1369d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1369d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369d4: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x1369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
    // 0x1369d8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1369d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1369dc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1369dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1369e0: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x1369E0u;
    SET_GPR_U32(ctx, 31, 0x1369E8u);
    ctx->pc = 0x1369E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369E0u;
    // 0x1369e4: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x1369E0u, 0x1369E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369E8u;
label_1369e8:
    // 0x1369e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1369E8u;
    {
        const bool branch_taken_0x1369e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1369e8) {
            ctx->pc = 0x136A90u;
            return;
        }
    }
    ctx->pc = 0x1369F0u;
}
