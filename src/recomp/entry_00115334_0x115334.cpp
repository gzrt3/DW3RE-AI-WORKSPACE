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

// Function: entry_00115334
// Address: 0x115334 - 0x115340
void entry_00115334_0x115334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115334_0x115334");
#endif

    ctx->pc = 0x115334u;

    // 0x115334: 0xae071d70  sw          $a3, 0x1D70($s0)
    ctx->pc = 0x115334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
    // 0x115338: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x115338u;
    {
        const bool branch_taken_0x115338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115338u;
        // 0x11533c: 0xae061d6c  sw          $a2, 0x1D6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115338) {
            ctx->pc = 0x115410u;
            return;
        }
    }
    ctx->pc = 0x115340u;
}
