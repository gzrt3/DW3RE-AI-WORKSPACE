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

// Function: entry_0014c264
// Address: 0x14c264 - 0x14c270
void entry_0014c264_0x14c264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c264_0x14c264");
#endif

    ctx->pc = 0x14c264u;

    // 0x14c264: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C264u;
    {
        const bool branch_taken_0x14c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c264) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C26Cu;
    // 0x14c26c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x14c270u;
}
