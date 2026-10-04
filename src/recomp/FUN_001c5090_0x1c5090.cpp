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

// Function: FUN_001c5090
// Address: 0x1c5090 - 0x1c50a4
void FUN_001c5090_0x1c5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5090_0x1c5090");
#endif

    ctx->pc = 0x1c5090u;

    // 0x1c5090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c5094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c5094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c5098: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c509c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c50a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c50a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c50a4u;
}
