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

// Function: entry_001f1fe8
// Address: 0x1f1fe8 - 0x1f2000
void entry_001f1fe8_0x1f1fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1fe8_0x1f1fe8");
#endif

    ctx->pc = 0x1f1fe8u;

    // 0x1f1fe8: 0x8f838fb0  lw          $v1, -0x7050($gp)
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f1fec: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1FECu;
    {
        const bool branch_taken_0x1f1fec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1fec) {
            ctx->pc = 0x1F2000u;
            return;
        }
    }
    ctx->pc = 0x1F1FF4u;
    // 0x1f1ff4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f1ff8: 0x11230009  beq         $t1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1FF8u;
    {
        const bool branch_taken_0x1f1ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1ff8) {
            ctx->pc = 0x1F2020u;
            return;
        }
    }
    ctx->pc = 0x1F2000u;
}
