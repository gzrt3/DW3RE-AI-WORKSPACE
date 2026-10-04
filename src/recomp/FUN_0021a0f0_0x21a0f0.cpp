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

// Function: FUN_0021a0f0
// Address: 0x21a0f0 - 0x21a100
void FUN_0021a0f0_0x21a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021a0f0_0x21a0f0");
#endif

    ctx->pc = 0x21a0f0u;

    // 0x21a0f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21a0f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21a0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21a100u;
}
