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

// Function: entry_00164850
// Address: 0x164850 - 0x16485c
void entry_00164850_0x164850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164850_0x164850");
#endif

    ctx->pc = 0x164850u;

    // 0x164850: 0x8f878670  lw          $a3, -0x7990($gp)
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x164854: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164854u;
    {
        const bool branch_taken_0x164854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164854u;
        // 0x164858: 0x8f868674  lw          $a2, -0x798C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164854) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x16485Cu;
}
