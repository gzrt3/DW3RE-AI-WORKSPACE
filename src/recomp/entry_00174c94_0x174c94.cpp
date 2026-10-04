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

// Function: entry_00174c94
// Address: 0x174c94 - 0x174cb0
void entry_00174c94_0x174c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c94_0x174c94");
#endif

    switch (ctx->pc) {
        case 0x174c9cu: goto label_174c9c;
        default: break;
    }

    ctx->pc = 0x174c94u;

    // 0x174c94: 0xc05b848  jal         func_16E120
    ctx->pc = 0x174C94u;
    SET_GPR_U32(ctx, 31, 0x174C9Cu);
    ctx->pc = 0x174C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C94u;
    // 0x174c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E120u, 0x174C94u, 0x174C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C9Cu;
label_174c9c:
    // 0x174c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ca0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174CA0u;
    {
        const bool branch_taken_0x174ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x174ca0) {
            ctx->pc = 0x174CB4u;
            return;
        }
    }
    ctx->pc = 0x174CA8u;
    // 0x174ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174CA8u;
    {
        const bool branch_taken_0x174ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA8u;
        // 0x174cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca8) {
            ctx->pc = 0x174CB4u;
            return;
        }
    }
    ctx->pc = 0x174CB0u;
}
