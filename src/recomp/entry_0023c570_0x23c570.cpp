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

// Function: entry_0023c570
// Address: 0x23c570 - 0x23c594
void entry_0023c570_0x23c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c570_0x23c570");
#endif

    switch (ctx->pc) {
        case 0x23c584u: goto label_23c584;
        default: break;
    }

    ctx->pc = 0x23c570u;

    // 0x23c570: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x23c574: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C574u;
    {
        const bool branch_taken_0x23c574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c574) {
            ctx->pc = 0x23C594u;
            return;
        }
    }
    ctx->pc = 0x23C57Cu;
    // 0x23c57c: 0xc08f114  jal         func_23C450
    ctx->pc = 0x23C57Cu;
    SET_GPR_U32(ctx, 31, 0x23C584u);
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C57Cu, 0x23C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C584u;
label_23c584:
    // 0x23c584: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23C584u;
    {
        const bool branch_taken_0x23c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c584) {
            ctx->pc = 0x23C604u;
            return;
        }
    }
    ctx->pc = 0x23C58Cu;
    // 0x23c58c: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x23c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x23c590: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23c590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x23c594u;
}
