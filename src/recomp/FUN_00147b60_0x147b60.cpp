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

// Function: FUN_00147b60
// Address: 0x147b60 - 0x147b6c
void FUN_00147b60_0x147b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00147b60_0x147b60");
#endif

    ctx->pc = 0x147b60u;

    // 0x147b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x147b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x147b64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x147b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147b68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x147b6cu;
}
