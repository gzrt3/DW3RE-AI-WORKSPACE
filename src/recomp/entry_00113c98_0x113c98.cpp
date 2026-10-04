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

// Function: entry_00113c98
// Address: 0x113c98 - 0x113cac
void entry_00113c98_0x113c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c98_0x113c98");
#endif

    ctx->pc = 0x113c98u;

    // 0x113c98: 0x822400be  lb          $a0, 0xBE($s1)
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 190)));
    // 0x113c9c: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x113c9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x113ca0: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x113CA0u;
    {
        const bool branch_taken_0x113ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113ca0) {
            ctx->pc = 0x113C14u;
            return;
        }
    }
    ctx->pc = 0x113CA8u;
    // 0x113ca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x113cacu;
}
