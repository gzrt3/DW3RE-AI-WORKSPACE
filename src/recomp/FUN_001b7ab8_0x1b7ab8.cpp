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

// Function: FUN_001b7ab8
// Address: 0x1b7ab8 - 0x1b7ad0
void FUN_001b7ab8_0x1b7ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7ab8_0x1b7ab8");
#endif

    ctx->pc = 0x1b7ab8u;

    // 0x1b7ab8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1b7ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b7abc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1b7abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b7ac0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7AC0u;
    {
        const bool branch_taken_0x1b7ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ac0) {
            ctx->pc = 0x1B7AD8u;
            return;
        }
    }
    ctx->pc = 0x1B7AC8u;
    // 0x1b7ac8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7acc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b7accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1b7ad0u;
}
