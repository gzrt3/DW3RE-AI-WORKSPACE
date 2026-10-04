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

// Function: entry_001e3308
// Address: 0x1e3308 - 0x1e3314
void entry_001e3308_0x1e3308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3308_0x1e3308");
#endif

    ctx->pc = 0x1e3308u;

    // 0x1e3308: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1e3308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e330c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E330Cu;
    {
        const bool branch_taken_0x1e330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E330Cu;
        // 0x1e3310: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e330c) {
            ctx->pc = 0x1E32F4u;
            return;
        }
    }
    ctx->pc = 0x1E3314u;
}
