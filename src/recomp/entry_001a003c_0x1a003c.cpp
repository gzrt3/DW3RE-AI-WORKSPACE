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

// Function: entry_001a003c
// Address: 0x1a003c - 0x1a005c
void entry_001a003c_0x1a003c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a003c_0x1a003c");
#endif

    switch (ctx->pc) {
        case 0x1a0048u: goto label_1a0048;
        default: break;
    }

    ctx->pc = 0x1a003cu;

    // 0x1a003c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0040: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0040u;
    SET_GPR_U32(ctx, 31, 0x1A0048u);
    ctx->pc = 0x1A0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0040u;
    // 0x1a0044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0040u, 0x1A0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0048u;
label_1a0048:
    // 0x1a0048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0048u;
    {
        const bool branch_taken_0x1a0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0048u;
        // 0x1a004c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0048) {
            ctx->pc = 0x1A005Cu;
            return;
        }
    }
    ctx->pc = 0x1A0050u;
    // 0x1a0050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0054: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A0054u;
    SET_GPR_U32(ctx, 31, 0x1A005Cu);
    ctx->pc = 0x1A0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0054u;
    // 0x1a0058: 0x24a5a1a8  addiu       $a1, $a1, -0x5E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A0054u, 0x1A005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A005Cu;
}
