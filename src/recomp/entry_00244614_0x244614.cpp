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

// Function: entry_00244614
// Address: 0x244614 - 0x244634
void entry_00244614_0x244614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244614_0x244614");
#endif

    ctx->pc = 0x244614u;

    // 0x244614: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x244618: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x244618u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x24461c: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x24461cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x244620: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x244620u;
    {
        const bool branch_taken_0x244620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244620) {
            ctx->pc = 0x244634u;
            return;
        }
    }
    ctx->pc = 0x244628u;
    // 0x244628: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x244628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24462c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24462Cu;
    {
        const bool branch_taken_0x24462c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24462c) {
            ctx->pc = 0x24467Cu;
            return;
        }
    }
    ctx->pc = 0x244634u;
}
