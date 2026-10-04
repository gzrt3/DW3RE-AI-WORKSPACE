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

// Function: entry_0022fc50
// Address: 0x22fc50 - 0x22fc6c
void entry_0022fc50_0x22fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fc50_0x22fc50");
#endif

    ctx->pc = 0x22fc50u;

    // 0x22fc50: 0xac200484  sw          $zero, 0x484($at)
    ctx->pc = 0x22fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 0));
    // 0x22fc54: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc58: 0xac200480  sw          $zero, 0x480($at)
    ctx->pc = 0x22fc58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x290480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290480u, _value); } while (0);
    // 0x22fc5c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc60: 0xac20047c  sw          $zero, 0x47C($at)
    ctx->pc = 0x22fc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x29047Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29047Cu, _value); } while (0);
    // 0x22fc64: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc68: 0xac200478  sw          $zero, 0x478($at)
    ctx->pc = 0x22fc68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x290478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290478u, _value); } while (0);
    ctx->pc = 0x22fc6cu;
}
