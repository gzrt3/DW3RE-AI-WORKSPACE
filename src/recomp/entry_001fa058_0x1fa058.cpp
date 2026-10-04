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

// Function: entry_001fa058
// Address: 0x1fa058 - 0x1fa060
void entry_001fa058_0x1fa058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa058_0x1fa058");
#endif

    ctx->pc = 0x1fa058u;

    // 0x1fa058: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA058u;
    {
        const bool branch_taken_0x1fa058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA058u;
        // 0x1fa05c: 0x64020014  daddiu      $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa058) {
            ctx->pc = 0x1FA074u;
            return;
        }
    }
    ctx->pc = 0x1FA060u;
}
