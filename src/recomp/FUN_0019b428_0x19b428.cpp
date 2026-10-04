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

// Function: FUN_0019b428
// Address: 0x19b428 - 0x19b434
void FUN_0019b428_0x19b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b428_0x19b428");
#endif

    ctx->pc = 0x19b428u;

    // 0x19b428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b42c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19b430: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x19b434u;
}
