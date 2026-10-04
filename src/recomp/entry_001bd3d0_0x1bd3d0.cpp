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

// Function: entry_001bd3d0
// Address: 0x1bd3d0 - 0x1bd458
void entry_001bd3d0_0x1bd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3d0_0x1bd3d0");
#endif

    ctx->pc = 0x1bd3d0u;

    // 0x1bd3d0: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1bd3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd3d4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd3d8: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bd3dc: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1bd3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
    // 0x1bd3e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd3e4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd3e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd3e8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd3ec: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd3f0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bd3f4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd3f8: 0x0  nop
    ctx->pc = 0x1bd3f8u;
    // NOP
    // 0x1bd3fc: 0x0  nop
    ctx->pc = 0x1bd3fcu;
    // NOP
    // 0x1bd400: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd404: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd408: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd408u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd410: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd414: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD414u;
    {
        const bool branch_taken_0x1bd414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd414) {
            ctx->pc = 0x1BD420u;
            goto label_1bd420;
        }
    }
    ctx->pc = 0x1BD41Cu;
    // 0x1bd41c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd420:
    // 0x1bd420: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1bd420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd424: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd428: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bd428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1bd42c: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1bd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
    // 0x1bd430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd434: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd438: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd43c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd440: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bd444: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd448: 0x0  nop
    ctx->pc = 0x1bd448u;
    // NOP
    // 0x1bd44c: 0x0  nop
    ctx->pc = 0x1bd44cu;
    // NOP
    // 0x1bd450: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd450u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd454: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    ctx->pc = 0x1bd458u;
}
