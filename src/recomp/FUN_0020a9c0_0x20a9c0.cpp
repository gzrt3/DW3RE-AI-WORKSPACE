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

// Function: FUN_0020a9c0
// Address: 0x20a9c0 - 0x20a9d0
void FUN_0020a9c0_0x20a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a9c0_0x20a9c0");
#endif

    ctx->pc = 0x20a9c0u;

    // 0x20a9c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20a9c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20a9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20a9d0u;
}
