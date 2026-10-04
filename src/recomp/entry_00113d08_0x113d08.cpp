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

// Function: entry_00113d08
// Address: 0x113d08 - 0x113d34
void entry_00113d08_0x113d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d08_0x113d08");
#endif

    ctx->pc = 0x113d08u;

    // 0x113d08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x113d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113d0c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113d10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113d14: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x113d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x113d18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113d1c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x113d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x113d20: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x113d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x113d24: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x113d28: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x113d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x113d2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x113d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x113d30: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->pc = 0x113d34u;
}
