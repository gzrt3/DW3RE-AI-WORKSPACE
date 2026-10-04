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

// Function: entry_001f2000
// Address: 0x1f2000 - 0x1f2020
void entry_001f2000_0x1f2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2000_0x1f2000");
#endif

    ctx->pc = 0x1f2000u;

    // 0x1f2000: 0x8a6821  addu        $t5, $a0, $t2
    ctx->pc = 0x1f2000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1f2004: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1f2008: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2008u;
    {
        const bool branch_taken_0x1f2008 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1f2008) {
            ctx->pc = 0x1F2020u;
            return;
        }
    }
    ctx->pc = 0x1F2010u;
    // 0x1f2010: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1f2014: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f2014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2018: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1f2018u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f201c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1f201cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1f2020u;
}
