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

// Function: entry_001a25c0
// Address: 0x1a25c0 - 0x1a25c4
void entry_001a25c0_0x1a25c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25c0_0x1a25c0");
#endif

    ctx->pc = 0x1a25c0u;

    // 0x1a25c0: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1a25c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->pc = 0x1a25c4u;
}
