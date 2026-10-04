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

// Function: FUN_001ead70
// Address: 0x1ead70 - 0x1ead84
void FUN_001ead70_0x1ead70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ead70_0x1ead70");
#endif

    ctx->pc = 0x1ead70u;

    // 0x1ead70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ead74: 0x2082fffc  addi        $v0, $a0, -0x4
    ctx->pc = 0x1ead74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1ead78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ead78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ead7c: 0x2c41000f  sltiu       $at, $v0, 0xF
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1ead80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ead80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1ead84u;
}
