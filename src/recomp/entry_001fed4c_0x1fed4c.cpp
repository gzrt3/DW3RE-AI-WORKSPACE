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

// Function: entry_001fed4c
// Address: 0x1fed4c - 0x1fed54
void entry_001fed4c_0x1fed4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed4c_0x1fed4c");
#endif

    ctx->pc = 0x1fed4cu;

    // 0x1fed4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FED4Cu;
    {
        const bool branch_taken_0x1fed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED4Cu;
        // 0x1fed50: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed4c) {
            ctx->pc = 0x1FED68u;
            return;
        }
    }
    ctx->pc = 0x1FED54u;
}
