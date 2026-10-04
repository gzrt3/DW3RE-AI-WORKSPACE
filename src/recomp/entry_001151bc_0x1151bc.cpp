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

// Function: entry_001151bc
// Address: 0x1151bc - 0x1151c4
void entry_001151bc_0x1151bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001151bc_0x1151bc");
#endif

    ctx->pc = 0x1151bcu;

    // 0x1151bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1151BCu;
    {
        const bool branch_taken_0x1151bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151BCu;
        // 0x1151c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151bc) {
            ctx->pc = 0x11520Cu;
            return;
        }
    }
    ctx->pc = 0x1151C4u;
}
