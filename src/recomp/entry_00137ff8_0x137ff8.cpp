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

// Function: entry_00137ff8
// Address: 0x137ff8 - 0x138008
void entry_00137ff8_0x137ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ff8_0x137ff8");
#endif

    ctx->pc = 0x137ff8u;

    // 0x137ff8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x137ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137ffc: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x137ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138000: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x138000u;
    {
        const bool branch_taken_0x138000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138000) {
            ctx->pc = 0x137F78u;
            return;
        }
    }
    ctx->pc = 0x138008u;
}
