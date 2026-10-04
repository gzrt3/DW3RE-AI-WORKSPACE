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

// Function: entry_00243818
// Address: 0x243818 - 0x243834
void entry_00243818_0x243818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243818_0x243818");
#endif

    ctx->pc = 0x243818u;

    // 0x243818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x243818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24381c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24381Cu;
    {
        const bool branch_taken_0x24381c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24381c) {
            ctx->pc = 0x243834u;
            return;
        }
    }
    ctx->pc = 0x243824u;
    // 0x243824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x243828: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x243828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24382c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x24382Cu;
    {
        const bool branch_taken_0x24382c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24382c) {
            ctx->pc = 0x243848u;
            return;
        }
    }
    ctx->pc = 0x243834u;
}
