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

// Function: entry_001e0114
// Address: 0x1e0114 - 0x1e0140
void entry_001e0114_0x1e0114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0114_0x1e0114");
#endif

    ctx->pc = 0x1e0114u;

    // 0x1e0114: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0114u;
    {
        const bool branch_taken_0x1e0114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0114) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E011Cu;
    // 0x1e011c: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x1e0120: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1e0124: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1e0124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e0128: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1e0128u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1e012c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E012Cu;
    {
        const bool branch_taken_0x1e012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E012Cu;
        // 0x1e0130: 0xaf838cfc  sw          $v1, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e012c) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E0134u;
    // 0x1e0134: 0xaf808cf8  sw          $zero, -0x7308($gp)
    ctx->pc = 0x1e0134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 0));
label_1e0138:
    // 0x1e0138: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0140u;
}
