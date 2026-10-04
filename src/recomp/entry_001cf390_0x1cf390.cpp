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

// Function: entry_001cf390
// Address: 0x1cf390 - 0x1cf39c
void entry_001cf390_0x1cf390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf390_0x1cf390");
#endif

    ctx->pc = 0x1cf390u;

    // 0x1cf390: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF390u;
    {
        const bool branch_taken_0x1cf390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF390u;
        // 0x1cf394: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf390) {
            ctx->pc = 0x1CF39Cu;
            return;
        }
    }
    ctx->pc = 0x1CF398u;
    // 0x1cf398: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1cf39cu;
}
