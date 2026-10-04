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

// Function: FUN_00238860
// Address: 0x238860 - 0x2388b4
void FUN_00238860_0x238860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238860_0x238860");
#endif

    ctx->pc = 0x238860u;

    // 0x238860: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x238864: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x238864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x238868: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
    // 0x23886c: 0x3c090024  lui         $t1, 0x24
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)36 << 16));
    // 0x238870: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x238870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x238874: 0x2463c930  addiu       $v1, $v1, -0x36D0
    ctx->pc = 0x238874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
    // 0x238878: 0x2508c9b0  addiu       $t0, $t0, -0x3650
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953392));
    // 0x23887c: 0x2529ca18  addiu       $t1, $t1, -0x35E8
    ctx->pc = 0x23887cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953496));
    // 0x238880: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x238880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x238884: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x238884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x238888: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x238888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x23888c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x23888cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x238890: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x238890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x238894: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x238894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x238898: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x238898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x23889c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23889cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2388a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2388a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2388a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2388a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2388a8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2388a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2388ac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2388acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2388b0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2388b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x2388b4u;
}
