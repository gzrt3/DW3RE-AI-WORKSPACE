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

// Function: entry_00235970
// Address: 0x235970 - 0x235980
void entry_00235970_0x235970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235970_0x235970");
#endif

    switch (ctx->pc) {
        case 0x235978u: goto label_235978;
        default: break;
    }

    ctx->pc = 0x235970u;

    // 0x235970: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x235970u;
    SET_GPR_U32(ctx, 31, 0x235978u);
    ctx->pc = 0x235974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235970u;
    // 0x235974: 0x2624b168  addiu       $a0, $s1, -0x4E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x235970u, 0x235978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235978u;
label_235978:
    // 0x235978: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x235978u;
    {
        const bool branch_taken_0x235978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235978u;
        // 0x23597c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235978) {
            ctx->pc = 0x235968u;
            return;
        }
    }
    ctx->pc = 0x235980u;
}
