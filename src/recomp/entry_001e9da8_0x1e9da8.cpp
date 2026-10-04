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

// Function: entry_001e9da8
// Address: 0x1e9da8 - 0x1e9db4
void entry_001e9da8_0x1e9da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9da8_0x1e9da8");
#endif

    ctx->pc = 0x1e9da8u;

    // 0x1e9da8: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1e9da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e9dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9db0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1e9db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e9db4u;
}
