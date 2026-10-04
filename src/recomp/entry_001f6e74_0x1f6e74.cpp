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

// Function: entry_001f6e74
// Address: 0x1f6e74 - 0x1f6ea8
void entry_001f6e74_0x1f6e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e74_0x1f6e74");
#endif

    ctx->pc = 0x1f6e74u;

    // 0x1f6e74: 0x0  nop
    ctx->pc = 0x1f6e74u;
    // NOP
    // 0x1f6e78: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6E78u;
    {
        const bool branch_taken_0x1f6e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f6e78) {
            ctx->pc = 0x1F6EA8u;
            return;
        }
    }
    ctx->pc = 0x1F6E80u;
    // 0x1f6e80: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1f6e84: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f6e8c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f6e8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f6e90: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1f6e90u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f6e94: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x1f6e98: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e9c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6E9Cu;
    {
        const bool branch_taken_0x1f6e9c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1f6e9c) {
            ctx->pc = 0x1F6EA8u;
            return;
        }
    }
    ctx->pc = 0x1F6EA4u;
    // 0x1f6ea4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1f6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1f6ea8u;
}
