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

// Function: entry_00249ed0
// Address: 0x249ed0 - 0x249ee4
void entry_00249ed0_0x249ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249ed0_0x249ed0");
#endif

    ctx->pc = 0x249ed0u;

    // 0x249ed0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249ed4: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x249ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x249ed8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x249edc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x249EDCu;
    {
        const bool branch_taken_0x249edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EDCu;
        // 0x249ee0: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249edc) {
            ctx->pc = 0x249FE8u;
            return;
        }
    }
    ctx->pc = 0x249EE4u;
}
