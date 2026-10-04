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

// Function: FUN_001005c0
// Address: 0x1005c0 - 0x1005fc
void FUN_001005c0_0x1005c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001005c0_0x1005c0");
#endif

    ctx->pc = 0x1005c0u;

    // 0x1005c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1005c4: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x1005c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x1005c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1005c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1005cc: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x1005ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1005d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1005d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1005d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1005d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1005d8: 0x8f838468  lw          $v1, -0x7B98($gp)
    ctx->pc = 0x1005d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x1005dc: 0xaf838448  sw          $v1, -0x7BB8($gp)
    ctx->pc = 0x1005dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 3));
    // 0x1005e0: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x1005e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x1005e4: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x1005e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1005e8: 0xaf86844c  sw          $a2, -0x7BB4($gp)
    ctx->pc = 0x1005e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 6));
    // 0x1005ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1005ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1005f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1005f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1005f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1005f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1005f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1005fcu;
}
