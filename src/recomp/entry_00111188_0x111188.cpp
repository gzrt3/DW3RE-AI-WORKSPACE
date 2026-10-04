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

// Function: entry_00111188
// Address: 0x111188 - 0x111198
void entry_00111188_0x111188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111188_0x111188");
#endif

    ctx->pc = 0x111188u;

    // 0x111188: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x111188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11118c: 0x16a782a  slt         $t7, $t3, $t2
    ctx->pc = 0x11118cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x111190: 0x15e0ffe8  bnez        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x111190u;
    {
        const bool branch_taken_0x111190 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x111190) {
            ctx->pc = 0x111134u;
            return;
        }
    }
    ctx->pc = 0x111198u;
}
