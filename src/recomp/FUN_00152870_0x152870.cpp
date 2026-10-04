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

// Function: FUN_00152870
// Address: 0x152870 - 0x152880
void FUN_00152870_0x152870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152870_0x152870");
#endif

    ctx->pc = 0x152870u;

    // 0x152870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152874: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x152878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15287c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    ctx->pc = 0x152880u;
}
