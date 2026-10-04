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

// Function: entry_00249ee4
// Address: 0x249ee4 - 0x249ef0
void entry_00249ee4_0x249ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249ee4_0x249ee4");
#endif

    ctx->pc = 0x249ee4u;

    // 0x249ee4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x249EE4u;
    {
        const bool branch_taken_0x249ee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ee4) {
            ctx->pc = 0x249EF0u;
            return;
        }
    }
    ctx->pc = 0x249EECu;
    // 0x249eec: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x249eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x249ef0u;
}
