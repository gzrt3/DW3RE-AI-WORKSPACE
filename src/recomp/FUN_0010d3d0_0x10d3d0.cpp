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

// Function: FUN_0010d3d0
// Address: 0x10d3d0 - 0x10d3f0
void FUN_0010d3d0_0x10d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d3d0_0x10d3d0");
#endif

    ctx->pc = 0x10d3d0u;

    // 0x10d3d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x10d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x10d3d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10d3d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10d3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d3dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x10d3e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10d3e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10d3e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10d3ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10d3ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10d3f0u;
}
