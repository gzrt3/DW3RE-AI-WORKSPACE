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

// Function: entry_001a40b0
// Address: 0x1a40b0 - 0x1a40b4
void entry_001a40b0_0x1a40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a40b0_0x1a40b0");
#endif

    ctx->pc = 0x1a40b0u;

    // 0x1a40b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a40b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1a40b4u;
}
