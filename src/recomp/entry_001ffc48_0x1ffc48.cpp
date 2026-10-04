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

// Function: entry_001ffc48
// Address: 0x1ffc48 - 0x1ffc50
void entry_001ffc48_0x1ffc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc48_0x1ffc48");
#endif

    ctx->pc = 0x1ffc48u;

    // 0x1ffc48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFC48u;
    {
        const bool branch_taken_0x1ffc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC48u;
        // 0x1ffc4c: 0xa2626dd3  sb          $v0, 0x6DD3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28115), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc48) {
            ctx->pc = 0x1FFC54u;
            return;
        }
    }
    ctx->pc = 0x1FFC50u;
}
