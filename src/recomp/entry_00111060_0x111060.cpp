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

// Function: entry_00111060
// Address: 0x111060 - 0x111070
void entry_00111060_0x111060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111060_0x111060");
#endif

    ctx->pc = 0x111060u;

    // 0x111060: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x111064: 0x1e9c02a  slt         $t8, $t7, $t1
    ctx->pc = 0x111064u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x111068: 0x1700ffeb  bnez        $t8, . + 4 + (-0x15 << 2)
    ctx->pc = 0x111068u;
    {
        const bool branch_taken_0x111068 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x111068) {
            ctx->pc = 0x111018u;
            return;
        }
    }
    ctx->pc = 0x111070u;
}
