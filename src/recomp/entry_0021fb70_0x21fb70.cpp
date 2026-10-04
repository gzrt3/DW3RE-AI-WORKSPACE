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

// Function: entry_0021fb70
// Address: 0x21fb70 - 0x21fb98
void entry_0021fb70_0x21fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fb70_0x21fb70");
#endif

    switch (ctx->pc) {
        case 0x21fb78u: goto label_21fb78;
        case 0x21fb8cu: goto label_21fb8c;
        default: break;
    }

    ctx->pc = 0x21fb70u;

    // 0x21fb70: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FB70u;
    SET_GPR_U32(ctx, 31, 0x21FB78u);
    ctx->pc = 0x21FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB70u;
    // 0x21fb74: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FB70u, 0x21FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB78u;
label_21fb78:
    // 0x21fb78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FB78u;
    {
        const bool branch_taken_0x21fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB78u;
        // 0x21fb7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb78) {
            ctx->pc = 0x21FB98u;
            return;
        }
    }
    ctx->pc = 0x21FB80u;
    // 0x21fb80: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fb84: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FB84u;
    SET_GPR_U32(ctx, 31, 0x21FB8Cu);
    ctx->pc = 0x21FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB84u;
    // 0x21fb88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FB84u, 0x21FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB8Cu;
label_21fb8c:
    // 0x21fb8c: 0x10400240  beqz        $v0, . + 4 + (0x240 << 2)
    ctx->pc = 0x21FB8Cu;
    {
        const bool branch_taken_0x21fb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb8c) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FB94u;
    // 0x21fb94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x21fb98u;
}
