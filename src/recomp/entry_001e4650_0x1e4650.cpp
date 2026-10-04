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

// Function: entry_001e4650
// Address: 0x1e4650 - 0x1e4660
void entry_001e4650_0x1e4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4650_0x1e4650");
#endif

    ctx->pc = 0x1e4650u;

    // 0x1e4650: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e4654: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4654u;
    {
        const bool branch_taken_0x1e4654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4654u;
        // 0x1e4658: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4654) {
            ctx->pc = 0x1E4660u;
            return;
        }
    }
    ctx->pc = 0x1E465Cu;
    // 0x1e465c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x1e4660u;
}
