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

// Function: entry_00100834
// Address: 0x100834 - 0x10084c
void entry_00100834_0x100834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100834_0x100834");
#endif

    ctx->pc = 0x100834u;

    // 0x100834: 0xdc830040  ld          $v1, 0x40($a0)
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x100838: 0xdf828428  ld          $v0, -0x7BD8($gp)
    ctx->pc = 0x100838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x10083c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10083Cu;
    {
        const bool branch_taken_0x10083c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10083c) {
            ctx->pc = 0x10084Cu;
            return;
        }
    }
    ctx->pc = 0x100844u;
    // 0x100844: 0xdf828420  ld          $v0, -0x7BE0($gp)
    ctx->pc = 0x100844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935584)));
    // 0x100848: 0xfc820040  sd          $v0, 0x40($a0)
    ctx->pc = 0x100848u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x10084cu;
}
