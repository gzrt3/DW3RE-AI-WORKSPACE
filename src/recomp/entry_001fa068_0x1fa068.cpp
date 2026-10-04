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

// Function: entry_001fa068
// Address: 0x1fa068 - 0x1fa070
void entry_001fa068_0x1fa068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa068_0x1fa068");
#endif

    ctx->pc = 0x1fa068u;

    // 0x1fa068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA068u;
    {
        const bool branch_taken_0x1fa068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA068u;
        // 0x1fa06c: 0x64020016  daddiu      $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa068) {
            ctx->pc = 0x1FA074u;
            return;
        }
    }
    ctx->pc = 0x1FA070u;
}
