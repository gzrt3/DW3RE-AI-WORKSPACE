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

// Function: entry_00215950
// Address: 0x215950 - 0x215958
void entry_00215950_0x215950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215950_0x215950");
#endif

    ctx->pc = 0x215950u;

    // 0x215950: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0xaf809248  sw          $zero, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215950) {
            ctx->pc = 0x215988u;
            return;
        }
    }
    ctx->pc = 0x215958u;
}
