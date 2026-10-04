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

// Function: entry_001a8df8
// Address: 0x1a8df8 - 0x1a8e00
void entry_001a8df8_0x1a8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8df8_0x1a8df8");
#endif

    ctx->pc = 0x1a8df8u;

    // 0x1a8df8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1a8dfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a8dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1a8e00u;
}
