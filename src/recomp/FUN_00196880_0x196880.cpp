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

// Function: FUN_00196880
// Address: 0x196880 - 0x19688c
void FUN_00196880_0x196880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196880_0x196880");
#endif

    ctx->pc = 0x196880u;

    // 0x196880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x196884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x196888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x19688cu;
}
