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

// Function: entry_00223d00
// Address: 0x223d00 - 0x223d0c
void entry_00223d00_0x223d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223d00_0x223d00");
#endif

    ctx->pc = 0x223d00u;

    // 0x223d00: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x223d04: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x223D04u;
    {
        const bool branch_taken_0x223d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d04) {
            ctx->pc = 0x223D44u;
            return;
        }
    }
    ctx->pc = 0x223D0Cu;
}
