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

// Function: entry_0021591c
// Address: 0x21591c - 0x215928
void entry_0021591c_0x21591c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021591c_0x21591c");
#endif

    ctx->pc = 0x21591cu;

    // 0x21591c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215920: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x215920u;
    {
        const bool branch_taken_0x215920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215920u;
        // 0x215924: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215920) {
            ctx->pc = 0x215988u;
            return;
        }
    }
    ctx->pc = 0x215928u;
}
