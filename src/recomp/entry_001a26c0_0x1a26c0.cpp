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

// Function: entry_001a26c0
// Address: 0x1a26c0 - 0x1a26c8
void entry_001a26c0_0x1a26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26c0_0x1a26c0");
#endif

    ctx->pc = 0x1a26c0u;

    // 0x1a26c0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a26c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1a26c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    ctx->pc = 0x1a26c8u;
}
