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

// Function: entry_001e461c
// Address: 0x1e461c - 0x1e462c
void entry_001e461c_0x1e461c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e461c_0x1e461c");
#endif

    ctx->pc = 0x1e461cu;

    // 0x1e461c: 0x0  nop
    ctx->pc = 0x1e461cu;
    // NOP
    // 0x1e4620: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e4624: 0xdc232928  ld          $v1, 0x2928($at)
    ctx->pc = 0x1e4624u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4B2928u));
    // 0x1e4628: 0xfce30ed0  sd          $v1, 0xED0($a3)
    ctx->pc = 0x1e4628u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
    ctx->pc = 0x1e462cu;
}
