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

// Function: entry_0022007c
// Address: 0x22007c - 0x2200a4
void entry_0022007c_0x22007c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022007c_0x22007c");
#endif

    switch (ctx->pc) {
        case 0x220084u: goto label_220084;
        case 0x220098u: goto label_220098;
        default: break;
    }

    ctx->pc = 0x22007cu;

    // 0x22007c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x22007Cu;
    SET_GPR_U32(ctx, 31, 0x220084u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x22007Cu, 0x220084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220084u;
label_220084:
    // 0x220084: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220084u;
    {
        const bool branch_taken_0x220084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220084u;
        // 0x220088: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220084) {
            ctx->pc = 0x2200A4u;
            return;
        }
    }
    ctx->pc = 0x22008Cu;
    // 0x22008c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220090: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x220090u;
    SET_GPR_U32(ctx, 31, 0x220098u);
    ctx->pc = 0x220094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220090u;
    // 0x220094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220090u, 0x220098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220098u;
label_220098:
    // 0x220098: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220098u;
    {
        const bool branch_taken_0x220098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220098u;
        // 0x22009c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220098) {
            ctx->pc = 0x2200B4u;
            return;
        }
    }
    ctx->pc = 0x2200A0u;
    // 0x2200a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2200a4u;
}
