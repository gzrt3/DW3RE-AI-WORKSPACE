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

// Function: entry_00181774
// Address: 0x181774 - 0x181788
void entry_00181774_0x181774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181774_0x181774");
#endif

    ctx->pc = 0x181774u;

    // 0x181774: 0x64c3c  dsll32      $t1, $a2, 16
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181778: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18177c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x18177cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x181780: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x181780u;
    {
        const bool branch_taken_0x181780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181780u;
        // 0x181784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181780) {
            ctx->pc = 0x1817B0u;
            return;
        }
    }
    ctx->pc = 0x181788u;
}
