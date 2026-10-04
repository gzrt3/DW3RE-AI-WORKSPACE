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

// Function: FUN_00148690
// Address: 0x148690 - 0x148714
void FUN_00148690_0x148690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148690_0x148690");
#endif

    ctx->pc = 0x148690u;

    // 0x148690: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x148694: 0xaf8085d0  sw          $zero, -0x7A30($gp)
    ctx->pc = 0x148694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 0));
    // 0x148698: 0xac20bd80  sw          $zero, -0x4280($at)
    ctx->pc = 0x148698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD80u, _value); } while (0);
    // 0x14869c: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486a0: 0xaf8085c0  sw          $zero, -0x7A40($gp)
    ctx->pc = 0x1486a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 0));
    // 0x1486a4: 0xac20bd84  sw          $zero, -0x427C($at)
    ctx->pc = 0x1486a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD84u, _value); } while (0);
    // 0x1486a8: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486ac: 0xaf8085b0  sw          $zero, -0x7A50($gp)
    ctx->pc = 0x1486acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935984), GPR_U32(ctx, 0));
    // 0x1486b0: 0xac20bd88  sw          $zero, -0x4278($at)
    ctx->pc = 0x1486b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD88u, _value); } while (0);
    // 0x1486b4: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486b8: 0xaf8085a0  sw          $zero, -0x7A60($gp)
    ctx->pc = 0x1486b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935968), GPR_U32(ctx, 0));
    // 0x1486bc: 0xac20bd8c  sw          $zero, -0x4274($at)
    ctx->pc = 0x1486bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD8Cu, _value); } while (0);
    // 0x1486c0: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486c4: 0xaf808594  sw          $zero, -0x7A6C($gp)
    ctx->pc = 0x1486c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935956), GPR_U32(ctx, 0));
    // 0x1486c8: 0xac20bd90  sw          $zero, -0x4270($at)
    ctx->pc = 0x1486c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD90u, _value); } while (0);
    // 0x1486cc: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486d0: 0xaf808598  sw          $zero, -0x7A68($gp)
    ctx->pc = 0x1486d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935960), GPR_U32(ctx, 0));
    // 0x1486d4: 0xac20bd94  sw          $zero, -0x426C($at)
    ctx->pc = 0x1486d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD94u, _value); } while (0);
    // 0x1486d8: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486dc: 0xac20bd98  sw          $zero, -0x4268($at)
    ctx->pc = 0x1486dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD98u, _value); } while (0);
    // 0x1486e0: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486e4: 0xac20bd60  sw          $zero, -0x42A0($at)
    ctx->pc = 0x1486e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD60u, _value); } while (0);
    // 0x1486e8: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486ec: 0xac20bd64  sw          $zero, -0x429C($at)
    ctx->pc = 0x1486ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD64u, _value); } while (0);
    // 0x1486f0: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486f4: 0xac20bd68  sw          $zero, -0x4298($at)
    ctx->pc = 0x1486f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD68u, _value); } while (0);
    // 0x1486f8: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1486f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x1486fc: 0xac20bd6c  sw          $zero, -0x4294($at)
    ctx->pc = 0x1486fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD6Cu, _value); } while (0);
    // 0x148700: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x148700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x148704: 0xac20bd70  sw          $zero, -0x4290($at)
    ctx->pc = 0x148704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD70u, _value); } while (0);
    // 0x148708: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x148708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    // 0x14870c: 0xac20bd74  sw          $zero, -0x428C($at)
    ctx->pc = 0x14870cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31BD74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31BD74u, _value); } while (0);
    // 0x148710: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x148710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
    ctx->pc = 0x148714u;
}
