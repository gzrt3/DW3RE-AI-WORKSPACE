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

// Function: FUN_001f5270
// Address: 0x1f5270 - 0x1f5290
void FUN_001f5270_0x1f5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5270_0x1f5270");
#endif

    ctx->pc = 0x1f5270u;

    // 0x1f5270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5274: 0x3c03c0c0  lui         $v1, 0xC0C0
    ctx->pc = 0x1f5274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
    // 0x1f5278: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f527c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1f527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1f5280: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f5284: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f5284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f528c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    ctx->pc = 0x1f5290u;
}
