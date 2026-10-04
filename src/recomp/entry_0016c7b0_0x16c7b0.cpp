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

// Function: entry_0016c7b0
// Address: 0x16c7b0 - 0x16c7c0
void entry_0016c7b0_0x16c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7b0_0x16c7b0");
#endif

    ctx->pc = 0x16c7b0u;

    // 0x16c7b0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c7b4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c7b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16c7b8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C7B8u;
    {
        const bool branch_taken_0x16c7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c7b8) {
            ctx->pc = 0x16C7E4u;
            return;
        }
    }
    ctx->pc = 0x16C7C0u;
}
