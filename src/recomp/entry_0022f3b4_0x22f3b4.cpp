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

// Function: entry_0022f3b4
// Address: 0x22f3b4 - 0x22f3d4
void entry_0022f3b4_0x22f3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f3b4_0x22f3b4");
#endif

    switch (ctx->pc) {
        case 0x22f3bcu: goto label_22f3bc;
        case 0x22f3ccu: goto label_22f3cc;
        default: break;
    }

    ctx->pc = 0x22f3b4u;

    // 0x22f3b4: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F3B4u;
    SET_GPR_U32(ctx, 31, 0x22F3BCu);
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F3B4u, 0x22F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3BCu;
label_22f3bc:
    // 0x22f3bc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x22F3BCu;
    {
        const bool branch_taken_0x22f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3bc) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F3C4u;
    // 0x22f3c4: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F3C4u;
    SET_GPR_U32(ctx, 31, 0x22F3CCu);
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F3C4u, 0x22F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3CCu;
label_22f3cc:
    // 0x22f3cc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22F3CCu;
    {
        const bool branch_taken_0x22f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3cc) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F3D4u;
}
