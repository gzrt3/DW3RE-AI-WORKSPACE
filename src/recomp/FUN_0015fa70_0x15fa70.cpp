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

// Function: FUN_0015fa70
// Address: 0x15fa70 - 0x15fa8c
void FUN_0015fa70_0x15fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fa70_0x15fa70");
#endif

    ctx->pc = 0x15fa70u;

    // 0x15fa70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15fa74: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x15fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x15fa78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15fa7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15fa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fa80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15fa84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15fa88: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x15fa8cu;
}
