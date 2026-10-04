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

// Function: FUN_001333e0
// Address: 0x1333e0 - 0x1333f8
void FUN_001333e0_0x1333e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001333e0_0x1333e0");
#endif

    ctx->pc = 0x1333e0u;

    // 0x1333e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1333e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1333e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1333e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1333e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1333e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1333ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1333ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1333f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1333f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1333f4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1333f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    ctx->pc = 0x1333f8u;
}
