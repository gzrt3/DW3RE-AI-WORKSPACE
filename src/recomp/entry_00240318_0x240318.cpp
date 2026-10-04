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

// Function: entry_00240318
// Address: 0x240318 - 0x24032c
void entry_00240318_0x240318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00240318_0x240318");
#endif

    ctx->pc = 0x240318u;

    // 0x240318: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x24031c: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x240320: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x240320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x240324: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x240324u;
    {
        const bool branch_taken_0x240324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240324) {
            ctx->pc = 0x24035Cu;
            return;
        }
    }
    ctx->pc = 0x24032Cu;
}
