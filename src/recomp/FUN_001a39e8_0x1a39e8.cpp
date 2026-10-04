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

// Function: FUN_001a39e8
// Address: 0x1a39e8 - 0x1a3a20
void FUN_001a39e8_0x1a39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a39e8_0x1a39e8");
#endif

    ctx->pc = 0x1a39e8u;

    // 0x1a39e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a39e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a39ec: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x1a39ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
    // 0x1a39f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a39f4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1a39f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1a39f8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a39fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3a00: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a3a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a3a04: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1a3a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3a08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a3a0c: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a3a10: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x1a3a10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3a14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a3a18: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x1a3a18u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a3a1c: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    ctx->pc = 0x1a3a20u;
}
