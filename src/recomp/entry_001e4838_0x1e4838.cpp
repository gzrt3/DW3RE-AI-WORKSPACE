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

// Function: entry_001e4838
// Address: 0x1e4838 - 0x1e4848
void entry_001e4838_0x1e4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4838_0x1e4838");
#endif

    ctx->pc = 0x1e4838u;

    // 0x1e4838: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x1e4838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e483c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E483Cu;
    {
        const bool branch_taken_0x1e483c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E483Cu;
        // 0x1e4840: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e483c) {
            ctx->pc = 0x1E4848u;
            return;
        }
    }
    ctx->pc = 0x1E4844u;
    // 0x1e4844: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1e4844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x1e4848u;
}
