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

// Function: entry_0023195c
// Address: 0x23195c - 0x23198c
void entry_0023195c_0x23195c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023195c_0x23195c");
#endif

    switch (ctx->pc) {
        case 0x23196cu: goto label_23196c;
        default: break;
    }

    ctx->pc = 0x23195cu;

    // 0x23195c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231960: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x231964: 0xc08cd22  jal         func_233488
    ctx->pc = 0x231964u;
    SET_GPR_U32(ctx, 31, 0x23196Cu);
    ctx->pc = 0x231968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231964u;
    // 0x231968: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233488u, 0x231964u, 0x23196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23196Cu;
label_23196c:
    // 0x23196c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231970: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x231974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231974u;
    {
        const bool branch_taken_0x231974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231974u;
        // 0x231978: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231974) {
            ctx->pc = 0x231990u;
            return;
        }
    }
    ctx->pc = 0x23197Cu;
    // 0x23197c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231980: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x231980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x231984: 0xc08c7c4  jal         func_231F10
    ctx->pc = 0x231984u;
    SET_GPR_U32(ctx, 31, 0x23198Cu);
    ctx->pc = 0x231988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231984u;
    // 0x231988: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F10u, 0x231984u, 0x23198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23198Cu;
}
