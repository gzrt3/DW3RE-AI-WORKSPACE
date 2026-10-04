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

// Function: FUN_0012b2e0
// Address: 0x12b2e0 - 0x12b2f0
void FUN_0012b2e0_0x12b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b2e0_0x12b2e0");
#endif

    ctx->pc = 0x12b2e0u;

    // 0x12b2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b2e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12b2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12b2e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12b2ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x12b2f0u;
}
