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

// Function: FUN_001ea630
// Address: 0x1ea630 - 0x1ea638
void FUN_001ea630_0x1ea630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ea630_0x1ea630");
#endif

    ctx->pc = 0x1ea630u;

    // 0x1ea630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea634: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1ea634u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ea638u;
}
