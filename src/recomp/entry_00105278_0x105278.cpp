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

// Function: entry_00105278
// Address: 0x105278 - 0x105294
void entry_00105278_0x105278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105278_0x105278");
#endif

    ctx->pc = 0x105278u;

    // 0x105278: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x10527c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10527cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105280: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x105280u;
    {
        const bool branch_taken_0x105280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105280) {
            ctx->pc = 0x105250u;
            return;
        }
    }
    ctx->pc = 0x105288u;
    // 0x105288: 0xaf808470  sw          $zero, -0x7B90($gp)
    ctx->pc = 0x105288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 0));
    // 0x10528c: 0xaf80846c  sw          $zero, -0x7B94($gp)
    ctx->pc = 0x10528cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 0));
    // 0x105290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x105294u;
}
