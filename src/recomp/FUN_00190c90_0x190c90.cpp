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

// Function: FUN_00190c90
// Address: 0x190c90 - 0x190c9c
void FUN_00190c90_0x190c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190c90_0x190c90");
#endif

    ctx->pc = 0x190c90u;

    // 0x190c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x190c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x190c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x190c98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x190c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x190c9cu;
}
