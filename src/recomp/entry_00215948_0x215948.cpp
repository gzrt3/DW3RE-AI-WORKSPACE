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

// Function: entry_00215948
// Address: 0x215948 - 0x215950
void entry_00215948_0x215948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215948_0x215948");
#endif

    ctx->pc = 0x215948u;

    // 0x215948: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x215948u;
    {
        const bool branch_taken_0x215948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215948u;
        // 0x21594c: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215948) {
            ctx->pc = 0x215988u;
            return;
        }
    }
    ctx->pc = 0x215950u;
}
