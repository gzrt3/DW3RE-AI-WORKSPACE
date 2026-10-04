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

// Function: entry_00134dd4
// Address: 0x134dd4 - 0x134de0
void entry_00134dd4_0x134dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134dd4_0x134dd4");
#endif

    ctx->pc = 0x134dd4u;

    // 0x134dd4: 0x0  nop
    ctx->pc = 0x134dd4u;
    // NOP
    // 0x134dd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x134DD8u;
    {
        const bool branch_taken_0x134dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134dd8) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134DE0u;
}
