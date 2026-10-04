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

// Function: FUN_00176960
// Address: 0x176960 - 0x176970
void FUN_00176960_0x176960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176960_0x176960");
#endif

    ctx->pc = 0x176960u;

    // 0x176960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x176964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x176968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17696c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x176970u;
}
