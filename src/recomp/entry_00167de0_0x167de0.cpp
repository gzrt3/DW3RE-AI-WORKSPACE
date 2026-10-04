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

// Function: entry_00167de0
// Address: 0x167de0 - 0x167df0
void entry_00167de0_0x167de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167de0_0x167de0");
#endif

    ctx->pc = 0x167de0u;

    // 0x167de0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x167de4: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x167de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33490Du));
    // 0x167de8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x167DE8u;
    {
        const bool branch_taken_0x167de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167de8) {
            ctx->pc = 0x167E14u;
            return;
        }
    }
    ctx->pc = 0x167DF0u;
}
