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

// Function: entry_0019f4d0
// Address: 0x19f4d0 - 0x19f4dc
void entry_0019f4d0_0x19f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f4d0_0x19f4d0");
#endif

    ctx->pc = 0x19f4d0u;

    // 0x19f4d0: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x19f4d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f4d4: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F4D4u;
    {
        const bool branch_taken_0x19f4d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D4u;
        // 0x19f4d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d4) {
            ctx->pc = 0x19F4B8u;
            return;
        }
    }
    ctx->pc = 0x19F4DCu;
}
