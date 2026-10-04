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

// Function: entry_00164844
// Address: 0x164844 - 0x164850
void entry_00164844_0x164844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164844_0x164844");
#endif

    ctx->pc = 0x164844u;

    // 0x164844: 0x8f878688  lw          $a3, -0x7978($gp)
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x164848: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x164848u;
    {
        const bool branch_taken_0x164848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164848u;
        // 0x16484c: 0x8f86868c  lw          $a2, -0x7974($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164848) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x164850u;
}
