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

// Function: entry_001576b4
// Address: 0x1576b4 - 0x1576cc
void entry_001576b4_0x1576b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576b4_0x1576b4");
#endif

    ctx->pc = 0x1576b4u;

    // 0x1576b4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1576B4u;
    {
        const bool branch_taken_0x1576b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B4u;
        // 0x1576b8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b4) {
            ctx->pc = 0x1576CCu;
            return;
        }
    }
    ctx->pc = 0x1576BCu;
    // 0x1576bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1576BCu;
    {
        const bool branch_taken_0x1576bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576BCu;
        // 0x1576c0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576bc) {
            ctx->pc = 0x1576D0u;
            return;
        }
    }
    ctx->pc = 0x1576C4u;
    // 0x1576c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1576C4u;
    {
        const bool branch_taken_0x1576c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576C4u;
        // 0x1576c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576c4) {
            ctx->pc = 0x15770Cu;
            return;
        }
    }
    ctx->pc = 0x1576CCu;
}
