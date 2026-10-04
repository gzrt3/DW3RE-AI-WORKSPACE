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

// Function: entry_00137f78
// Address: 0x137f78 - 0x137f8c
void entry_00137f78_0x137f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f78_0x137f78");
#endif

    ctx->pc = 0x137f78u;

    // 0x137f78: 0x8cec0004  lw          $t4, 0x4($a3)
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x137f7c: 0x189182b  sltu        $v1, $t4, $t1
    ctx->pc = 0x137f7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x137f80: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137F80u;
    {
        const bool branch_taken_0x137f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137f80) {
            ctx->pc = 0x137F8Cu;
            return;
        }
    }
    ctx->pc = 0x137F88u;
    // 0x137f88: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x137f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137f8cu;
}
