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

// Function: entry_001817c4
// Address: 0x1817c4 - 0x1817dc
void entry_001817c4_0x1817c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001817c4_0x1817c4");
#endif

    ctx->pc = 0x1817c4u;

    // 0x1817c4: 0x0  nop
    ctx->pc = 0x1817c4u;
    // NOP
    // 0x1817c8: 0x74c3c  dsll32      $t1, $a3, 16
    ctx->pc = 0x1817c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1817cc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1817ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1817d0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1817d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1817D4u;
    {
        const bool branch_taken_0x1817d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D4u;
        // 0x1817d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d4) {
            ctx->pc = 0x181804u;
            return;
        }
    }
    ctx->pc = 0x1817DCu;
}
