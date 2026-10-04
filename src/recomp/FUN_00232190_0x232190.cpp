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

// Function: FUN_00232190
// Address: 0x232190 - 0x2321a8
void FUN_00232190_0x232190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232190_0x232190");
#endif

    ctx->pc = 0x232190u;

    // 0x232190: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x232194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232194u;
    {
        const bool branch_taken_0x232194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232194) {
            ctx->pc = 0x2321B0u;
            return;
        }
    }
    ctx->pc = 0x23219Cu;
    // 0x23219c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x23219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2321a0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2321a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2321a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x2321a8u;
}
