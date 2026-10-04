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

// Function: FUN_0018a140
// Address: 0x18a140 - 0x18a148
void FUN_0018a140_0x18a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a140_0x18a140");
#endif

    ctx->pc = 0x18a140u;

    // 0x18a140: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18a144: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x18a148u;
}
