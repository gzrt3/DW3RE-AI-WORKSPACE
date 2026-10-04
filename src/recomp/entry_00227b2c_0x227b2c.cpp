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

// Function: entry_00227b2c
// Address: 0x227b2c - 0x227b40
void entry_00227b2c_0x227b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227b2c_0x227b2c");
#endif

    ctx->pc = 0x227b2cu;

    // 0x227b2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227b30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227b34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227B34u;
    {
        const bool branch_taken_0x227b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227b34) {
            ctx->pc = 0x227B40u;
            return;
        }
    }
    ctx->pc = 0x227B3Cu;
    // 0x227b3c: 0xaf8692e8  sw          $a2, -0x6D18($gp)
    ctx->pc = 0x227b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939368), GPR_U32(ctx, 6));
    ctx->pc = 0x227b40u;
}
