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

// Function: entry_00159374
// Address: 0x159374 - 0x159394
void entry_00159374_0x159374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159374_0x159374");
#endif

    ctx->pc = 0x159374u;

    // 0x159374: 0x1071804  sllv        $v1, $a3, $t0
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x159378: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x159378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15937c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15937Cu;
    {
        const bool branch_taken_0x15937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15937c) {
            ctx->pc = 0x159394u;
            return;
        }
    }
    ctx->pc = 0x159384u;
    // 0x159384: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x159384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x159388: 0x84630232  lh          $v1, 0x232($v1)
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x15938c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159390: 0x61100a  movz        $v0, $v1, $at
    ctx->pc = 0x159390u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    ctx->pc = 0x159394u;
}
