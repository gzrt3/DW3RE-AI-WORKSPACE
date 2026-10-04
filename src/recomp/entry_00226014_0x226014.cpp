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

// Function: entry_00226014
// Address: 0x226014 - 0x226028
void entry_00226014_0x226014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226014_0x226014");
#endif

    ctx->pc = 0x226014u;

    // 0x226014: 0x0  nop
    ctx->pc = 0x226014u;
    // NOP
    // 0x226018: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22601c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22601cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x226020: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x226020u;
    {
        const bool branch_taken_0x226020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226020u;
        // 0x226024: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226020) {
            ctx->pc = 0x225FF4u;
            return;
        }
    }
    ctx->pc = 0x226028u;
}
