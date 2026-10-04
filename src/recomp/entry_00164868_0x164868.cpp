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

// Function: entry_00164868
// Address: 0x164868 - 0x164874
void entry_00164868_0x164868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164868_0x164868");
#endif

    ctx->pc = 0x164868u;

    // 0x164868: 0x8f87867c  lw          $a3, -0x7984($gp)
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
    // 0x16486c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16486Cu;
    {
        const bool branch_taken_0x16486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16486Cu;
        // 0x164870: 0x8f868680  lw          $a2, -0x7980($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16486c) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x164874u;
}
