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

// Function: entry_001644bc
// Address: 0x1644bc - 0x1644cc
void entry_001644bc_0x1644bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644bc_0x1644bc");
#endif

    ctx->pc = 0x1644bcu;

    // 0x1644bc: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1644c0: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
    // 0x1644c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1644c8: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1644c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
    ctx->pc = 0x1644ccu;
}
