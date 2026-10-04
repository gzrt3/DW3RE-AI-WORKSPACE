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

// Function: entry_00152f04
// Address: 0x152f04 - 0x152f1c
void entry_00152f04_0x152f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152f04_0x152f04");
#endif

    ctx->pc = 0x152f04u;

    // 0x152f04: 0x84a30220  lh          $v1, 0x220($a1)
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x152f08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152f0c: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x152f0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x152f10: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152F10u;
    {
        const bool branch_taken_0x152f10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f10) {
            ctx->pc = 0x152F1Cu;
            return;
        }
    }
    ctx->pc = 0x152F18u;
    // 0x152f18: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x152f1cu;
}
