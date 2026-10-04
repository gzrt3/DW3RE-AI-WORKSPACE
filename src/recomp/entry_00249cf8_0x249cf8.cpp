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

// Function: entry_00249cf8
// Address: 0x249cf8 - 0x249d0c
void entry_00249cf8_0x249cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249cf8_0x249cf8");
#endif

    ctx->pc = 0x249cf8u;

    // 0x249cf8: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249cfc: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x249cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x249d00: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x249d04: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x249D04u;
    {
        const bool branch_taken_0x249d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D04u;
        // 0x249d08: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d04) {
            ctx->pc = 0x249DC0u;
            return;
        }
    }
    ctx->pc = 0x249D0Cu;
}
