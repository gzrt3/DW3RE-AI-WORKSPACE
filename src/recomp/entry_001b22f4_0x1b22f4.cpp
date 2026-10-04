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

// Function: entry_001b22f4
// Address: 0x1b22f4 - 0x1b231c
void entry_001b22f4_0x1b22f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b22f4_0x1b22f4");
#endif

    switch (ctx->pc) {
        case 0x1b2300u: goto label_1b2300;
        default: break;
    }

    ctx->pc = 0x1b22f4u;

    // 0x1b22f4: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b22f8: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B22F8u;
    SET_GPR_U32(ctx, 31, 0x1B2300u);
    ctx->pc = 0x1B22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22F8u;
    // 0x1b22fc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B22F8u, 0x1B2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2300u;
label_1b2300:
    // 0x1b2300: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2300u;
    {
        const bool branch_taken_0x1b2300 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2300u;
        // 0x1b2304: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2300) {
            ctx->pc = 0x1B243Cu;
            return;
        }
    }
    ctx->pc = 0x1B2308u;
    // 0x1b2308: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2308u;
    {
        const bool branch_taken_0x1b2308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2308) {
            ctx->pc = 0x1B231Cu;
            return;
        }
    }
    ctx->pc = 0x1B2310u;
    // 0x1b2310: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2314: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2314u;
    {
        const bool branch_taken_0x1b2314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2314u;
        // 0x1b2318: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2314) {
            ctx->pc = 0x1B232Cu;
            return;
        }
    }
    ctx->pc = 0x1B231Cu;
}
