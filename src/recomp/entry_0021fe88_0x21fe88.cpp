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

// Function: entry_0021fe88
// Address: 0x21fe88 - 0x21fea8
void entry_0021fe88_0x21fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe88_0x21fe88");
#endif

    switch (ctx->pc) {
        case 0x21fe90u: goto label_21fe90;
        case 0x21fea4u: goto label_21fea4;
        default: break;
    }

    ctx->pc = 0x21fe88u;

    // 0x21fe88: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FE88u;
    SET_GPR_U32(ctx, 31, 0x21FE90u);
    ctx->pc = 0x21FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE88u;
    // 0x21fe8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FE88u, 0x21FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE90u;
label_21fe90:
    // 0x21fe90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE90u;
    {
        const bool branch_taken_0x21fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE90u;
        // 0x21fe94: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe90) {
            ctx->pc = 0x21FEA8u;
            return;
        }
    }
    ctx->pc = 0x21FE98u;
    // 0x21fe98: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21fe9c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE9Cu;
    SET_GPR_U32(ctx, 31, 0x21FEA4u);
    ctx->pc = 0x21FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE9Cu;
    // 0x21fea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE9Cu, 0x21FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEA4u;
label_21fea4:
    // 0x21fea4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x21fea8u;
}
