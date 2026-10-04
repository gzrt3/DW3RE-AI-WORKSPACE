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

// Function: FUN_00170b10
// Address: 0x170b10 - 0x170b24
void FUN_00170b10_0x170b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170b10_0x170b10");
#endif

    ctx->pc = 0x170b10u;

    // 0x170b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170b14: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x170b18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170b1c: 0x24424530  addiu       $v0, $v0, 0x4530
    ctx->pc = 0x170b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
    // 0x170b20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x170b24u;
}
