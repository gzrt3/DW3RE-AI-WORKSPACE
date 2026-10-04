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

// Function: FUN_00116490
// Address: 0x116490 - 0x1164a4
void FUN_00116490_0x116490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116490_0x116490");
#endif

    ctx->pc = 0x116490u;

    // 0x116490: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x116490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x116494: 0xaf8380d8  sw          $v1, -0x7F28($gp)
    ctx->pc = 0x116494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 3));
    // 0x116498: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x116498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11649c: 0xaf8380dc  sw          $v1, -0x7F24($gp)
    ctx->pc = 0x11649cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 3));
    // 0x1164a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1164a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1164a4u;
}
