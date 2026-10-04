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

// Function: entry_001ad680
// Address: 0x1ad680 - 0x1ad698
void entry_001ad680_0x1ad680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad680_0x1ad680");
#endif

    switch (ctx->pc) {
        case 0x1ad690u: goto label_1ad690;
        default: break;
    }

    ctx->pc = 0x1ad680u;

    // 0x1ad680: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ad684: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1ad688: 0xc06b564  jal         func_1AD590
    ctx->pc = 0x1AD688u;
    SET_GPR_U32(ctx, 31, 0x1AD690u);
    ctx->pc = 0x1AD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD688u;
    // 0x1ad68c: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD590u, 0x1AD688u, 0x1AD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD690u;
label_1ad690:
    // 0x1ad690: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad694: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    ctx->pc = 0x1ad698u;
}
