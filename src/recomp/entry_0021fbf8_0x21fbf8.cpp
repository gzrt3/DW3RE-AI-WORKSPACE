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

// Function: entry_0021fbf8
// Address: 0x21fbf8 - 0x21fc18
void entry_0021fbf8_0x21fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fbf8_0x21fbf8");
#endif

    switch (ctx->pc) {
        case 0x21fc00u: goto label_21fc00;
        case 0x21fc10u: goto label_21fc10;
        default: break;
    }

    ctx->pc = 0x21fbf8u;

    // 0x21fbf8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FBF8u;
    SET_GPR_U32(ctx, 31, 0x21FC00u);
    ctx->pc = 0x21FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBF8u;
    // 0x21fbfc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FBF8u, 0x21FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC00u;
label_21fc00:
    // 0x21fc00: 0x10400223  beqz        $v0, . + 4 + (0x223 << 2)
    ctx->pc = 0x21FC00u;
    {
        const bool branch_taken_0x21fc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC00u;
        // 0x21fc04: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc00) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FC08u;
    // 0x21fc08: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC08u;
    SET_GPR_U32(ctx, 31, 0x21FC10u);
    ctx->pc = 0x21FC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC08u;
    // 0x21fc0c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC08u, 0x21FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC10u;
label_21fc10:
    // 0x21fc10: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x21FC10u;
    {
        const bool branch_taken_0x21fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fc10) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FC18u;
}
