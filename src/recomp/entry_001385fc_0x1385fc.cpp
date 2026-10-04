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

// Function: entry_001385fc
// Address: 0x1385fc - 0x13860c
void entry_001385fc_0x1385fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385fc_0x1385fc");
#endif

    ctx->pc = 0x1385fcu;

    // 0x1385fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138600: 0xaf858508  sw          $a1, -0x7AF8($gp)
    ctx->pc = 0x138600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 5));
    // 0x138604: 0xaf86850c  sw          $a2, -0x7AF4($gp)
    ctx->pc = 0x138604u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 6));
    // 0x138608: 0xaf838504  sw          $v1, -0x7AFC($gp)
    ctx->pc = 0x138608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 3));
    ctx->pc = 0x13860cu;
}
