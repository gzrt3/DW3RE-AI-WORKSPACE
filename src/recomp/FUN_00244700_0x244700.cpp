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

// Function: FUN_00244700
// Address: 0x244700 - 0x244708
void FUN_00244700_0x244700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00244700_0x244700");
#endif

    ctx->pc = 0x244700u;

    // 0x244700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x244704: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x244704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    ctx->pc = 0x244708u;
}
