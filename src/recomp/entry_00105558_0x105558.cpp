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

// Function: entry_00105558
// Address: 0x105558 - 0x105568
void entry_00105558_0x105558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105558_0x105558");
#endif

    ctx->pc = 0x105558u;

    // 0x105558: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105558u;
    {
        const bool branch_taken_0x105558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105558) {
            ctx->pc = 0x105568u;
            return;
        }
    }
    ctx->pc = 0x105560u;
    // 0x105560: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x105560u;
    {
        const bool branch_taken_0x105560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105560u;
        // 0x105564: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105560) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105568u;
}
