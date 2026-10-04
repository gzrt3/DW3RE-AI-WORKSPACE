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

// Function: FUN_001f5840
// Address: 0x1f5840 - 0x1f584c
void FUN_001f5840_0x1f5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5840_0x1f5840");
#endif

    ctx->pc = 0x1f5840u;

    // 0x1f5840: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1f5844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1f584cu;
}
