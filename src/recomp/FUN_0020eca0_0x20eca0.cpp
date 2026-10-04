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

// Function: FUN_0020eca0
// Address: 0x20eca0 - 0x20ecc8
void FUN_0020eca0_0x20eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020eca0_0x20eca0");
#endif

    ctx->pc = 0x20eca0u;

    // 0x20eca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20eca4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20eca8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20ecac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20ecb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20ecb4: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x20ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
    // 0x20ecb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20ecbc: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x20ecc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20ecc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20ecc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20ecc8u;
}
