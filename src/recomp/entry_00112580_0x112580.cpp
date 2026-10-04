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

// Function: entry_00112580
// Address: 0x112580 - 0x112588
void entry_00112580_0x112580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112580_0x112580");
#endif

    ctx->pc = 0x112580u;

    // 0x112580: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112580u;
    {
        const bool branch_taken_0x112580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112580u;
        // 0x112584: 0xc21824  and         $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112580) {
            ctx->pc = 0x1125C0u;
            return;
        }
    }
    ctx->pc = 0x112588u;
}
