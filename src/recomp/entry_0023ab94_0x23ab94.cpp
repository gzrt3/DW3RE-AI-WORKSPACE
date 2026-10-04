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

// Function: entry_0023ab94
// Address: 0x23ab94 - 0x23aba8
void entry_0023ab94_0x23ab94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ab94_0x23ab94");
#endif

    ctx->pc = 0x23ab94u;

    // 0x23ab94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB98u;
    {
        const bool branch_taken_0x23ab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ab98) {
            ctx->pc = 0x23ABA8u;
            return;
        }
    }
    ctx->pc = 0x23ABA0u;
    // 0x23aba0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23aba4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x23aba8u;
}
