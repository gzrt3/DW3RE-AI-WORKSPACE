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

// Function: entry_002157e0
// Address: 0x2157e0 - 0x215814
void entry_002157e0_0x2157e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002157e0_0x2157e0");
#endif

    ctx->pc = 0x2157e0u;

    // 0x2157e0: 0xaf84920c  sw          $a0, -0x6DF4($gp)
    ctx->pc = 0x2157e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 4));
    // 0x2157e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157e8: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x2157e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2157ec: 0xaf879204  sw          $a3, -0x6DFC($gp)
    ctx->pc = 0x2157ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 7));
    // 0x2157f0: 0xaf849200  sw          $a0, -0x6E00($gp)
    ctx->pc = 0x2157f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 4));
    // 0x2157f4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2157f8: 0xac24790c  sw          $a0, 0x790C($at)
    ctx->pc = 0x2157f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    // 0x2157fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215800: 0xac207900  sw          $zero, 0x7900($at)
    ctx->pc = 0x215800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x215804: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215808: 0xac207904  sw          $zero, 0x7904($at)
    ctx->pc = 0x215808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x21580c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21580cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215810: 0xac207908  sw          $zero, 0x7908($at)
    ctx->pc = 0x215810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587908u, _value); } while (0);
    ctx->pc = 0x215814u;
}
