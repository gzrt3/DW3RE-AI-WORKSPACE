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

// Function: FUN_001bce40
// Address: 0x1bce40 - 0x1bce50
void FUN_001bce40_0x1bce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bce40_0x1bce40");
#endif

    ctx->pc = 0x1bce40u;

    // 0x1bce40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bce44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bce4c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1bce50u;
}
