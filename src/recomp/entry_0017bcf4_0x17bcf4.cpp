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

// Function: entry_0017bcf4
// Address: 0x17bcf4 - 0x17bd04
void entry_0017bcf4_0x17bcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcf4_0x17bcf4");
#endif

    ctx->pc = 0x17bcf4u;

    // 0x17bcf4: 0x0  nop
    ctx->pc = 0x17bcf4u;
    // NOP
    // 0x17bcf8: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x17bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x17bcfc: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17BCFCu;
    {
        const bool branch_taken_0x17bcfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bcfc) {
            ctx->pc = 0x17BCDCu;
            return;
        }
    }
    ctx->pc = 0x17BD04u;
}
