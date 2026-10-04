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

// Function: entry_00248dd8
// Address: 0x248dd8 - 0x248de8
void entry_00248dd8_0x248dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248dd8_0x248dd8");
#endif

    ctx->pc = 0x248dd8u;

    // 0x248dd8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248DD8u;
    {
        const bool branch_taken_0x248dd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248dd8) {
            ctx->pc = 0x248DE8u;
            return;
        }
    }
    ctx->pc = 0x248DE0u;
    // 0x248de0: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248de0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x248de4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    ctx->pc = 0x248de8u;
}
