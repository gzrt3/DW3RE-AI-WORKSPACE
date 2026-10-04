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

// Function: FUN_00171770
// Address: 0x171770 - 0x171778
void FUN_00171770_0x171770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171770_0x171770");
#endif

    ctx->pc = 0x171770u;

    // 0x171770: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x171774: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x171774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x171778u;
}
