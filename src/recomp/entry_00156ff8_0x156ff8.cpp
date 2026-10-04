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

// Function: entry_00156ff8
// Address: 0x156ff8 - 0x15701c
void entry_00156ff8_0x156ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ff8_0x156ff8");
#endif

    ctx->pc = 0x156ff8u;

    // 0x156ff8: 0xdf8988c8  ld          $t1, -0x7738($gp)
    ctx->pc = 0x156ff8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x156ffc: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x156ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x157000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x157000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157008: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x157008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x15700c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x157010: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x157010u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x157014: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x157018: 0xad090144  sw          $t1, 0x144($t0)
    ctx->pc = 0x157018u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 324), GPR_U32(ctx, 9));
    ctx->pc = 0x15701cu;
}
