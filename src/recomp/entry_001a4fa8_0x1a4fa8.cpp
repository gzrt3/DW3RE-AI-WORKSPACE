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

// Function: entry_001a4fa8
// Address: 0x1a4fa8 - 0x1a4fb4
void entry_001a4fa8_0x1a4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fa8_0x1a4fa8");
#endif

    ctx->pc = 0x1a4fa8u;

    // 0x1a4fa8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4FA8u;
    {
        const bool branch_taken_0x1a4fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA8u;
        // 0x1a4fac: 0xae505b54  sw          $s0, 0x5B54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 23380), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa8) {
            ctx->pc = 0x1A4FB4u;
            return;
        }
    }
    ctx->pc = 0x1A4FB0u;
    // 0x1a4fb0: 0x42000038  ei
    ctx->pc = 0x1a4fb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1a4fb4u;
}
