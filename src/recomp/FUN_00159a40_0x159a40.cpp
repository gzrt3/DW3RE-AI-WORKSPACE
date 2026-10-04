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

// Function: FUN_00159a40
// Address: 0x159a40 - 0x159a4c
void FUN_00159a40_0x159a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159a40_0x159a40");
#endif

    ctx->pc = 0x159a40u;

    // 0x159a40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159a44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x159a48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x159a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x159a4cu;
}
