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

// Function: entry_0018176c
// Address: 0x18176c - 0x181774
void entry_0018176c_0x18176c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018176c_0x18176c");
#endif

    ctx->pc = 0x18176cu;

    // 0x18176c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181770: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x181770u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->pc = 0x181774u;
}
