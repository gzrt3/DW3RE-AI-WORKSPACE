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

// Function: entry_00150e84
// Address: 0x150e84 - 0x150e98
void entry_00150e84_0x150e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e84_0x150e84");
#endif

    ctx->pc = 0x150e84u;

    // 0x150e84: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x150e88: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E88u;
    {
        const bool branch_taken_0x150e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x150e88) {
            ctx->pc = 0x150E98u;
            return;
        }
    }
    ctx->pc = 0x150E90u;
    // 0x150e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150E90u;
    {
        const bool branch_taken_0x150e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E90u;
        // 0x150e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e90) {
            ctx->pc = 0x150EA8u;
            return;
        }
    }
    ctx->pc = 0x150E98u;
}
