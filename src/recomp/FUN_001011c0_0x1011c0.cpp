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

// Function: FUN_001011c0
// Address: 0x1011c0 - 0x1011d0
void FUN_001011c0_0x1011c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001011c0_0x1011c0");
#endif

    ctx->pc = 0x1011c0u;

    // 0x1011c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1011c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1011c4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1011c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1011c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1011c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1011cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1011ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1011d0u;
}
