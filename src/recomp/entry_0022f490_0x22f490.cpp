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

// Function: entry_0022f490
// Address: 0x22f490 - 0x22f4b0
void entry_0022f490_0x22f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f490_0x22f490");
#endif

    switch (ctx->pc) {
        case 0x22f498u: goto label_22f498;
        case 0x22f4a8u: goto label_22f4a8;
        default: break;
    }

    ctx->pc = 0x22f490u;

    // 0x22f490: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F490u;
    SET_GPR_U32(ctx, 31, 0x22F498u);
    ctx->pc = 0x22F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F490u;
    // 0x22f494: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F490u, 0x22F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F498u;
label_22f498:
    // 0x22f498: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F498u;
    {
        const bool branch_taken_0x22f498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F498u;
        // 0x22f49c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f498) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F4A0u;
    // 0x22f4a0: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F4A0u;
    SET_GPR_U32(ctx, 31, 0x22F4A8u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F4A0u, 0x22F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4A8u;
label_22f4a8:
    // 0x22f4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22F4A8u;
    {
        const bool branch_taken_0x22f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4a8) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F4B0u;
}
