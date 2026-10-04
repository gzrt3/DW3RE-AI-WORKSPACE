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

// Function: FUN_001a2d98
// Address: 0x1a2d98 - 0x1a2da4
void FUN_001a2d98_0x1a2d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2d98_0x1a2d98");
#endif

    ctx->pc = 0x1a2d98u;

    // 0x1a2d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2d9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a2d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x1a2da4u;
}
