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

// Function: FUN_001041c0
// Address: 0x1041c0 - 0x1041d0
void FUN_001041c0_0x1041c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001041c0_0x1041c0");
#endif

    ctx->pc = 0x1041c0u;

    // 0x1041c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1041c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1041c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1041c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1041c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1041c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1041cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1041ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1041d0u;
}
