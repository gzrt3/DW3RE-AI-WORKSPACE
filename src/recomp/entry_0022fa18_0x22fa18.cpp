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

// Function: entry_0022fa18
// Address: 0x22fa18 - 0x22fa28
void entry_0022fa18_0x22fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fa18_0x22fa18");
#endif

    ctx->pc = 0x22fa18u;

    // 0x22fa18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22fa1c: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22fa1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x22fa20: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22FA20u;
    {
        const bool branch_taken_0x22fa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa20) {
            ctx->pc = 0x22FA00u;
            return;
        }
    }
    ctx->pc = 0x22FA28u;
}
