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

// Function: entry_002370fc
// Address: 0x2370fc - 0x237104
void entry_002370fc_0x2370fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002370fc_0x2370fc");
#endif

    ctx->pc = 0x2370fcu;

    // 0x2370fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237100: 0xaf838300  sw          $v1, -0x7D00($gp)
    ctx->pc = 0x237100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 3));
    ctx->pc = 0x237104u;
}
