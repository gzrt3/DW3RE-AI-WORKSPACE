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

// Function: entry_0020ee00
// Address: 0x20ee00 - 0x20ee08
void entry_0020ee00_0x20ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ee00_0x20ee00");
#endif

    ctx->pc = 0x20ee00u;

    // 0x20ee00: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20ee04: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x20ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x20ee08u;
}
