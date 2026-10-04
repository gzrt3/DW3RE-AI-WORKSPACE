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

// Function: entry_0022fa28
// Address: 0x22fa28 - 0x22fa34
void entry_0022fa28_0x22fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fa28_0x22fa28");
#endif

    ctx->pc = 0x22fa28u;

    // 0x22fa28: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22fa28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x22fa2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FA2Cu;
    {
        const bool branch_taken_0x22fa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa2c) {
            ctx->pc = 0x22FA48u;
            return;
        }
    }
    ctx->pc = 0x22FA34u;
}
