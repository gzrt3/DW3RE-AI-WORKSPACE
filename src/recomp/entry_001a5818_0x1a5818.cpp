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

// Function: entry_001a5818
// Address: 0x1a5818 - 0x1a582c
void entry_001a5818_0x1a5818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5818_0x1a5818");
#endif

    ctx->pc = 0x1a5818u;

    // 0x1a5818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5818u;
    {
        const bool branch_taken_0x1a5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5818) {
            ctx->pc = 0x1A582Cu;
            return;
        }
    }
    ctx->pc = 0x1A5820u;
    // 0x1a5820: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
    // 0x1a5824: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5824u;
    {
        const bool branch_taken_0x1a5824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5824u;
        // 0x1a5828: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5824) {
            ctx->pc = 0x1A5834u;
            return;
        }
    }
    ctx->pc = 0x1A582Cu;
}
