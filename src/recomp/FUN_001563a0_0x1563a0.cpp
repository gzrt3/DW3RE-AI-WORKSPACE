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

// Function: FUN_001563a0
// Address: 0x1563a0 - 0x1563a8
void FUN_001563a0_0x1563a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001563a0_0x1563a0");
#endif

    ctx->pc = 0x1563a0u;

    // 0x1563a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1563a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1563a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1563a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x1563a8u;
}
