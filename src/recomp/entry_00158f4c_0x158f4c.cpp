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

// Function: entry_00158f4c
// Address: 0x158f4c - 0x158f5c
void entry_00158f4c_0x158f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158f4c_0x158f4c");
#endif

    ctx->pc = 0x158f4cu;

    // 0x158f4c: 0x0  nop
    ctx->pc = 0x158f4cu;
    // NOP
    // 0x158f50: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F50u;
    {
        const bool branch_taken_0x158f50 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x158f50) {
            ctx->pc = 0x158F5Cu;
            return;
        }
    }
    ctx->pc = 0x158F58u;
    // 0x158f58: 0xa5e90230  sh          $t1, 0x230($t7)
    ctx->pc = 0x158f58u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 9));
    ctx->pc = 0x158f5cu;
}
