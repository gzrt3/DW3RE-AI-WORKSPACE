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

// Function: entry_001ef68c
// Address: 0x1ef68c - 0x1ef690
void entry_001ef68c_0x1ef68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef68c_0x1ef68c");
#endif

    ctx->pc = 0x1ef68cu;

    // 0x1ef68c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1ef690u;
}
