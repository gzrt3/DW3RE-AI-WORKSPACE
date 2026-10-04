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

// Function: entry_00164204
// Address: 0x164204 - 0x164214
void entry_00164204_0x164204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164204_0x164204");
#endif

    ctx->pc = 0x164204u;

    // 0x164204: 0x0  nop
    ctx->pc = 0x164204u;
    // NOP
    // 0x164208: 0x8f908680  lw          $s0, -0x7980($gp)
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
    // 0x16420c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16420Cu;
    {
        const bool branch_taken_0x16420c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16420c) {
            ctx->pc = 0x164264u;
            return;
        }
    }
    ctx->pc = 0x164214u;
}
