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

// Function: entry_001b30f8
// Address: 0x1b30f8 - 0x1b3100
void entry_001b30f8_0x1b30f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b30f8_0x1b30f8");
#endif

    ctx->pc = 0x1b30f8u;

    // 0x1b30f8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b30fc: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x1b30fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    ctx->pc = 0x1b3100u;
}
