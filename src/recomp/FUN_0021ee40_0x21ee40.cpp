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

// Function: FUN_0021ee40
// Address: 0x21ee40 - 0x21ee54
void FUN_0021ee40_0x21ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021ee40_0x21ee40");
#endif

    ctx->pc = 0x21ee40u;

    // 0x21ee40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21ee44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21ee44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21ee48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21ee4c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x21ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21ee50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x21ee54u;
}
