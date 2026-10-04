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

// Function: FUN_001a8560
// Address: 0x1a8560 - 0x1a856c
void FUN_001a8560_0x1a8560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8560_0x1a8560");
#endif

    ctx->pc = 0x1a8560u;

    // 0x1a8560: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a8560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a8564: 0x8069210  j           func_1A4840
    ctx->pc = 0x1A8564u;
    ctx->pc = 0x1A8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8564u;
    // 0x1a8568: 0x8c445bfc  lw          $a0, 0x5BFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    FUN_001a4840_0x1a4840(rdram, ctx, runtime); return;
    ctx->pc = 0x1A856Cu;
}
