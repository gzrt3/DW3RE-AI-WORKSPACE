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

// Function: entry_001ffc24
// Address: 0x1ffc24 - 0x1ffc2c
void entry_001ffc24_0x1ffc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc24_0x1ffc24");
#endif

    ctx->pc = 0x1ffc24u;

    // 0x1ffc24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFC24u;
    {
        const bool branch_taken_0x1ffc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC24u;
        // 0x1ffc28: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc24) {
            ctx->pc = 0x1FFC48u;
            return;
        }
    }
    ctx->pc = 0x1FFC2Cu;
}
