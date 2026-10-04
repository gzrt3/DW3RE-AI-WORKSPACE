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

// Function: entry_00243834
// Address: 0x243834 - 0x243848
void entry_00243834_0x243834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243834_0x243834");
#endif

    ctx->pc = 0x243834u;

    // 0x243834: 0x0  nop
    ctx->pc = 0x243834u;
    // NOP
    // 0x243838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24383c: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x24383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x243840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x243840u;
    {
        const bool branch_taken_0x243840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0xc41004  sllv        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243840) {
            ctx->pc = 0x243818u;
            return;
        }
    }
    ctx->pc = 0x243848u;
}
