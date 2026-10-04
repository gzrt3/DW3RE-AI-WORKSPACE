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

// Function: entry_001a02a4
// Address: 0x1a02a4 - 0x1a02ac
void entry_001a02a4_0x1a02a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02a4_0x1a02a4");
#endif

    ctx->pc = 0x1a02a4u;

    // 0x1a02a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A02A4u;
    {
        const bool branch_taken_0x1a02a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02A4u;
        // 0x1a02a8: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02a4) {
            ctx->pc = 0x1A02BCu;
            return;
        }
    }
    ctx->pc = 0x1A02ACu;
}
