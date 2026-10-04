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

// Function: FUN_0017f6b0
// Address: 0x17f6b0 - 0x17f6bc
void FUN_0017f6b0_0x17f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f6b0_0x17f6b0");
#endif

    ctx->pc = 0x17f6b0u;

    // 0x17f6b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17f6b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x17f6b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x17f6bcu;
}
