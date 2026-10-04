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

// Function: entry_00230e70
// Address: 0x230e70 - 0x230e98
void entry_00230e70_0x230e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230e70_0x230e70");
#endif

    switch (ctx->pc) {
        case 0x230e78u: goto label_230e78;
        default: break;
    }

    ctx->pc = 0x230e70u;

    // 0x230e70: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x230E70u;
    SET_GPR_U32(ctx, 31, 0x230E78u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x230E70u, 0x230E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E78u;
label_230e78:
    // 0x230e78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e7c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x230E7Cu;
    {
        const bool branch_taken_0x230e7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e7c) {
            ctx->pc = 0x230E98u;
            return;
        }
    }
    ctx->pc = 0x230E84u;
    // 0x230e84: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230e88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230e8c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x230e90: 0xc08cd30  jal         func_2334C0
    ctx->pc = 0x230E90u;
    SET_GPR_U32(ctx, 31, 0x230E98u);
    ctx->pc = 0x230E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E90u;
    // 0x230e94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334C0u, 0x230E90u, 0x230E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E98u;
}
