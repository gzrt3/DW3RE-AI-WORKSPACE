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

// Function: entry_00198c74
// Address: 0x198c74 - 0x198c78
void entry_00198c74_0x198c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c74_0x198c74");
#endif

    ctx->pc = 0x198c74u;

    // 0x198c74: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x198c74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
    ctx->pc = 0x198c78u;
}
