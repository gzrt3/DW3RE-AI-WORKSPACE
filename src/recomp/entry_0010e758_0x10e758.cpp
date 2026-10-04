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

// Function: entry_0010e758
// Address: 0x10e758 - 0x10e770
void entry_0010e758_0x10e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e758_0x10e758");
#endif

    ctx->pc = 0x10e758u;

    // 0x10e758: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E758u;
    {
        const bool branch_taken_0x10e758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e758) {
            ctx->pc = 0x10E770u;
            return;
        }
    }
    ctx->pc = 0x10E760u;
    // 0x10e760: 0x90830233  lbu         $v1, 0x233($a0)
    ctx->pc = 0x10e760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 563)));
    // 0x10e764: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E764u;
    {
        const bool branch_taken_0x10e764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e764) {
            ctx->pc = 0x10E770u;
            return;
        }
    }
    ctx->pc = 0x10E76Cu;
    // 0x10e76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e770u;
}
