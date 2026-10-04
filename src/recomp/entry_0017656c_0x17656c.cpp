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

// Function: entry_0017656c
// Address: 0x17656c - 0x176574
void entry_0017656c_0x17656c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017656c_0x17656c");
#endif

    ctx->pc = 0x17656cu;

    // 0x17656c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17656Cu;
    {
        const bool branch_taken_0x17656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17656c) {
            ctx->pc = 0x1765ACu;
            return;
        }
    }
    ctx->pc = 0x176574u;
}
