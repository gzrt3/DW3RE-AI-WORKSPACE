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

// Function: FUN_001bbdd0
// Address: 0x1bbdd0 - 0x1bbdec
void FUN_001bbdd0_0x1bbdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bbdd0_0x1bbdd0");
#endif

    ctx->pc = 0x1bbdd0u;

    // 0x1bbdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bbdd4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x1bbdd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bbddc: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1bbddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x1bbde0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bbde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bbde4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bbde8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bbde8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bbdecu;
}
