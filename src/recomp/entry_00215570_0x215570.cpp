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

// Function: entry_00215570
// Address: 0x215570 - 0x2155a8
void entry_00215570_0x215570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215570_0x215570");
#endif

    ctx->pc = 0x215570u;

    // 0x215570: 0xaf86920c  sw          $a2, -0x6DF4($gp)
    ctx->pc = 0x215570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 6));
    // 0x215574: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215578: 0xaf859204  sw          $a1, -0x6DFC($gp)
    ctx->pc = 0x215578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
    // 0x21557c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21557cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215580: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215584: 0xaf869200  sw          $a2, -0x6E00($gp)
    ctx->pc = 0x215584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 6));
    // 0x215588: 0xac25790c  sw          $a1, 0x790C($at)
    ctx->pc = 0x215588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    // 0x21558c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215590: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215594: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x215594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x215598: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21559c: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x21559cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x2155a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155a4: 0xac267908  sw          $a2, 0x7908($at)
    ctx->pc = 0x2155a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587908u, _value); } while (0);
    ctx->pc = 0x2155a8u;
}
