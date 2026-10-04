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

// Function: entry_00151ee8
// Address: 0x151ee8 - 0x151ef0
void entry_00151ee8_0x151ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ee8_0x151ee8");
#endif

    ctx->pc = 0x151ee8u;

    // 0x151ee8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x151EE8u;
    {
        const bool branch_taken_0x151ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EE8u;
        // 0x151eec: 0xae0003c4  sw          $zero, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ee8) {
            ctx->pc = 0x152020u;
            return;
        }
    }
    ctx->pc = 0x151EF0u;
}
