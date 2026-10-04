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

// Function: entry_001ef6cc
// Address: 0x1ef6cc - 0x1ef6d0
void entry_001ef6cc_0x1ef6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef6cc_0x1ef6cc");
#endif

    ctx->pc = 0x1ef6ccu;

    // 0x1ef6cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef6ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ef6d0u;
}
