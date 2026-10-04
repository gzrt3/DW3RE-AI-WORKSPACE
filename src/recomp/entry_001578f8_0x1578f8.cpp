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

// Function: entry_001578f8
// Address: 0x1578f8 - 0x157910
void entry_001578f8_0x1578f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001578f8_0x1578f8");
#endif

    ctx->pc = 0x1578f8u;

    // 0x1578f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1578F8u;
    {
        const bool branch_taken_0x1578f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F8u;
        // 0x1578fc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f8) {
            ctx->pc = 0x157910u;
            return;
        }
    }
    ctx->pc = 0x157900u;
    // 0x157900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157900u;
    {
        const bool branch_taken_0x157900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157900u;
        // 0x157904: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157900) {
            ctx->pc = 0x157914u;
            return;
        }
    }
    ctx->pc = 0x157908u;
    // 0x157908: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x157908u;
    {
        const bool branch_taken_0x157908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157908u;
        // 0x15790c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157908) {
            ctx->pc = 0x157950u;
            return;
        }
    }
    ctx->pc = 0x157910u;
}
