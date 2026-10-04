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

// Function: entry_002402f0
// Address: 0x2402f0 - 0x240304
void entry_002402f0_0x2402f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002402f0_0x2402f0");
#endif

    ctx->pc = 0x2402f0u;

    // 0x2402f0: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x2402f4: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x2402f8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x2402f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2402fc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2402FCu;
    {
        const bool branch_taken_0x2402fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2402fc) {
            ctx->pc = 0x24032Cu;
            return;
        }
    }
    ctx->pc = 0x240304u;
}
