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

// Function: FUN_0014f7d0
// Address: 0x14f7d0 - 0x14f7f4
void FUN_0014f7d0_0x14f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f7d0_0x14f7d0");
#endif

    ctx->pc = 0x14f7d0u;

    // 0x14f7d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14f7d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f7d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14f7dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f7e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14f7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14f7e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f7e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14f7ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14f7f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14f7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14f7f4u;
}
