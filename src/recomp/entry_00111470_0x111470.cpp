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

// Function: entry_00111470
// Address: 0x111470 - 0x111484
void entry_00111470_0x111470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111470_0x111470");
#endif

    ctx->pc = 0x111470u;

    // 0x111470: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111470u;
    {
        const bool branch_taken_0x111470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111470) {
            ctx->pc = 0x111484u;
            return;
        }
    }
    ctx->pc = 0x111478u;
    // 0x111478: 0x90860027  lbu         $a2, 0x27($a0)
    ctx->pc = 0x111478u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x11147c: 0x10c90038  beq         $a2, $t1, . + 4 + (0x38 << 2)
    ctx->pc = 0x11147Cu;
    {
        const bool branch_taken_0x11147c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x111480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11147Cu;
        // 0x111480: 0x16a082a  slt         $at, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11147c) {
            ctx->pc = 0x111560u;
            return;
        }
    }
    ctx->pc = 0x111484u;
}
