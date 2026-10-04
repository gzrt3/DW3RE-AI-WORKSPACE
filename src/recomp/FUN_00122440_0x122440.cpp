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

// Function: FUN_00122440
// Address: 0x122440 - 0x122450
void FUN_00122440_0x122440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122440_0x122440");
#endif

    ctx->pc = 0x122440u;

    // 0x122440: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x122440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x122444: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x122444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x122448: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12244c: 0x2463fb40  addiu       $v1, $v1, -0x4C0
    ctx->pc = 0x12244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966080));
    ctx->pc = 0x122450u;
}
