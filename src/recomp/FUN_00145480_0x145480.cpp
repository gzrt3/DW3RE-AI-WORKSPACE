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

// Function: FUN_00145480
// Address: 0x145480 - 0x145494
void FUN_00145480_0x145480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145480_0x145480");
#endif

    ctx->pc = 0x145480u;

    // 0x145480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x145480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x145484: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145488: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x145488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14548c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x14548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x145490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x145494u;
}
