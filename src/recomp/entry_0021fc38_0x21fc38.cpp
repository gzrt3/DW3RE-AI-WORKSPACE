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

// Function: entry_0021fc38
// Address: 0x21fc38 - 0x21fc60
void entry_0021fc38_0x21fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fc38_0x21fc38");
#endif

    switch (ctx->pc) {
        case 0x21fc40u: goto label_21fc40;
        case 0x21fc54u: goto label_21fc54;
        default: break;
    }

    ctx->pc = 0x21fc38u;

    // 0x21fc38: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FC38u;
    SET_GPR_U32(ctx, 31, 0x21FC40u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FC38u, 0x21FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC40u;
label_21fc40:
    // 0x21fc40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FC40u;
    {
        const bool branch_taken_0x21fc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC40u;
        // 0x21fc44: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc40) {
            ctx->pc = 0x21FC60u;
            return;
        }
    }
    ctx->pc = 0x21FC48u;
    // 0x21fc48: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fc4c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FC4Cu;
    SET_GPR_U32(ctx, 31, 0x21FC54u);
    ctx->pc = 0x21FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC4Cu;
    // 0x21fc50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FC4Cu, 0x21FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC54u;
label_21fc54:
    // 0x21fc54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FC54u;
    {
        const bool branch_taken_0x21fc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC54u;
        // 0x21fc58: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc54) {
            ctx->pc = 0x21FC70u;
            return;
        }
    }
    ctx->pc = 0x21FC5Cu;
    // 0x21fc5c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21fc60u;
}
