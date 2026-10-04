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

// Function: entry_0021ff8c
// Address: 0x21ff8c - 0x21ffb4
void entry_0021ff8c_0x21ff8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff8c_0x21ff8c");
#endif

    switch (ctx->pc) {
        case 0x21ff94u: goto label_21ff94;
        case 0x21ffa8u: goto label_21ffa8;
        default: break;
    }

    ctx->pc = 0x21ff8cu;

    // 0x21ff8c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FF8Cu;
    SET_GPR_U32(ctx, 31, 0x21FF94u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FF8Cu, 0x21FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF94u;
label_21ff94:
    // 0x21ff94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FF94u;
    {
        const bool branch_taken_0x21ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF94u;
        // 0x21ff98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff94) {
            ctx->pc = 0x21FFB4u;
            return;
        }
    }
    ctx->pc = 0x21FF9Cu;
    // 0x21ff9c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21ffa0: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FFA0u;
    SET_GPR_U32(ctx, 31, 0x21FFA8u);
    ctx->pc = 0x21FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFA0u;
    // 0x21ffa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FFA0u, 0x21FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFA8u;
label_21ffa8:
    // 0x21ffa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FFA8u;
    {
        const bool branch_taken_0x21ffa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA8u;
        // 0x21ffac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa8) {
            ctx->pc = 0x21FFC4u;
            return;
        }
    }
    ctx->pc = 0x21FFB0u;
    // 0x21ffb0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21ffb4u;
}
