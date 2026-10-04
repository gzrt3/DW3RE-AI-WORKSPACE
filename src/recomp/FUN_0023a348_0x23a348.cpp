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

// Function: FUN_0023a348
// Address: 0x23a348 - 0x23a358
void FUN_0023a348_0x23a348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a348_0x23a348");
#endif

    ctx->pc = 0x23a348u;

    // 0x23a348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a350: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x23a350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a354: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A354u;
    {
        const bool branch_taken_0x23a354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a354) {
            ctx->pc = 0x23A374u;
            return;
        }
    }
    ctx->pc = 0x23A35Cu;
}
