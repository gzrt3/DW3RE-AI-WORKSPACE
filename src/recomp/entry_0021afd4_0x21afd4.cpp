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

// Function: entry_0021afd4
// Address: 0x21afd4 - 0x21afe0
void entry_0021afd4_0x21afd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021afd4_0x21afd4");
#endif

    ctx->pc = 0x21afd4u;

    // 0x21afd4: 0x0  nop
    ctx->pc = 0x21afd4u;
    // NOP
    // 0x21afd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21AFD8u;
    {
        const bool branch_taken_0x21afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFD8u;
        // 0x21afdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afd8) {
            ctx->pc = 0x21B014u;
            return;
        }
    }
    ctx->pc = 0x21AFE0u;
}
