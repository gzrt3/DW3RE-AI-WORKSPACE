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

// Function: FUN_001ad4a8
// Address: 0x1ad4a8 - 0x1ad4b4
void FUN_001ad4a8_0x1ad4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad4a8_0x1ad4a8");
#endif

    ctx->pc = 0x1ad4a8u;

    // 0x1ad4a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1ad4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1ad4ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ad4b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x1ad4b4u;
}
