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

// Function: FUN_001b5460
// Address: 0x1b5460 - 0x1b5474
void FUN_001b5460_0x1b5460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5460_0x1b5460");
#endif

    ctx->pc = 0x1b5460u;

    // 0x1b5460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b546c: 0x806c9e6  j           func_1B2798
    ctx->pc = 0x1B546Cu;
    ctx->pc = 0x1B5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B546Cu;
    // 0x1b5470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2798u;
    FUN_001b2798_0x1b2798(rdram, ctx, runtime); return;
    ctx->pc = 0x1B5474u;
}
