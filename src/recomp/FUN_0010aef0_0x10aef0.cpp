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

// Function: FUN_0010aef0
// Address: 0x10aef0 - 0x10af00
void FUN_0010aef0_0x10aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010aef0_0x10aef0");
#endif

    ctx->pc = 0x10aef0u;

    // 0x10aef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10aef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10aef8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10aefc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x10af00u;
}
