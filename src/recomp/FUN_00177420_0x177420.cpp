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

// Function: FUN_00177420
// Address: 0x177420 - 0x177438
void FUN_00177420_0x177420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177420_0x177420");
#endif

    ctx->pc = 0x177420u;

    // 0x177420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177424: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x177428: 0xac2351f0  sw          $v1, 0x51F0($at)
    ctx->pc = 0x177428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3651F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3651F0u, _value); } while (0);
    // 0x17742c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x177430: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x177430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334900u));
    // 0x177434: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x177438u;
}
