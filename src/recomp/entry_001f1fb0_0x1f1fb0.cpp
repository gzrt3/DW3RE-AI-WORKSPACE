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

// Function: entry_001f1fb0
// Address: 0x1f1fb0 - 0x1f1fd4
void entry_001f1fb0_0x1f1fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1fb0_0x1f1fb0");
#endif

    ctx->pc = 0x1f1fb0u;

    // 0x1f1fb0: 0x8f838fc0  lw          $v1, -0x7040($gp)
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f1fb4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1FB4u;
    {
        const bool branch_taken_0x1f1fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1fb4) {
            ctx->pc = 0x1F2044u;
            return;
        }
    }
    ctx->pc = 0x1F1FBCu;
    // 0x1f1fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1fc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1f1fc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1f1fcc: 0x27878fa8  addiu       $a3, $gp, -0x7058
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
    // 0x1f1fd0: 0x24a5bfa0  addiu       $a1, $a1, -0x4060
    ctx->pc = 0x1f1fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
    ctx->pc = 0x1f1fd4u;
}
