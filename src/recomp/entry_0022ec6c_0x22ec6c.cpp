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

// Function: entry_0022ec6c
// Address: 0x22ec6c - 0x22ec7c
void entry_0022ec6c_0x22ec6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec6c_0x22ec6c");
#endif

    ctx->pc = 0x22ec6cu;

    // 0x22ec6c: 0x0  nop
    ctx->pc = 0x22ec6cu;
    // NOP
    // 0x22ec70: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x22ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x22ec74: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22EC74u;
    {
        const bool branch_taken_0x22ec74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec74) {
            ctx->pc = 0x22EC54u;
            return;
        }
    }
    ctx->pc = 0x22EC7Cu;
}
