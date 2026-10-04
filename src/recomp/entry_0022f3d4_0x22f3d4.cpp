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

// Function: entry_0022f3d4
// Address: 0x22f3d4 - 0x22f3f4
void entry_0022f3d4_0x22f3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f3d4_0x22f3d4");
#endif

    switch (ctx->pc) {
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3ecu: goto label_22f3ec;
        default: break;
    }

    ctx->pc = 0x22f3d4u;

    // 0x22f3d4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F3D4u;
    SET_GPR_U32(ctx, 31, 0x22F3DCu);
    ctx->pc = 0x22F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3D4u;
    // 0x22f3d8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F3D4u, 0x22F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x22F3DCu;
    {
        const bool branch_taken_0x22f3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3dc) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F3E4u;
    // 0x22f3e4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F3E4u;
    SET_GPR_U32(ctx, 31, 0x22F3ECu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F3E4u, 0x22F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3ECu;
label_22f3ec:
    // 0x22f3ec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x22F3ECu;
    {
        const bool branch_taken_0x22f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3ec) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F3F4u;
}
