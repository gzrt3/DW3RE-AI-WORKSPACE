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

// Function: entry_0016c838
// Address: 0x16c838 - 0x16c844
void entry_0016c838_0x16c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c838_0x16c838");
#endif

    ctx->pc = 0x16c838u;

    // 0x16c838: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c83c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C83Cu;
    {
        const bool branch_taken_0x16c83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c83c) {
            ctx->pc = 0x16C868u;
            return;
        }
    }
    ctx->pc = 0x16C844u;
}
