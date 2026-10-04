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

// Function: entry_001e32f4
// Address: 0x1e32f4 - 0x1e3308
void entry_001e32f4_0x1e32f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e32f4_0x1e32f4");
#endif

    ctx->pc = 0x1e32f4u;

    // 0x1e32f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e32f8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32F8u;
    {
        const bool branch_taken_0x1e32f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e32f8) {
            ctx->pc = 0x1E3314u;
            return;
        }
    }
    ctx->pc = 0x1E3300u;
    // 0x1e3300: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1e3300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e3304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e3304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1e3308u;
}
