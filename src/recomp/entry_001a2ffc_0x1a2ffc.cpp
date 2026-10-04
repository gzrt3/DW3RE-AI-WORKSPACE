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

// Function: entry_001a2ffc
// Address: 0x1a2ffc - 0x1a3004
void entry_001a2ffc_0x1a2ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ffc_0x1a2ffc");
#endif

    ctx->pc = 0x1a2ffcu;

    // 0x1a2ffc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2FFCu;
    {
        const bool branch_taken_0x1a2ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FFCu;
        // 0x1a3000: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ffc) {
            ctx->pc = 0x1A301Cu;
            return;
        }
    }
    ctx->pc = 0x1A3004u;
}
