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

// Function: entry_001e3314
// Address: 0x1e3314 - 0x1e335c
void entry_001e3314_0x1e3314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3314_0x1e3314");
#endif

    switch (ctx->pc) {
        case 0x1e3354u: goto label_1e3354;
        default: break;
    }

    ctx->pc = 0x1e3314u;

    // 0x1e3314: 0x0  nop
    ctx->pc = 0x1e3314u;
    // NOP
    // 0x1e3318: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1e3318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e331c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e3320: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E3320u;
    {
        const bool branch_taken_0x1e3320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3320u;
        // 0x1e3324: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3320) {
            ctx->pc = 0x1E335Cu;
            return;
        }
    }
    ctx->pc = 0x1E3328u;
    // 0x1e3328: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e3328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e332c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1e332cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e3330: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
    // 0x1e3334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3338: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x1e333c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1e3340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e3340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e3344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3348: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e334c: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x1E334Cu;
    SET_GPR_U32(ctx, 31, 0x1E3354u);
    ctx->pc = 0x1E3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E334Cu;
    // 0x1e3350: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x1E334Cu, 0x1E3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3354u;
label_1e3354:
    // 0x1e3354: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E3354u;
    {
        const bool branch_taken_0x1e3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3354) {
            ctx->pc = 0x1E338Cu;
            return;
        }
    }
    ctx->pc = 0x1E335Cu;
}
