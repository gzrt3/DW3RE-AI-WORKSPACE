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

// Function: FUN_0015db70
// Address: 0x15db70 - 0x15db80
void FUN_0015db70_0x15db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015db70_0x15db70");
#endif

    ctx->pc = 0x15db70u;

    // 0x15db70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15db74: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x15db78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15db7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x15db80u;
}
