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

// Function: entry_00111444
// Address: 0x111444 - 0x11144c
void entry_00111444_0x111444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111444_0x111444");
#endif

    ctx->pc = 0x111444u;

    // 0x111444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111444u;
    {
        const bool branch_taken_0x111444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111444u;
        // 0x111448: 0x90860026  lbu         $a2, 0x26($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111444) {
            ctx->pc = 0x111470u;
            return;
        }
    }
    ctx->pc = 0x11144Cu;
}
