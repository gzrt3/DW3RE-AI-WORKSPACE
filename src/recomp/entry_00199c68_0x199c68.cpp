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

// Function: entry_00199c68
// Address: 0x199c68 - 0x199c7c
void entry_00199c68_0x199c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c68_0x199c68");
#endif

    switch (ctx->pc) {
        case 0x199c74u: goto label_199c74;
        default: break;
    }

    ctx->pc = 0x199c68u;

    // 0x199c68: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199c6c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199C6Cu;
    SET_GPR_U32(ctx, 31, 0x199C74u);
    ctx->pc = 0x199C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C6Cu;
    // 0x199c70: 0x24849dc0  addiu       $a0, $a0, -0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199C6Cu, 0x199C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C74u;
label_199c74:
    // 0x199c74: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x199C74u;
    {
        const bool branch_taken_0x199c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C74u;
        // 0x199c78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c74) {
            ctx->pc = 0x199F24u;
            return;
        }
    }
    ctx->pc = 0x199C7Cu;
}
