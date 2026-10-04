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

// Function: entry_001055a0
// Address: 0x1055a0 - 0x1055b4
void entry_001055a0_0x1055a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055a0_0x1055a0");
#endif

    ctx->pc = 0x1055a0u;

    // 0x1055a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055A0u;
    {
        const bool branch_taken_0x1055a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055a0) {
            ctx->pc = 0x1055B4u;
            return;
        }
    }
    ctx->pc = 0x1055A8u;
    // 0x1055a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1055a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1055ac: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1055ACu;
    {
        const bool branch_taken_0x1055ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055ACu;
        // 0x1055b0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055ac) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x1055B4u;
}
