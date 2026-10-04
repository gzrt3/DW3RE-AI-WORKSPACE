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

// Function: FUN_00196d40
// Address: 0x196d40 - 0x196d54
void FUN_00196d40_0x196d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196d40_0x196d40");
#endif

    ctx->pc = 0x196d40u;

    // 0x196d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x196d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x196d44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x196d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x196d48: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x196d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x196d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x196d50: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x196d50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    ctx->pc = 0x196d54u;
}
