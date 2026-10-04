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

// Function: FUN_001ebb00
// Address: 0x1ebb00 - 0x1ebb0c
void FUN_001ebb00_0x1ebb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebb00_0x1ebb00");
#endif

    ctx->pc = 0x1ebb00u;

    // 0x1ebb00: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebb04: 0x8c22d718  lw          $v0, -0x28E8($at)
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BD718u));
    // 0x1ebb08: 0x401027  not         $v0, $v0
    ctx->pc = 0x1ebb08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    ctx->pc = 0x1ebb0cu;
}
