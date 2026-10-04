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

// Function: entry_0021add8
// Address: 0x21add8 - 0x21adf0
void entry_0021add8_0x21add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021add8_0x21add8");
#endif

    ctx->pc = 0x21add8u;

    // 0x21add8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21add8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21addc: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x21addcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x21ade0: 0x1420ff34  bnez        $at, . + 4 + (-0xCC << 2)
    ctx->pc = 0x21ADE0u;
    {
        const bool branch_taken_0x21ade0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ade0) {
            ctx->pc = 0x21AAB4u;
            return;
        }
    }
    ctx->pc = 0x21ADE8u;
    // 0x21ade8: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x21ADE8u;
    {
        const bool branch_taken_0x21ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ade8) {
            ctx->pc = 0x21B14Cu;
            return;
        }
    }
    ctx->pc = 0x21ADF0u;
}
