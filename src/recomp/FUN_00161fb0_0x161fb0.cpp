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

// Function: FUN_00161fb0
// Address: 0x161fb0 - 0x161fc0
void FUN_00161fb0_0x161fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00161fb0_0x161fb0");
#endif

    ctx->pc = 0x161fb0u;

    // 0x161fb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x161fb4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x161fb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x161fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x161fbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x161fc0u;
}
