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

// Function: entry_002201a8
// Address: 0x2201a8 - 0x2201d0
void entry_002201a8_0x2201a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002201a8_0x2201a8");
#endif

    switch (ctx->pc) {
        case 0x2201b0u: goto label_2201b0;
        case 0x2201c4u: goto label_2201c4;
        default: break;
    }

    ctx->pc = 0x2201a8u;

    // 0x2201a8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2201A8u;
    SET_GPR_U32(ctx, 31, 0x2201B0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2201A8u, 0x2201B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201B0u;
label_2201b0:
    // 0x2201b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2201B0u;
    {
        const bool branch_taken_0x2201b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B0u;
        // 0x2201b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201b0) {
            ctx->pc = 0x2201D0u;
            return;
        }
    }
    ctx->pc = 0x2201B8u;
    // 0x2201b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2201bc: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x2201BCu;
    SET_GPR_U32(ctx, 31, 0x2201C4u);
    ctx->pc = 0x2201C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201BCu;
    // 0x2201c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2201BCu, 0x2201C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201C4u;
label_2201c4:
    // 0x2201c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2201C4u;
    {
        const bool branch_taken_0x2201c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201C4u;
        // 0x2201c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201c4) {
            ctx->pc = 0x2201E8u;
            return;
        }
    }
    ctx->pc = 0x2201CCu;
    // 0x2201cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2201ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2201d0u;
}
