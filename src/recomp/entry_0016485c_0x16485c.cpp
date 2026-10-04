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

// Function: entry_0016485c
// Address: 0x16485c - 0x164868
void entry_0016485c_0x16485c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016485c_0x16485c");
#endif

    ctx->pc = 0x16485cu;

    // 0x16485c: 0x8f878658  lw          $a3, -0x79A8($gp)
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x164860: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164860u;
    {
        const bool branch_taken_0x164860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164860u;
        // 0x164864: 0x8f86865c  lw          $a2, -0x79A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164860) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x164868u;
}
