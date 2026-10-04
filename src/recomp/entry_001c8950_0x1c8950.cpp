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

// Function: entry_001c8950
// Address: 0x1c8950 - 0x1c896c
void entry_001c8950_0x1c8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8950_0x1c8950");
#endif

    ctx->pc = 0x1c8950u;

    // 0x1c8950: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1c8954: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c8958: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1c895c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8960: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8964: 0x0  nop
    ctx->pc = 0x1c8964u;
    // NOP
    // 0x1c8968: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    ctx->pc = 0x1c896cu;
}
