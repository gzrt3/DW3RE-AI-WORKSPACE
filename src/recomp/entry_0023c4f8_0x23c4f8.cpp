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

// Function: entry_0023c4f8
// Address: 0x23c4f8 - 0x23c51c
void entry_0023c4f8_0x23c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c4f8_0x23c4f8");
#endif

    switch (ctx->pc) {
        case 0x23c50cu: goto label_23c50c;
        default: break;
    }

    ctx->pc = 0x23c4f8u;

    // 0x23c4f8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x23c4fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C51Cu;
            return;
        }
    }
    ctx->pc = 0x23C504u;
    // 0x23c504: 0xc08f114  jal         func_23C450
    ctx->pc = 0x23C504u;
    SET_GPR_U32(ctx, 31, 0x23C50Cu);
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C504u, 0x23C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C50Cu;
label_23c50c:
    // 0x23c50c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C50Cu;
    {
        const bool branch_taken_0x23c50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C50Cu;
        // 0x23c510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c50c) {
            ctx->pc = 0x23C528u;
            return;
        }
    }
    ctx->pc = 0x23C514u;
    // 0x23c514: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x23c518: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x23c51cu;
}
