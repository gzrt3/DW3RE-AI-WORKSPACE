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

// Function: entry_001b25f8
// Address: 0x1b25f8 - 0x1b2614
void entry_001b25f8_0x1b25f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b25f8_0x1b25f8");
#endif

    switch (ctx->pc) {
        case 0x1b2604u: goto label_1b2604;
        default: break;
    }

    ctx->pc = 0x1b25f8u;

    // 0x1b25f8: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b25fc: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B25FCu;
    SET_GPR_U32(ctx, 31, 0x1B2604u);
    ctx->pc = 0x1B2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25FCu;
    // 0x1b2600: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B25FCu, 0x1B2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2604u;
label_1b2604:
    // 0x1b2604: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2604u;
        // 0x1b2608: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2614u;
            return;
        }
    }
    ctx->pc = 0x1B260Cu;
    // 0x1b260c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B260Cu;
    {
        const bool branch_taken_0x1b260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B260Cu;
        // 0x1b2610: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b260c) {
            ctx->pc = 0x1B2670u;
            return;
        }
    }
    ctx->pc = 0x1B2614u;
}
