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

// Function: entry_002022a8
// Address: 0x2022a8 - 0x2022b0
void entry_002022a8_0x2022a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002022a8_0x2022a8");
#endif

    ctx->pc = 0x2022a8u;

    // 0x2022a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2022A8u;
    {
        const bool branch_taken_0x2022a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A8u;
        // 0x2022ac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022a8) {
            ctx->pc = 0x2023D8u;
            return;
        }
    }
    ctx->pc = 0x2022B0u;
}
