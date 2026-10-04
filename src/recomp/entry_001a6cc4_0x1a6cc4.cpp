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

// Function: entry_001a6cc4
// Address: 0x1a6cc4 - 0x1a6ccc
void entry_001a6cc4_0x1a6cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6cc4_0x1a6cc4");
#endif

    ctx->pc = 0x1a6cc4u;

    // 0x1a6cc4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6cc8: 0x8c44182c  lw          $a0, 0x182C($v0)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x37182Cu));
    ctx->pc = 0x1a6cccu;
}
