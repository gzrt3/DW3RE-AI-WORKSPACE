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

// Function: entry_001af7fc
// Address: 0x1af7fc - 0x1af814
void entry_001af7fc_0x1af7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af7fc_0x1af7fc");
#endif

    ctx->pc = 0x1af7fcu;

    // 0x1af7fc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF7FCu;
    {
        const bool branch_taken_0x1af7fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7fc) {
            ctx->pc = 0x1AF814u;
            return;
        }
    }
    ctx->pc = 0x1AF804u;
    // 0x1af804: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1af808: 0x2484a998  addiu       $a0, $a0, -0x5668
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945176));
    // 0x1af80c: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF80Cu;
    SET_GPR_U32(ctx, 31, 0x1AF814u);
    ctx->pc = 0x1AF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF80Cu;
    // 0x1af810: 0x24a55fe4  addiu       $a1, $a1, 0x5FE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF80Cu, 0x1AF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF814u;
}
