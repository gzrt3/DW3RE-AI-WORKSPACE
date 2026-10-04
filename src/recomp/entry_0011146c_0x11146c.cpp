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

// Function: entry_0011146c
// Address: 0x11146c - 0x111470
void entry_0011146c_0x11146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011146c_0x11146c");
#endif

    ctx->pc = 0x11146cu;

    // 0x11146c: 0x90860026  lbu         $a2, 0x26($a0)
    ctx->pc = 0x11146cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    ctx->pc = 0x111470u;
}
