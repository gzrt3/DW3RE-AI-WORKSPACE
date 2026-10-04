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

// Function: entry_0021ff6c
// Address: 0x21ff6c - 0x21ff8c
void entry_0021ff6c_0x21ff6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff6c_0x21ff6c");
#endif

    switch (ctx->pc) {
        case 0x21ff74u: goto label_21ff74;
        case 0x21ff88u: goto label_21ff88;
        default: break;
    }

    ctx->pc = 0x21ff6cu;

    // 0x21ff6c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FF6Cu;
    SET_GPR_U32(ctx, 31, 0x21FF74u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FF6Cu, 0x21FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF74u;
label_21ff74:
    // 0x21ff74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF74u;
    {
        const bool branch_taken_0x21ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF74u;
        // 0x21ff78: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff74) {
            ctx->pc = 0x21FF8Cu;
            return;
        }
    }
    ctx->pc = 0x21FF7Cu;
    // 0x21ff7c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x21ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x21ff80: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF80u;
    SET_GPR_U32(ctx, 31, 0x21FF88u);
    ctx->pc = 0x21FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF80u;
    // 0x21ff84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF80u, 0x21FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF88u;
label_21ff88:
    // 0x21ff88: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x21ff8cu;
}
