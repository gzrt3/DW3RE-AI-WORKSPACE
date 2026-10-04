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

// Function: entry_001fa060
// Address: 0x1fa060 - 0x1fa068
void entry_001fa060_0x1fa060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa060_0x1fa060");
#endif

    ctx->pc = 0x1fa060u;

    // 0x1fa060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA060u;
    {
        const bool branch_taken_0x1fa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0x64020015  daddiu      $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa060) {
            ctx->pc = 0x1FA074u;
            return;
        }
    }
    ctx->pc = 0x1FA068u;
}
