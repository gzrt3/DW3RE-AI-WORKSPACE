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

// Function: FUN_00163940
// Address: 0x163940 - 0x163968
void FUN_00163940_0x163940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163940_0x163940");
#endif

    ctx->pc = 0x163940u;

    // 0x163940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x163944: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x163948: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x163948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16394c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x16394cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x163950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x163950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x163954: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x163954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x163958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16395c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x163964: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x163964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x163968u;
}
