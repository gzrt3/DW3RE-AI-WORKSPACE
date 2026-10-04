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

// Function: FUN_001ebaf0
// Address: 0x1ebaf0 - 0x1ebaf4
void FUN_001ebaf0_0x1ebaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebaf0_0x1ebaf0");
#endif

    ctx->pc = 0x1ebaf0u;

    // 0x1ebaf0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    ctx->pc = 0x1ebaf4u;
}
