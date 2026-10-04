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

// Function: entry_00244578
// Address: 0x244578 - 0x244594
void entry_00244578_0x244578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244578_0x244578");
#endif

    ctx->pc = 0x244578u;

    // 0x244578: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x244578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x24457c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24457Cu;
    {
        const bool branch_taken_0x24457c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24457c) {
            ctx->pc = 0x244594u;
            return;
        }
    }
    ctx->pc = 0x244584u;
    // 0x244584: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x244584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x244588: 0x28e1000c  slti        $at, $a3, 0xC
    ctx->pc = 0x244588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24458c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x24458Cu;
    {
        const bool branch_taken_0x24458c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24458c) {
            ctx->pc = 0x2445A8u;
            return;
        }
    }
    ctx->pc = 0x244594u;
}
