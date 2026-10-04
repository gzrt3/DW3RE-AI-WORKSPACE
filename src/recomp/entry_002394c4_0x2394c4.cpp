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

// Function: entry_002394c4
// Address: 0x2394c4 - 0x2394c8
void entry_002394c4_0x2394c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002394c4_0x2394c4");
#endif

    ctx->pc = 0x2394c4u;

    // 0x2394c4: 0x2662e3a0  addiu       $v0, $s3, -0x1C60
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960032));
    ctx->pc = 0x2394c8u;
}
