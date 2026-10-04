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

// Function: entry_0016bb60
// Address: 0x16bb60 - 0x16bb6c
void entry_0016bb60_0x16bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb60_0x16bb60");
#endif

    ctx->pc = 0x16bb60u;

    // 0x16bb60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bb64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16BB64u;
    {
        const bool branch_taken_0x16bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB64u;
        // 0x16bb68: 0xaf838728  sw          $v1, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb64) {
            ctx->pc = 0x16BBA0u;
            return;
        }
    }
    ctx->pc = 0x16BB6Cu;
}
