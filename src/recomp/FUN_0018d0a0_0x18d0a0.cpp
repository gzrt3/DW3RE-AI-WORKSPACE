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

// Function: FUN_0018d0a0
// Address: 0x18d0a0 - 0x18d0a8
void FUN_0018d0a0_0x18d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018d0a0_0x18d0a0");
#endif

    ctx->pc = 0x18d0a0u;

    // 0x18d0a0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x18d0a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x18d0a8u;
}
