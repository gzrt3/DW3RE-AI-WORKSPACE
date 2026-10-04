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

// Function: entry_001125bc
// Address: 0x1125bc - 0x1125c0
void entry_001125bc_0x1125bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125bc_0x1125bc");
#endif

    ctx->pc = 0x1125bcu;

    // 0x1125bc: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x1125bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->pc = 0x1125c0u;
}
