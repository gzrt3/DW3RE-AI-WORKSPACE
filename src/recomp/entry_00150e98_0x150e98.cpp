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

// Function: entry_00150e98
// Address: 0x150e98 - 0x150ea8
void entry_00150e98_0x150e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e98_0x150e98");
#endif

    ctx->pc = 0x150e98u;

    // 0x150e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150e9c: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x150e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x150ea0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x150EA0u;
    {
        const bool branch_taken_0x150ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EA0u;
        // 0x150ea4: 0x24630220  addiu       $v1, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ea0) {
            ctx->pc = 0x150E60u;
            return;
        }
    }
    ctx->pc = 0x150EA8u;
}
