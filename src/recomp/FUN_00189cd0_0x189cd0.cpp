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

// Function: FUN_00189cd0
// Address: 0x189cd0 - 0x189ce0
void FUN_00189cd0_0x189cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00189cd0_0x189cd0");
#endif

    ctx->pc = 0x189cd0u;

    // 0x189cd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x189cd4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x189cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x189cd8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x189cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x189cdc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x189ce0u;
}
