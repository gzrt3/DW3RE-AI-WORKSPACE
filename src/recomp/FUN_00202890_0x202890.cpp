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

// Function: FUN_00202890
// Address: 0x202890 - 0x2028b4
void FUN_00202890_0x202890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202890_0x202890");
#endif

    ctx->pc = 0x202890u;

    // 0x202890: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x202890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x202894: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x202898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x202898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20289c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2028a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2028a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2028a4: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x2028a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x2028a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2028a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2028ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2028acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2028b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x2028b4u;
}
