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

// Function: entry_001ad660
// Address: 0x1ad660 - 0x1ad680
void entry_001ad660_0x1ad660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad660_0x1ad660");
#endif

    switch (ctx->pc) {
        case 0x1ad674u: goto label_1ad674;
        default: break;
    }

    ctx->pc = 0x1ad660u;

    // 0x1ad660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD660u;
    {
        const bool branch_taken_0x1ad660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad660) {
            ctx->pc = 0x1AD680u;
            return;
        }
    }
    ctx->pc = 0x1AD668u;
    // 0x1ad668: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1ad66c: 0xc06b564  jal         func_1AD590
    ctx->pc = 0x1AD66Cu;
    SET_GPR_U32(ctx, 31, 0x1AD674u);
    ctx->pc = 0x1AD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD66Cu;
    // 0x1ad670: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD590u, 0x1AD66Cu, 0x1AD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD674u;
label_1ad674:
    // 0x1ad674: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ad674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD678u;
    {
        const bool branch_taken_0x1ad678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD678u;
        // 0x1ad67c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad678) {
            ctx->pc = 0x1AD698u;
            return;
        }
    }
    ctx->pc = 0x1AD680u;
}
