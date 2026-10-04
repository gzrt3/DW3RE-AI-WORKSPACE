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

// Function: entry_002390d8
// Address: 0x2390d8 - 0x2390e0
void entry_002390d8_0x2390d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002390d8_0x2390d8");
#endif

    ctx->pc = 0x2390d8u;

    // 0x2390d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2390D8u;
    {
        const bool branch_taken_0x2390d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390d8) {
            ctx->pc = 0x239100u;
            return;
        }
    }
    ctx->pc = 0x2390E0u;
}
