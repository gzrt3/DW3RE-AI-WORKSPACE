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

// Function: entry_001e4814
// Address: 0x1e4814 - 0x1e4820
void entry_001e4814_0x1e4814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4814_0x1e4814");
#endif

    ctx->pc = 0x1e4814u;

    // 0x1e4814: 0x0  nop
    ctx->pc = 0x1e4814u;
    // NOP
    // 0x1e4818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4818u;
    {
        const bool branch_taken_0x1e4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xa0e60d03  sb          $a2, 0xD03($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3331), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4818) {
            ctx->pc = 0x1E482Cu;
            return;
        }
    }
    ctx->pc = 0x1E4820u;
}
