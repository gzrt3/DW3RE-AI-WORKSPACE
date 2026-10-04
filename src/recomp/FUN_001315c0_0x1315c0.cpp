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

// Function: FUN_001315c0
// Address: 0x1315c0 - 0x1315d8
void FUN_001315c0_0x1315c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001315c0_0x1315c0");
#endif

    ctx->pc = 0x1315c0u;

    // 0x1315c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1315c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1315c4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1315c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1315c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1315cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1315ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1315d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1315d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1315d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1315d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1315d8u;
}
