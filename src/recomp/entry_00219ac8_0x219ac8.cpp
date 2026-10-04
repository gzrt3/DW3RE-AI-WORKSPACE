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

// Function: entry_00219ac8
// Address: 0x219ac8 - 0x219ad0
void entry_00219ac8_0x219ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219ac8_0x219ac8");
#endif

    ctx->pc = 0x219ac8u;

    // 0x219ac8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x219acc: 0xa0402283  sb          $zero, 0x2283($v0)
    ctx->pc = 0x219accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x219ad0u;
}
