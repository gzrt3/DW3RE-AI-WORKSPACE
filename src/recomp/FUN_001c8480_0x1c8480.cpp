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

// Function: FUN_001c8480
// Address: 0x1c8480 - 0x1c84cc
void FUN_001c8480_0x1c8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8480_0x1c8480");
#endif

    ctx->pc = 0x1c8480u;

    // 0x1c8480: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x1c8480u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1c8484: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x1c8484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1c8488: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x1c8488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c848c: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1c8490: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8494: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x1c8494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1c8498: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x1c8498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c849c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1c849cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1c84a0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c84a4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1c84a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c84a8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1c84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1c84ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c84acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c84b0: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c84b4: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1c84b8: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1c84bc: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x1c84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c84c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c84c4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1c84c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1c84c8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1c84ccu;
}
