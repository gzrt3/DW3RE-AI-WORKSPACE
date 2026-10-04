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

// Function: entry_001a6090
// Address: 0x1a6090 - 0x1a60a0
void entry_001a6090_0x1a6090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6090_0x1a6090");
#endif

    ctx->pc = 0x1a6090u;

    // 0x1a6090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6094: 0x80697e0  j           func_1A5F80
    ctx->pc = 0x1A6094u;
    ctx->pc = 0x1A6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6094u;
    // 0x1a6098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    FUN_001a5f80_0x1a5f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1A609Cu;
    // 0x1a609c: 0x0  nop
    ctx->pc = 0x1a609cu;
    // NOP
    ctx->pc = 0x1a60a0u;
}
