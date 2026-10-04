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

// Function: FUN_001e10d0
// Address: 0x1e10d0 - 0x1e10e0
void FUN_001e10d0_0x1e10d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e10d0_0x1e10d0");
#endif

    ctx->pc = 0x1e10d0u;

    // 0x1e10d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e10d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1e10dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e10dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e10e0u;
}
