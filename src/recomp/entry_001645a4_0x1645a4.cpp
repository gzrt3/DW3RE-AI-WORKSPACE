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

// Function: entry_001645a4
// Address: 0x1645a4 - 0x1645b4
void entry_001645a4_0x1645a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645a4_0x1645a4");
#endif

    ctx->pc = 0x1645a4u;

    // 0x1645a4: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1645a8: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x1645ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1645b0: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1645b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
    ctx->pc = 0x1645b4u;
}
