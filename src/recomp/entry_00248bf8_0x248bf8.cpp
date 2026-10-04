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

// Function: entry_00248bf8
// Address: 0x248bf8 - 0x248c08
void entry_00248bf8_0x248bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248bf8_0x248bf8");
#endif

    ctx->pc = 0x248bf8u;

    // 0x248bf8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BF8u;
    {
        const bool branch_taken_0x248bf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248bf8) {
            ctx->pc = 0x248C08u;
            return;
        }
    }
    ctx->pc = 0x248C00u;
    // 0x248c00: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x248c04: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    ctx->pc = 0x248c08u;
}
