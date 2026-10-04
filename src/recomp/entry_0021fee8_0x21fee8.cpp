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

// Function: entry_0021fee8
// Address: 0x21fee8 - 0x21ff10
void entry_0021fee8_0x21fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fee8_0x21fee8");
#endif

    switch (ctx->pc) {
        case 0x21fef0u: goto label_21fef0;
        case 0x21ff04u: goto label_21ff04;
        default: break;
    }

    ctx->pc = 0x21fee8u;

    // 0x21fee8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FEE8u;
    SET_GPR_U32(ctx, 31, 0x21FEF0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FEE8u, 0x21FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEF0u;
label_21fef0:
    // 0x21fef0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEF0u;
    {
        const bool branch_taken_0x21fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF0u;
        // 0x21fef4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fef0) {
            ctx->pc = 0x21FF10u;
            return;
        }
    }
    ctx->pc = 0x21FEF8u;
    // 0x21fef8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21fefc: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FEFCu;
    SET_GPR_U32(ctx, 31, 0x21FF04u);
    ctx->pc = 0x21FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEFCu;
    // 0x21ff00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FEFCu, 0x21FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF04u;
label_21ff04:
    // 0x21ff04: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x21FF04u;
    {
        const bool branch_taken_0x21ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff04) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FF0Cu;
    // 0x21ff0c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x21ff10u;
}
