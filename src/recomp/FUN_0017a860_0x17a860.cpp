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

// Function: FUN_0017a860
// Address: 0x17a860 - 0x17a86c
void FUN_0017a860_0x17a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a860_0x17a860");
#endif

    ctx->pc = 0x17a860u;

    // 0x17a860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a864: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17a868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x17a86cu;
}
