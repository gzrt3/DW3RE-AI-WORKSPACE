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

// Function: entry_001c4f7c
// Address: 0x1c4f7c - 0x1c4f90
void entry_001c4f7c_0x1c4f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f7c_0x1c4f7c");
#endif

    ctx->pc = 0x1c4f7cu;

    // 0x1c4f7c: 0x0  nop
    ctx->pc = 0x1c4f7cu;
    // NOP
    // 0x1c4f80: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F80u;
    {
        const bool branch_taken_0x1c4f80 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c4f80) {
            ctx->pc = 0x1C4F90u;
            return;
        }
    }
    ctx->pc = 0x1C4F88u;
    // 0x1c4f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4f8c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1c4f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c4f90u;
}
