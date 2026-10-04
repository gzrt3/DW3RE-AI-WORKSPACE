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

// Function: entry_00150e70
// Address: 0x150e70 - 0x150e84
void entry_00150e70_0x150e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e70_0x150e70");
#endif

    ctx->pc = 0x150e70u;

    // 0x150e70: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x150e74: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E84u;
            return;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150EA8u;
            return;
        }
    }
    ctx->pc = 0x150E84u;
}
