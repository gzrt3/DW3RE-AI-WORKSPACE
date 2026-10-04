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

// Function: FUN_00112c40
// Address: 0x112c40 - 0x112c60
void FUN_00112c40_0x112c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112c40_0x112c40");
#endif

    ctx->pc = 0x112c40u;

    // 0x112c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x112c44: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x112c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x112c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x112c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x112c4c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x112c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x112c50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x112c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x112c54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112c58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x112c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x112c5c: 0x2442aec0  addiu       $v0, $v0, -0x5140
    ctx->pc = 0x112c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    ctx->pc = 0x112c60u;
}
