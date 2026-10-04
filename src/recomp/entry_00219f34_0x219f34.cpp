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

// Function: entry_00219f34
// Address: 0x219f34 - 0x219f40
void entry_00219f34_0x219f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f34_0x219f34");
#endif

    ctx->pc = 0x219f34u;

    // 0x219f34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x219F38u;
    {
        const bool branch_taken_0x219f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f38) {
            ctx->pc = 0x219F90u;
            return;
        }
    }
    ctx->pc = 0x219F40u;
}
