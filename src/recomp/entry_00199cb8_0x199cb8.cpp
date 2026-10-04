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

// Function: entry_00199cb8
// Address: 0x199cb8 - 0x199cc0
void entry_00199cb8_0x199cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199cb8_0x199cb8");
#endif

    ctx->pc = 0x199cb8u;

    // 0x199cb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199cbc: 0x24849e68  addiu       $a0, $a0, -0x6198
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942312));
    ctx->pc = 0x199cc0u;
}
