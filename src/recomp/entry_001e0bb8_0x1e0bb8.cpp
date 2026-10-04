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

// Function: entry_001e0bb8
// Address: 0x1e0bb8 - 0x1e0bcc
void entry_001e0bb8_0x1e0bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0bb8_0x1e0bb8");
#endif

    ctx->pc = 0x1e0bb8u;

    // 0x1e0bb8: 0x147c023  subu        $t8, $t2, $a3
    ctx->pc = 0x1e0bb8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1e0bbc: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0BBCu;
    {
        const bool branch_taken_0x1e0bbc = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0bbc) {
            ctx->pc = 0x1E0BCCu;
            return;
        }
    }
    ctx->pc = 0x1E0BC4u;
    // 0x1e0bc4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0BC4u;
    {
        const bool branch_taken_0x1e0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC4u;
        // 0x1e0bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bc4) {
            ctx->pc = 0x1E0BCCu;
            return;
        }
    }
    ctx->pc = 0x1E0BCCu;
}
