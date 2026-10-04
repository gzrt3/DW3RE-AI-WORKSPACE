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

// Function: entry_0021fe18
// Address: 0x21fe18 - 0x21fe40
void entry_0021fe18_0x21fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe18_0x21fe18");
#endif

    switch (ctx->pc) {
        case 0x21fe20u: goto label_21fe20;
        case 0x21fe34u: goto label_21fe34;
        default: break;
    }

    ctx->pc = 0x21fe18u;

    // 0x21fe18: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FE18u;
    SET_GPR_U32(ctx, 31, 0x21FE20u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FE18u, 0x21FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE20u;
label_21fe20:
    // 0x21fe20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE20u;
    {
        const bool branch_taken_0x21fe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE20u;
        // 0x21fe24: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe20) {
            ctx->pc = 0x21FE40u;
            return;
        }
    }
    ctx->pc = 0x21FE28u;
    // 0x21fe28: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fe2c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FE2Cu;
    SET_GPR_U32(ctx, 31, 0x21FE34u);
    ctx->pc = 0x21FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE2Cu;
    // 0x21fe30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FE2Cu, 0x21FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE34u;
label_21fe34:
    // 0x21fe34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FE34u;
    {
        const bool branch_taken_0x21fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE34u;
        // 0x21fe38: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe34) {
            ctx->pc = 0x21FE50u;
            return;
        }
    }
    ctx->pc = 0x21FE3Cu;
    // 0x21fe3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21fe40u;
}
