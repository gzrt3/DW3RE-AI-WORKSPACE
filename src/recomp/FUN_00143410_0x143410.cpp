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

// Function: FUN_00143410
// Address: 0x143410 - 0x143420
void FUN_00143410_0x143410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143410_0x143410");
#endif

    ctx->pc = 0x143410u;

    // 0x143410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x143410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x143414: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x143414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x143418: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x143418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14341c: 0x2463aec0  addiu       $v1, $v1, -0x5140
    ctx->pc = 0x14341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946496));
    ctx->pc = 0x143420u;
}
