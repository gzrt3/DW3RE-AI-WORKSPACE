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

// Function: entry_00151518
// Address: 0x151518 - 0x151528
void entry_00151518_0x151518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151518_0x151518");
#endif

    ctx->pc = 0x151518u;

    // 0x151518: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15151c: 0x2a230028  slti        $v1, $s1, 0x28
    ctx->pc = 0x15151cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x151520: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x151520u;
    {
        const bool branch_taken_0x151520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151520u;
        // 0x151524: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151520) {
            ctx->pc = 0x1514F4u;
            return;
        }
    }
    ctx->pc = 0x151528u;
}
