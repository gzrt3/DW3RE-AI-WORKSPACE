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

// Function: FUN_001719e0
// Address: 0x1719e0 - 0x1719f0
void FUN_001719e0_0x1719e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001719e0_0x1719e0");
#endif

    ctx->pc = 0x1719e0u;

    // 0x1719e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1719e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1719e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1719e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1719e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1719e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1719ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1719ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1719f0u;
}
