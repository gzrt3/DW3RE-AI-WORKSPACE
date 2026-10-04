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

// Function: entry_0010565c
// Address: 0x10565c - 0x105680
void entry_0010565c_0x10565c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010565c_0x10565c");
#endif

    ctx->pc = 0x10565cu;

    // 0x10565c: 0x8f838470  lw          $v1, -0x7B90($gp)
    ctx->pc = 0x10565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x105660: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x105660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x105664: 0xaf848470  sw          $a0, -0x7B90($gp)
    ctx->pc = 0x105664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 4));
    // 0x105668: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x105668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x10566c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x10566cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105670: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105670u;
    {
        const bool branch_taken_0x105670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105670) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105678u;
    // 0x105678: 0xaf808470  sw          $zero, -0x7B90($gp)
    ctx->pc = 0x105678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 0));
    // 0x10567c: 0xaf80846c  sw          $zero, -0x7B94($gp)
    ctx->pc = 0x10567cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 0));
    ctx->pc = 0x105680u;
}
