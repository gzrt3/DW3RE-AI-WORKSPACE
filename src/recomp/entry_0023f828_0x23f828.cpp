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

// Function: entry_0023f828
// Address: 0x23f828 - 0x23f830
void entry_0023f828_0x23f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f828_0x23f828");
#endif

    ctx->pc = 0x23f828u;

    // 0x23f828: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x23F828u;
    {
        const bool branch_taken_0x23f828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F828u;
        // 0x23f82c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f828) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F830u;
}
