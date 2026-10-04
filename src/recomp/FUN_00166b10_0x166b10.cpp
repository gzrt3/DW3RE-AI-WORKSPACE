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

// Function: FUN_00166b10
// Address: 0x166b10 - 0x166b1c
void FUN_00166b10_0x166b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166b10_0x166b10");
#endif

    ctx->pc = 0x166b10u;

    // 0x166b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x166b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x166b1cu;
}
