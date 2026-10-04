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

// Function: entry_00132954
// Address: 0x132954 - 0x132968
void entry_00132954_0x132954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132954_0x132954");
#endif

    ctx->pc = 0x132954u;

    // 0x132954: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x132954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132958: 0x14880003  bne         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132958u;
    {
        const bool branch_taken_0x132958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x132958) {
            ctx->pc = 0x132968u;
            return;
        }
    }
    ctx->pc = 0x132960u;
    // 0x132960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x132960u;
    {
        const bool branch_taken_0x132960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132960u;
        // 0x132964: 0x30c700ff  andi        $a3, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132960) {
            ctx->pc = 0x132984u;
            return;
        }
    }
    ctx->pc = 0x132968u;
}
