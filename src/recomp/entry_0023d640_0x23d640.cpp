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

// Function: entry_0023d640
// Address: 0x23d640 - 0x23d650
void entry_0023d640_0x23d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d640_0x23d640");
#endif

    ctx->pc = 0x23d640u;

    // 0x23d640: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D640u;
    {
        const bool branch_taken_0x23d640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d640) {
            ctx->pc = 0x23D650u;
            return;
        }
    }
    ctx->pc = 0x23D648u;
    // 0x23d648: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d648u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d64c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x23d650u;
}
