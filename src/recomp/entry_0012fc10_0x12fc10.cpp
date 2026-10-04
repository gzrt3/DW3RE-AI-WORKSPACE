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

// Function: entry_0012fc10
// Address: 0x12fc10 - 0x12fc30
void entry_0012fc10_0x12fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc10_0x12fc10");
#endif

    switch (ctx->pc) {
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc28u: goto label_12fc28;
        default: break;
    }

    ctx->pc = 0x12fc10u;

    // 0x12fc10: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC10u;
    SET_GPR_U32(ctx, 31, 0x12FC18u);
    ctx->pc = 0x12FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC10u;
    // 0x12fc14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC10u, 0x12FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC18u;
label_12fc18:
    // 0x12fc18: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x12FC18u;
    {
        const bool branch_taken_0x12fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC18u;
        // 0x12fc1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc18) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FC20u;
    // 0x12fc20: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FC20u;
    SET_GPR_U32(ctx, 31, 0x12FC28u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FC20u, 0x12FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC28u;
label_12fc28:
    // 0x12fc28: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x12FC28u;
    {
        const bool branch_taken_0x12fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc28) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FC30u;
}
