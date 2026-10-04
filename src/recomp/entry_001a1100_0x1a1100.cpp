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

// Function: entry_001a1100
// Address: 0x1a1100 - 0x1a110c
void entry_001a1100_0x1a1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1100_0x1a1100");
#endif

    ctx->pc = 0x1a1100u;

    // 0x1a1100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1104: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1A1104u;
    {
        const bool branch_taken_0x1a1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1104u;
        // 0x1a1108: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1104) {
            ctx->pc = 0x1A120Cu;
            return;
        }
    }
    ctx->pc = 0x1A110Cu;
}
