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

// Function: entry_001f7748
// Address: 0x1f7748 - 0x1f7758
void entry_001f7748_0x1f7748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7748_0x1f7748");
#endif

    ctx->pc = 0x1f7748u;

    // 0x1f7748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f774c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1f774cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7750: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F7750u;
    {
        const bool branch_taken_0x1f7750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7750u;
        // 0x1f7754: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7750) {
            ctx->pc = 0x1F7710u;
            return;
        }
    }
    ctx->pc = 0x1F7758u;
}
