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

// Function: entry_0014072c
// Address: 0x14072c - 0x14073c
void entry_0014072c_0x14072c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014072c_0x14072c");
#endif

    ctx->pc = 0x14072cu;

    // 0x14072c: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x14072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140730: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x140734: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140738: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x140738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    ctx->pc = 0x14073cu;
}
