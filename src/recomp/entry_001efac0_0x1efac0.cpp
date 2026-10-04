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

// Function: entry_001efac0
// Address: 0x1efac0 - 0x1efad8
void entry_001efac0_0x1efac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efac0_0x1efac0");
#endif

    ctx->pc = 0x1efac0u;

    // 0x1efac0: 0xaf838f6c  sw          $v1, -0x7094($gp)
    ctx->pc = 0x1efac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
    // 0x1efac4: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1efac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1efac8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFAC8u;
    {
        const bool branch_taken_0x1efac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efac8) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFAD0u;
    // 0x1efad0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EFAD0u;
    {
        const bool branch_taken_0x1efad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAD0u;
        // 0x1efad4: 0xaf808f70  sw          $zero, -0x7090($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efad0) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFAD8u;
}
