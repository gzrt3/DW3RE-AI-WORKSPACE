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

// Function: entry_0019e4f8
// Address: 0x19e4f8 - 0x19e50c
void entry_0019e4f8_0x19e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4f8_0x19e4f8");
#endif

    switch (ctx->pc) {
        case 0x19e500u: goto label_19e500;
        default: break;
    }

    ctx->pc = 0x19e4f8u;

    // 0x19e4f8: 0xc068d1e  jal         func_1A3478
    ctx->pc = 0x19E4F8u;
    SET_GPR_U32(ctx, 31, 0x19E500u);
    ctx->pc = 0x19E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4F8u;
    // 0x19e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3478u, 0x19E4F8u, 0x19E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E500u;
label_19e500:
    // 0x19e500: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x19e500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
    // 0x19e504: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19E504u;
    {
        const bool branch_taken_0x19e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E504u;
        // 0x19e508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e504) {
            ctx->pc = 0x19E51Cu;
            return;
        }
    }
    ctx->pc = 0x19E50Cu;
}
