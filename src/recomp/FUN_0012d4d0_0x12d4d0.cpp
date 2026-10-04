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

// Function: FUN_0012d4d0
// Address: 0x12d4d0 - 0x12d4e0
void FUN_0012d4d0_0x12d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d4d0_0x12d4d0");
#endif

    ctx->pc = 0x12d4d0u;

    // 0x12d4d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12d4d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12d4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12d4d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12d4dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x12d4e0u;
}
