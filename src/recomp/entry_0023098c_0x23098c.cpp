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

// Function: entry_0023098c
// Address: 0x23098c - 0x230998
void entry_0023098c_0x23098c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023098c_0x23098c");
#endif

    ctx->pc = 0x23098cu;

    // 0x23098c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x23098cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x230990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x230990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230994: 0x2610aae0  addiu       $s0, $s0, -0x5520
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
    ctx->pc = 0x230998u;
}
