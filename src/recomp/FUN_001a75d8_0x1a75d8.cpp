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

// Function: FUN_001a75d8
// Address: 0x1a75d8 - 0x1a75e8
void FUN_001a75d8_0x1a75d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a75d8_0x1a75d8");
#endif

    ctx->pc = 0x1a75d8u;

    // 0x1a75d8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1a75dc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A75DCu;
    {
        const bool branch_taken_0x1a75dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a75dc) {
            ctx->pc = 0x1A761Cu;
            return;
        }
    }
    ctx->pc = 0x1A75E4u;
    // 0x1a75e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->pc = 0x1a75e8u;
}
