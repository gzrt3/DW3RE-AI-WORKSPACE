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

// Function: entry_00164874
// Address: 0x164874 - 0x164880
void entry_00164874_0x164874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164874_0x164874");
#endif

    ctx->pc = 0x164874u;

    // 0x164874: 0x8f878664  lw          $a3, -0x799C($gp)
    ctx->pc = 0x164874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
    // 0x164878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164878u;
    {
        const bool branch_taken_0x164878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164878u;
        // 0x16487c: 0x8f868668  lw          $a2, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164878) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x164880u;
}
