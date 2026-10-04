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

// Function: entry_001cbdb0
// Address: 0x1cbdb0 - 0x1cbdc0
void entry_001cbdb0_0x1cbdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbdb0_0x1cbdb0");
#endif

    ctx->pc = 0x1cbdb0u;

    // 0x1cbdb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cbdb4: 0x2942000c  slti        $v0, $t2, 0xC
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cbdb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CBDB8u;
    {
        const bool branch_taken_0x1cbdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdb8) {
            ctx->pc = 0x1CBD68u;
            return;
        }
    }
    ctx->pc = 0x1CBDC0u;
}
