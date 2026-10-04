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

// Function: entry_00201da8
// Address: 0x201da8 - 0x201db0
void entry_00201da8_0x201da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201da8_0x201da8");
#endif

    ctx->pc = 0x201da8u;

    // 0x201da8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x201DA8u;
    {
        const bool branch_taken_0x201da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA8u;
        // 0x201dac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201da8) {
            ctx->pc = 0x201ED8u;
            return;
        }
    }
    ctx->pc = 0x201DB0u;
}
