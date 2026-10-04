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

// Function: entry_0014c230
// Address: 0x14c230 - 0x14c240
void entry_0014c230_0x14c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c230_0x14c230");
#endif

    ctx->pc = 0x14c230u;

    // 0x14c230: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C230u;
    {
        const bool branch_taken_0x14c230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c230) {
            ctx->pc = 0x14C240u;
            return;
        }
    }
    ctx->pc = 0x14C238u;
    // 0x14c238: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14C238u;
    {
        const bool branch_taken_0x14c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C238u;
        // 0x14c23c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c238) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C240u;
}
