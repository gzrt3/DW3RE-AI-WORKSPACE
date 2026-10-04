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

// Function: entry_0021fc18
// Address: 0x21fc18 - 0x21fc38
void entry_0021fc18_0x21fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fc18_0x21fc18");
#endif

    switch (ctx->pc) {
        case 0x21fc20u: goto label_21fc20;
        case 0x21fc34u: goto label_21fc34;
        default: break;
    }

    ctx->pc = 0x21fc18u;

    // 0x21fc18: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FC18u;
    SET_GPR_U32(ctx, 31, 0x21FC20u);
    ctx->pc = 0x21FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC18u;
    // 0x21fc1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FC18u, 0x21FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC20u;
label_21fc20:
    // 0x21fc20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FC20u;
    {
        const bool branch_taken_0x21fc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC20u;
        // 0x21fc24: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc20) {
            ctx->pc = 0x21FC38u;
            return;
        }
    }
    ctx->pc = 0x21FC28u;
    // 0x21fc28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fc2c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC2Cu;
    SET_GPR_U32(ctx, 31, 0x21FC34u);
    ctx->pc = 0x21FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC2Cu;
    // 0x21fc30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC2Cu, 0x21FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC34u;
label_21fc34:
    // 0x21fc34: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x21fc38u;
}
