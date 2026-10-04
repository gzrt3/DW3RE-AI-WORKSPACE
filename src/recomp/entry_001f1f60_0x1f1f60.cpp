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

// Function: entry_001f1f60
// Address: 0x1f1f60 - 0x1f1f7c
void entry_001f1f60_0x1f1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1f60_0x1f1f60");
#endif

    ctx->pc = 0x1f1f60u;

    // 0x1f1f60: 0xaf838fc0  sw          $v1, -0x7040($gp)
    ctx->pc = 0x1f1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
    // 0x1f1f64: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1f1f64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f1f68: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1F68u;
    {
        const bool branch_taken_0x1f1f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f68) {
            ctx->pc = 0x1F1FB0u;
            return;
        }
    }
    ctx->pc = 0x1F1F70u;
    // 0x1f1f70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1F70u;
    {
        const bool branch_taken_0x1f1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F70u;
        // 0x1f1f74: 0xaf808fc4  sw          $zero, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f70) {
            ctx->pc = 0x1F1FB0u;
            return;
        }
    }
    ctx->pc = 0x1F1F78u;
    // 0x1f1f78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1f1f7cu;
}
