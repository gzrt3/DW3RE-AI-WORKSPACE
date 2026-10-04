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

// Function: FUN_00167110
// Address: 0x167110 - 0x167128
void FUN_00167110_0x167110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167110_0x167110");
#endif

    ctx->pc = 0x167110u;

    // 0x167110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x167114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16711c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x167128u;
}
