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

// Function: entry_0021c484
// Address: 0x21c484 - 0x21c498
void entry_0021c484_0x21c484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c484_0x21c484");
#endif

    ctx->pc = 0x21c484u;

    // 0x21c484: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C484u;
    {
        const bool branch_taken_0x21c484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C484u;
        // 0x21c488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c484) {
            ctx->pc = 0x21C498u;
            return;
        }
    }
    ctx->pc = 0x21C48Cu;
    // 0x21c48c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21C490u;
    {
        const bool branch_taken_0x21c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C490u;
        // 0x21c494: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c490) {
            ctx->pc = 0x21C4C4u;
            return;
        }
    }
    ctx->pc = 0x21C498u;
}
