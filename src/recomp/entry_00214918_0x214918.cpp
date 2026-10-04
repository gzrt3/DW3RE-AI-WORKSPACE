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

// Function: entry_00214918
// Address: 0x214918 - 0x214920
void entry_00214918_0x214918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214918_0x214918");
#endif

    ctx->pc = 0x214918u;

    // 0x214918: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x214918u;
    {
        const bool branch_taken_0x214918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xaf8091d0  sw          $zero, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214918) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x214920u;
}
