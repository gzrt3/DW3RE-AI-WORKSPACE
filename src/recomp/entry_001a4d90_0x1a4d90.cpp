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

// Function: entry_001a4d90
// Address: 0x1a4d90 - 0x1a4dac
void entry_001a4d90_0x1a4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d90_0x1a4d90");
#endif

    ctx->pc = 0x1a4d90u;

label_1a4d90:
    // 0x1a4d90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4d94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a4d98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4D98u;
    {
        const bool branch_taken_0x1a4d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d98) {
            ctx->pc = 0x1A4DACu;
            return;
        }
    }
    ctx->pc = 0x1A4DA0u;
    // 0x1a4da0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4da4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4DA4u;
    {
        const bool branch_taken_0x1a4da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4da4) {
            ctx->pc = 0x1A4D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4d90;
        }
    }
    ctx->pc = 0x1A4DACu;
}
