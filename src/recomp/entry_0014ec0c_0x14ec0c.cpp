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

// Function: entry_0014ec0c
// Address: 0x14ec0c - 0x14ec18
void entry_0014ec0c_0x14ec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ec0c_0x14ec0c");
#endif

    ctx->pc = 0x14ec0cu;

    // 0x14ec0c: 0x0  nop
    ctx->pc = 0x14ec0cu;
    // NOP
    // 0x14ec10: 0x461fff5  bgez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14EC10u;
    {
        const bool branch_taken_0x14ec10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14ec10) {
            ctx->pc = 0x14EBE8u;
            return;
        }
    }
    ctx->pc = 0x14EC18u;
}
