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

// Function: FUN_00144150
// Address: 0x144150 - 0x14415c
void FUN_00144150_0x144150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144150_0x144150");
#endif

    ctx->pc = 0x144150u;

    // 0x144150: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x144150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x144154: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x144154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x144158: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x144158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x14415cu;
}
