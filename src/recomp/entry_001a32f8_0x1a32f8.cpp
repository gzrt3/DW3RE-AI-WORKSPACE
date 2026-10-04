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

// Function: entry_001a32f8
// Address: 0x1a32f8 - 0x1a3320
void entry_001a32f8_0x1a32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a32f8_0x1a32f8");
#endif

    switch (ctx->pc) {
        case 0x1a3318u: goto label_1a3318;
        default: break;
    }

    ctx->pc = 0x1a32f8u;

    // 0x1a32f8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a32fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3300: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3300u;
    {
        const bool branch_taken_0x1a3300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3300u;
        // 0x1a3304: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3300) {
            ctx->pc = 0x1A3320u;
            return;
        }
    }
    ctx->pc = 0x1A3308u;
    // 0x1a3308: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x1a3308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1a330c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1a330cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a3310: 0xc0682c0  jal         func_1A0B00
    ctx->pc = 0x1A3310u;
    SET_GPR_U32(ctx, 31, 0x1A3318u);
    ctx->pc = 0x1A3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3310u;
    // 0x1a3314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B00u, 0x1A3310u, 0x1A3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3318u;
label_1a3318:
    // 0x1a3318: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3318u;
    {
        const bool branch_taken_0x1a3318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3318u;
        // 0x1a331c: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3318) {
            ctx->pc = 0x1A3334u;
            return;
        }
    }
    ctx->pc = 0x1A3320u;
}
