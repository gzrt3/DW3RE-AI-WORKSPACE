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

// Function: entry_001d4e50
// Address: 0x1d4e50 - 0x1d4e60
void entry_001d4e50_0x1d4e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e50_0x1d4e50");
#endif

    ctx->pc = 0x1d4e50u;

    // 0x1d4e50: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x1d4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x1d4e54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d4e58: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D4E58u;
    {
        const bool branch_taken_0x1d4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E58u;
        // 0x1d4e5c: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e58) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4E60u;
}
