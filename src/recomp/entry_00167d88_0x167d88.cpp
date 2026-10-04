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

// Function: entry_00167d88
// Address: 0x167d88 - 0x167d94
void entry_00167d88_0x167d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167d88_0x167d88");
#endif

    ctx->pc = 0x167d88u;

    // 0x167d88: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x167d8c: 0x1600ff8b  bnez        $s0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x167D8Cu;
    {
        const bool branch_taken_0x167d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d8c) {
            ctx->pc = 0x167BBCu;
            return;
        }
    }
    ctx->pc = 0x167D94u;
}
