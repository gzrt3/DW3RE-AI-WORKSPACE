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

// Function: FUN_001fe8e0
// Address: 0x1fe8e0 - 0x1fe968
void FUN_001fe8e0_0x1fe8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe8e0_0x1fe8e0");
#endif

    ctx->pc = 0x1fe8e0u;

    // 0x1fe8e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe8e4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1fe8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1fe8e8: 0xac204b00  sw          $zero, 0x4B00($at)
    ctx->pc = 0x1fe8e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544B00u, _value); } while (0);
    // 0x1fe8ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe8f0: 0xaf8390a8  sw          $v1, -0x6F58($gp)
    ctx->pc = 0x1fe8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938792), GPR_U32(ctx, 3));
    // 0x1fe8f4: 0xac204ae0  sw          $zero, 0x4AE0($at)
    ctx->pc = 0x1fe8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544AE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544AE0u, _value); } while (0);
    // 0x1fe8f8: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1fe8fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe900: 0xaf8390a4  sw          $v1, -0x6F5C($gp)
    ctx->pc = 0x1fe900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938788), GPR_U32(ctx, 3));
    // 0x1fe904: 0xac204b04  sw          $zero, 0x4B04($at)
    ctx->pc = 0x1fe904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544B04u, _value); } while (0);
    // 0x1fe908: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fe908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fe90c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe910: 0xaf8090b4  sw          $zero, -0x6F4C($gp)
    ctx->pc = 0x1fe910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938804), GPR_U32(ctx, 0));
    // 0x1fe914: 0xac204ae4  sw          $zero, 0x4AE4($at)
    ctx->pc = 0x1fe914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544AE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544AE4u, _value); } while (0);
    // 0x1fe918: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe91c: 0xaf8090b0  sw          $zero, -0x6F50($gp)
    ctx->pc = 0x1fe91cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938800), GPR_U32(ctx, 0));
    // 0x1fe920: 0xac204b08  sw          $zero, 0x4B08($at)
    ctx->pc = 0x1fe920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544B08u, _value); } while (0);
    // 0x1fe924: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe928: 0xaf839090  sw          $v1, -0x6F70($gp)
    ctx->pc = 0x1fe928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
    // 0x1fe92c: 0xac204ae8  sw          $zero, 0x4AE8($at)
    ctx->pc = 0x1fe92cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544AE8u, _value); } while (0);
    // 0x1fe930: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe934: 0xaf8090ac  sw          $zero, -0x6F54($gp)
    ctx->pc = 0x1fe934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938796), GPR_U32(ctx, 0));
    // 0x1fe938: 0xac204b0c  sw          $zero, 0x4B0C($at)
    ctx->pc = 0x1fe938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544B0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544B0Cu, _value); } while (0);
    // 0x1fe93c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe940: 0xaf8090a0  sw          $zero, -0x6F60($gp)
    ctx->pc = 0x1fe940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938784), GPR_U32(ctx, 0));
    // 0x1fe944: 0xac204aec  sw          $zero, 0x4AEC($at)
    ctx->pc = 0x1fe944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544AECu, _value); } while (0);
    // 0x1fe948: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe94c: 0xaf80909c  sw          $zero, -0x6F64($gp)
    ctx->pc = 0x1fe94cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938780), GPR_U32(ctx, 0));
    // 0x1fe950: 0xac204b10  sw          $zero, 0x4B10($at)
    ctx->pc = 0x1fe950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544B10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544B10u, _value); } while (0);
    // 0x1fe954: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1fe958: 0xaf809098  sw          $zero, -0x6F68($gp)
    ctx->pc = 0x1fe958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 0));
    // 0x1fe95c: 0xaf809094  sw          $zero, -0x6F6C($gp)
    ctx->pc = 0x1fe95cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 0));
    // 0x1fe960: 0xac204af0  sw          $zero, 0x4AF0($at)
    ctx->pc = 0x1fe960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x544AF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x544AF0u, _value); } while (0);
    // 0x1fe964: 0xaf80908c  sw          $zero, -0x6F74($gp)
    ctx->pc = 0x1fe964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938764), GPR_U32(ctx, 0));
    ctx->pc = 0x1fe968u;
}
