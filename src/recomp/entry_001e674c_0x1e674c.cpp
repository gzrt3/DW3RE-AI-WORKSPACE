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

// Function: entry_001e674c
// Address: 0x1e674c - 0x1e6754
void entry_001e674c_0x1e674c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e674c_0x1e674c");
#endif

    ctx->pc = 0x1e674cu;

    // 0x1e674c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6750: 0xaf828e50  sw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
    ctx->pc = 0x1e6754u;
}
