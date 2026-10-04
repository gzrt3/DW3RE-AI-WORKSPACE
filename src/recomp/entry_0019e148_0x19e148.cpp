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

// Function: entry_0019e148
// Address: 0x19e148 - 0x19e164
void entry_0019e148_0x19e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e148_0x19e148");
#endif

    ctx->pc = 0x19e148u;

    // 0x19e148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19e14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E14Cu;
    {
        const bool branch_taken_0x19e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E14Cu;
        // 0x19e150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e14c) {
            ctx->pc = 0x19E168u;
            return;
        }
    }
    ctx->pc = 0x19E154u;
    // 0x19e154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19e158: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19e15c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19E15Cu;
    {
        const bool branch_taken_0x19e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e15c) {
            ctx->pc = 0x19E120u;
            return;
        }
    }
    ctx->pc = 0x19E164u;
}
