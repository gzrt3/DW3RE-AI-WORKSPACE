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

// Function: entry_00167aa4
// Address: 0x167aa4 - 0x167ab4
void entry_00167aa4_0x167aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167aa4_0x167aa4");
#endif

    ctx->pc = 0x167aa4u;

    // 0x167aa4: 0x0  nop
    ctx->pc = 0x167aa4u;
    // NOP
    // 0x167aa8: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x167aac: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x167AACu;
    {
        const bool branch_taken_0x167aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167aac) {
            ctx->pc = 0x167A2Cu;
            return;
        }
    }
    ctx->pc = 0x167AB4u;
}
