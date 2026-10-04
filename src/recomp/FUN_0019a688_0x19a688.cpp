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

// Function: FUN_0019a688
// Address: 0x19a688 - 0x19a6c4
void FUN_0019a688_0x19a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a688_0x19a688");
#endif

    ctx->pc = 0x19a688u;

    // 0x19a688: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a68c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19a690: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x19a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x19a694: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x19a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x19a698: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19a69c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x19a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x19a6a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a6a4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x19a6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6ac: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
    // 0x19a6b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x19a6b4: 0x24c65830  addiu       $a2, $a2, 0x5830
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22576));
    // 0x19a6b8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x19a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19a6bc: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x19a6bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19a6c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285830u));
    ctx->pc = 0x19a6c4u;
}
