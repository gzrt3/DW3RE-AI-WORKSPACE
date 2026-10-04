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

// Function: FUN_0022fe70
// Address: 0x22fe70 - 0x22fe7c
void FUN_0022fe70_0x22fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022fe70_0x22fe70");
#endif

    ctx->pc = 0x22fe70u;

    // 0x22fe70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22fe74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22fe78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x22fe7cu;
}
