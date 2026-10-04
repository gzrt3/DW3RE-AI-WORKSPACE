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

// Function: FUN_001fb070
// Address: 0x1fb070 - 0x1fb084
void FUN_001fb070_0x1fb070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb070_0x1fb070");
#endif

    ctx->pc = 0x1fb070u;

    // 0x1fb070: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1fb074: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fb074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1fb078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fb078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fb07c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fb07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1fb080: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fb080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x1fb084u;
}
