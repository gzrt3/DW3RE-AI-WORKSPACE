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

// Function: entry_001d4c3c
// Address: 0x1d4c3c - 0x1d4c58
void entry_001d4c3c_0x1d4c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c3c_0x1d4c3c");
#endif

    ctx->pc = 0x1d4c3cu;

    // 0x1d4c3c: 0x0  nop
    ctx->pc = 0x1d4c3cu;
    // NOP
    // 0x1d4c40: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4C40u;
    {
        const bool branch_taken_0x1d4c40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c40) {
            ctx->pc = 0x1D4C58u;
            return;
        }
    }
    ctx->pc = 0x1D4C48u;
    // 0x1d4c48: 0x8f838588  lw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x1d4c4c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d4c50: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D4C50u;
    {
        const bool branch_taken_0x1d4c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C50u;
        // 0x1d4c54: 0xaf838588  sw          $v1, -0x7A78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c50) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4C58u;
}
