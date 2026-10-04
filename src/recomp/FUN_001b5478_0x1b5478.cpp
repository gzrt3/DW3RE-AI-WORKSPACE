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

// Function: FUN_001b5478
// Address: 0x1b5478 - 0x1b548c
void FUN_001b5478_0x1b5478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5478_0x1b5478");
#endif

    ctx->pc = 0x1b5478u;

    // 0x1b5478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b547c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5484: 0x806caf6  j           func_1B2BD8
    ctx->pc = 0x1B5484u;
    ctx->pc = 0x1B5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5484u;
    // 0x1b5488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2BD8u;
    FUN_001b2bd8_0x1b2bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B548Cu;
}
