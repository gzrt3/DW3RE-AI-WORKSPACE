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

// Function: entry_0022ae44
// Address: 0x22ae44 - 0x22ae54
void entry_0022ae44_0x22ae44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ae44_0x22ae44");
#endif

    ctx->pc = 0x22ae44u;

    // 0x22ae44: 0x0  nop
    ctx->pc = 0x22ae44u;
    // NOP
    // 0x22ae48: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x22ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x22ae4c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22AE4Cu;
    {
        const bool branch_taken_0x22ae4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ae4c) {
            ctx->pc = 0x22AE28u;
            return;
        }
    }
    ctx->pc = 0x22AE54u;
}
