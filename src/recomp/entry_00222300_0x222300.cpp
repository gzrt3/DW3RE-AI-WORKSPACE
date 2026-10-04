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

// Function: entry_00222300
// Address: 0x222300 - 0x222308
void entry_00222300_0x222300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222300_0x222300");
#endif

    ctx->pc = 0x222300u;

    // 0x222300: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x222300u;
    {
        const bool branch_taken_0x222300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222300u;
        // 0x222304: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222300) {
            ctx->pc = 0x222518u;
            return;
        }
    }
    ctx->pc = 0x222308u;
}
