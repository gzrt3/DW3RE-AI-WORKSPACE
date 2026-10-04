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

// Function: entry_001afbb4
// Address: 0x1afbb4 - 0x1afbc0
void entry_001afbb4_0x1afbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbb4_0x1afbb4");
#endif

    ctx->pc = 0x1afbb4u;

    // 0x1afbb4: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1afbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1afbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFBB8u;
    {
        const bool branch_taken_0x1afbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB8u;
        // 0x1afbbc: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbb8) {
            ctx->pc = 0x1AFBC8u;
            return;
        }
    }
    ctx->pc = 0x1AFBC0u;
}
