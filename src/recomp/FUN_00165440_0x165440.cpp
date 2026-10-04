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

// Function: FUN_00165440
// Address: 0x165440 - 0x165468
void FUN_00165440_0x165440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165440_0x165440");
#endif

    ctx->pc = 0x165440u;

    // 0x165440: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x165444: 0xaf8086c0  sw          $zero, -0x7940($gp)
    ctx->pc = 0x165444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936256), GPR_U32(ctx, 0));
    // 0x165448: 0xac203ee0  sw          $zero, 0x3EE0($at)
    ctx->pc = 0x165448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x363EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x363EE0u, _value); } while (0);
    // 0x16544c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x165450: 0xaf8086bc  sw          $zero, -0x7944($gp)
    ctx->pc = 0x165450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 0));
    // 0x165454: 0xac203ee4  sw          $zero, 0x3EE4($at)
    ctx->pc = 0x165454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x363EE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x363EE4u, _value); } while (0);
    // 0x165458: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x165458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16545c: 0xa38086a0  sb          $zero, -0x7960($gp)
    ctx->pc = 0x16545cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 0));
    // 0x165460: 0xac203ee8  sw          $zero, 0x3EE8($at)
    ctx->pc = 0x165460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x363EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x363EE8u, _value); } while (0);
    // 0x165464: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x165464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    ctx->pc = 0x165468u;
}
