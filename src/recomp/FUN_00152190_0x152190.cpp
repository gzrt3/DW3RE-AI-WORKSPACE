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

// Function: FUN_00152190
// Address: 0x152190 - 0x1521a0
void FUN_00152190_0x152190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152190_0x152190");
#endif

    ctx->pc = 0x152190u;

    // 0x152190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x152194: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15219c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1521a0u;
}
