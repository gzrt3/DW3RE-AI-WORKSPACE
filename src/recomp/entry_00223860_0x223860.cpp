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

// Function: entry_00223860
// Address: 0x223860 - 0x22387c
void entry_00223860_0x223860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223860_0x223860");
#endif

    ctx->pc = 0x223860u;

    // 0x223860: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x223864: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x223864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x223868: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223868u;
    {
        const bool branch_taken_0x223868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223868u;
        // 0x22386c: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223868) {
            ctx->pc = 0x22384Cu;
            return;
        }
    }
    ctx->pc = 0x223870u;
    // 0x223870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223874: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x223874u;
    {
        const bool branch_taken_0x223874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223874u;
        // 0x223878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223874) {
            ctx->pc = 0x2238C0u;
            return;
        }
    }
    ctx->pc = 0x22387Cu;
}
