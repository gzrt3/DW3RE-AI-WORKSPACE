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

// Function: entry_001313cc
// Address: 0x1313cc - 0x1313f4
void entry_001313cc_0x1313cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001313cc_0x1313cc");
#endif

    switch (ctx->pc) {
        case 0x1313d8u: goto label_1313d8;
        default: break;
    }

    ctx->pc = 0x1313ccu;

    // 0x1313cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1313ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313d0: 0xc08f2da  jal         func_23CB68
    ctx->pc = 0x1313D0u;
    SET_GPR_U32(ctx, 31, 0x1313D8u);
    ctx->pc = 0x1313D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313D0u;
    // 0x1313d4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CB68u, 0x1313D0u, 0x1313D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313D8u;
label_1313d8:
    // 0x1313d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1313d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313dc: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1313DCu;
    {
        const bool branch_taken_0x1313dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313DCu;
        // 0x1313e0: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313dc) {
            ctx->pc = 0x13142Cu;
            return;
        }
    }
    ctx->pc = 0x1313E4u;
    // 0x1313e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1313E4u;
    {
        const bool branch_taken_0x1313e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313e4) {
            ctx->pc = 0x1313F4u;
            return;
        }
    }
    ctx->pc = 0x1313ECu;
    // 0x1313ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1313ECu;
    {
        const bool branch_taken_0x1313ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313ECu;
        // 0x1313f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313ec) {
            ctx->pc = 0x1313F8u;
            return;
        }
    }
    ctx->pc = 0x1313F4u;
}
