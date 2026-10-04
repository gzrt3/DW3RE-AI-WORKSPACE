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

// Function: entry_00203f1c
// Address: 0x203f1c - 0x203f28
void entry_00203f1c_0x203f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f1c_0x203f1c");
#endif

    ctx->pc = 0x203f1cu;

    // 0x203f1c: 0x8f9190f0  lw          $s1, -0x6F10($gp)
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203F3Cu;
            return;
        }
    }
    ctx->pc = 0x203F28u;
}
