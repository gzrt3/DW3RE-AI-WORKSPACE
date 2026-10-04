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

// Function: entry_0024a300
// Address: 0x24a300 - 0x24a314
void entry_0024a300_0x24a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a300_0x24a300");
#endif

    ctx->pc = 0x24a300u;

    // 0x24a300: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a304: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x24a304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x24a308: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x24a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x24a30c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x24A30Cu;
    {
        const bool branch_taken_0x24a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a30c) {
            ctx->pc = 0x24A418u;
            return;
        }
    }
    ctx->pc = 0x24A314u;
}
