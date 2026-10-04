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

// Function: entry_00229940
// Address: 0x229940 - 0x22995c
void entry_00229940_0x229940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229940_0x229940");
#endif

    ctx->pc = 0x229940u;

    // 0x229940: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229944: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58A270u));
    // 0x229948: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x22994c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x22994Cu;
    {
        const bool branch_taken_0x22994c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22994c) {
            ctx->pc = 0x22995Cu;
            return;
        }
    }
    ctx->pc = 0x229954u;
    // 0x229954: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229954u;
    {
        const bool branch_taken_0x229954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229954) {
            ctx->pc = 0x229960u;
            return;
        }
    }
    ctx->pc = 0x22995Cu;
}
