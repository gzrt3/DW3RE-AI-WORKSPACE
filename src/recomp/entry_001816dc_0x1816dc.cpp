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

// Function: entry_001816dc
// Address: 0x1816dc - 0x1816e8
void entry_001816dc_0x1816dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001816dc_0x1816dc");
#endif

    ctx->pc = 0x1816dcu;

    // 0x1816dc: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x1816dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1816e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1816E0u;
    {
        const bool branch_taken_0x1816e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816E0u;
        // 0x1816e4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816e0) {
            ctx->pc = 0x181774u;
            return;
        }
    }
    ctx->pc = 0x1816E8u;
}
