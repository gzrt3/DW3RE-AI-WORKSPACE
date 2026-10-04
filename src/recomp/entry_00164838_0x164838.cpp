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

// Function: entry_00164838
// Address: 0x164838 - 0x164844
void entry_00164838_0x164838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164838_0x164838");
#endif

    ctx->pc = 0x164838u;

    // 0x164838: 0x8f878694  lw          $a3, -0x796C($gp)
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x16483c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16483Cu;
    {
        const bool branch_taken_0x16483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16483Cu;
        // 0x164840: 0x8f868698  lw          $a2, -0x7968($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16483c) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x164844u;
}
