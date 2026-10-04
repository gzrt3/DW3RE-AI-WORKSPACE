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

// Function: entry_0022f4b0
// Address: 0x22f4b0 - 0x22f4c8
void entry_0022f4b0_0x22f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f4b0_0x22f4b0");
#endif

    switch (ctx->pc) {
        case 0x22f4b8u: goto label_22f4b8;
        default: break;
    }

    ctx->pc = 0x22f4b0u;

    // 0x22f4b0: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F4B0u;
    SET_GPR_U32(ctx, 31, 0x22F4B8u);
    ctx->pc = 0x22F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4B0u;
    // 0x22f4b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F4B0u, 0x22F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4B8u;
label_22f4b8:
    // 0x22f4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F4B8u;
    {
        const bool branch_taken_0x22f4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4B8u;
        // 0x22f4bc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4b8) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F4C0u;
    // 0x22f4c0: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F4C0u;
    SET_GPR_U32(ctx, 31, 0x22F4C8u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F4C0u, 0x22F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4C8u;
}
