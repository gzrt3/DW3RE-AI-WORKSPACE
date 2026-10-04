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

// Function: entry_001d4c58
// Address: 0x1d4c58 - 0x1d4c68
void entry_001d4c58_0x1d4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c58_0x1d4c58");
#endif

    ctx->pc = 0x1d4c58u;

    // 0x1d4c58: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x1d4c5c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d4c60: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1D4C60u;
    {
        const bool branch_taken_0x1d4c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C60u;
        // 0x1d4c64: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c60) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4C68u;
}
