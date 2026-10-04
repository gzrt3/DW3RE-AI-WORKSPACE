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

// Function: entry_001982ac
// Address: 0x1982ac - 0x1982b8
void entry_001982ac_0x1982ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001982ac_0x1982ac");
#endif

    ctx->pc = 0x1982acu;

    // 0x1982ac: 0x0  nop
    ctx->pc = 0x1982acu;
    // NOP
    // 0x1982b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1982B0u;
    {
        const bool branch_taken_0x1982b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982b0) {
            ctx->pc = 0x1982D0u;
            return;
        }
    }
    ctx->pc = 0x1982B8u;
}
