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

// Function: entry_00200858
// Address: 0x200858 - 0x200870
void entry_00200858_0x200858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200858_0x200858");
#endif

    ctx->pc = 0x200858u;

    // 0x200858: 0xaf8390e8  sw          $v1, -0x6F18($gp)
    ctx->pc = 0x200858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
    // 0x20085c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20085cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x200860: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x200860u;
    {
        const bool branch_taken_0x200860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200860) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x200868u;
    // 0x200868: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200868u;
        // 0x20086c: 0xaf8090ec  sw          $zero, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200868) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x200870u;
}
