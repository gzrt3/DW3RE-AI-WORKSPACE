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

// Function: entry_001a2534
// Address: 0x1a2534 - 0x1a2550
void entry_001a2534_0x1a2534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2534_0x1a2534");
#endif

    switch (ctx->pc) {
        case 0x1a2548u: goto label_1a2548;
        default: break;
    }

    ctx->pc = 0x1a2534u;

    // 0x1a2534: 0x17d50006  bne         $fp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2534u;
    {
        const bool branch_taken_0x1a2534 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2534u;
        // 0x1a2538: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2534) {
            ctx->pc = 0x1A2550u;
            return;
        }
    }
    ctx->pc = 0x1A253Cu;
    // 0x1a253c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2540: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A2540u;
    SET_GPR_U32(ctx, 31, 0x1A2548u);
    ctx->pc = 0x1A2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2540u;
    // 0x1a2544: 0x24a5a298  addiu       $a1, $a1, -0x5D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A2540u, 0x1A2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1A2548u;
    {
        const bool branch_taken_0x1a2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2548u;
        // 0x1a254c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2548) {
            ctx->pc = 0x1A2738u;
            return;
        }
    }
    ctx->pc = 0x1A2550u;
}
