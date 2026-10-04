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

// Function: entry_00156f1c
// Address: 0x156f1c - 0x156f30
void entry_00156f1c_0x156f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f1c_0x156f1c");
#endif

    ctx->pc = 0x156f1cu;

    // 0x156f1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x156f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x156f24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f28: 0x8c3821  addu        $a3, $a0, $t4
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x156f2c: 0x8d3021  addu        $a2, $a0, $t5
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    ctx->pc = 0x156f30u;
}
