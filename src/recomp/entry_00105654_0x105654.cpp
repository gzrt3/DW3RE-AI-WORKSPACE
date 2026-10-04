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

// Function: entry_00105654
// Address: 0x105654 - 0x10565c
void entry_00105654_0x105654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105654_0x105654");
#endif

    ctx->pc = 0x105654u;

    // 0x105654: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x105654u;
    {
        const bool branch_taken_0x105654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105654u;
        // 0x105658: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105654) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x10565Cu;
}
