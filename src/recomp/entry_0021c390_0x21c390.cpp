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

// Function: entry_0021c390
// Address: 0x21c390 - 0x21c394
void entry_0021c390_0x21c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c390_0x21c390");
#endif

    ctx->pc = 0x21c390u;

    // 0x21c390: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    ctx->pc = 0x21c394u;
}
