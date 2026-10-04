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

// Function: entry_0016d150
// Address: 0x16d150 - 0x16d180
void entry_0016d150_0x16d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d150_0x16d150");
#endif

    ctx->pc = 0x16d150u;

    // 0x16d150: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d154: 0x3c03400f  lui         $v1, 0x400F
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16399 << 16));
    // 0x16d158: 0x34653f80  ori         $a1, $v1, 0x3F80
    ctx->pc = 0x16d158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
    // 0x16d15c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16d160: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x16d160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x16d164: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16d168: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16d16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d170: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16d174: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16d17c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x16d180u;
}
