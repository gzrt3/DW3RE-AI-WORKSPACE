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

// Function: FUN_00141880
// Address: 0x141880 - 0x1418a0
void FUN_00141880_0x141880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141880_0x141880");
#endif

    ctx->pc = 0x141880u;

    // 0x141880: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x141884: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x141884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x141888: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x141888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14188c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x141890: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x141890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x141894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x141894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141898: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x141898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14189c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x1418a0u;
}
