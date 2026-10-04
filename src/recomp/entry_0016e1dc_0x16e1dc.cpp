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

// Function: entry_0016e1dc
// Address: 0x16e1dc - 0x16e1ec
void entry_0016e1dc_0x16e1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1dc_0x16e1dc");
#endif

    ctx->pc = 0x16e1dcu;

    // 0x16e1dc: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16e1e0: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16e1e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E1E4u;
    {
        const bool branch_taken_0x16e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e1e4) {
            ctx->pc = 0x16E210u;
            return;
        }
    }
    ctx->pc = 0x16E1ECu;
}
