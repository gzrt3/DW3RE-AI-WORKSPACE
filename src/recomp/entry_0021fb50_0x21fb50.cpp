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

// Function: entry_0021fb50
// Address: 0x21fb50 - 0x21fb70
void entry_0021fb50_0x21fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fb50_0x21fb50");
#endif

    switch (ctx->pc) {
        case 0x21fb58u: goto label_21fb58;
        case 0x21fb68u: goto label_21fb68;
        default: break;
    }

    ctx->pc = 0x21fb50u;

    // 0x21fb50: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FB50u;
    SET_GPR_U32(ctx, 31, 0x21FB58u);
    ctx->pc = 0x21FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB50u;
    // 0x21fb54: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FB50u, 0x21FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB58u;
label_21fb58:
    // 0x21fb58: 0x1040024d  beqz        $v0, . + 4 + (0x24D << 2)
    ctx->pc = 0x21FB58u;
    {
        const bool branch_taken_0x21fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB58u;
        // 0x21fb5c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb58) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FB60u;
    // 0x21fb60: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FB60u;
    SET_GPR_U32(ctx, 31, 0x21FB68u);
    ctx->pc = 0x21FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB60u;
    // 0x21fb64: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FB60u, 0x21FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB68u;
label_21fb68:
    // 0x21fb68: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x21FB68u;
    {
        const bool branch_taken_0x21fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb68) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FB70u;
}
