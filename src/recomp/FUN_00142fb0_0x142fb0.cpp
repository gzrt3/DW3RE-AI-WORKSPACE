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

// Function: FUN_00142fb0
// Address: 0x142fb0 - 0x142fb8
void FUN_00142fb0_0x142fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142fb0_0x142fb0");
#endif

    ctx->pc = 0x142fb0u;

    // 0x142fb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x142fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x142fb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x142fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x142fb8u;
}
