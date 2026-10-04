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

// Function: entry_001a3720
// Address: 0x1a3720 - 0x1a3740
void entry_001a3720_0x1a3720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3720_0x1a3720");
#endif

    switch (ctx->pc) {
        case 0x1a3728u: goto label_1a3728;
        default: break;
    }

    ctx->pc = 0x1a3720u;

    // 0x1a3720: 0xc067ed6  jal         func_19FB58
    ctx->pc = 0x1A3720u;
    SET_GPR_U32(ctx, 31, 0x1A3728u);
    ctx->pc = 0x1A3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3720u;
    // 0x1a3724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB58u, 0x1A3720u, 0x1A3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1a3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1a372c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a372cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3734: 0x8068dd0  j           func_1A3740
    ctx->pc = 0x1A3734u;
    ctx->pc = 0x1A3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3734u;
    // 0x1a3738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3740u;
    entry_001a3740_0x1a3740(rdram, ctx, runtime); return;
    ctx->pc = 0x1A373Cu;
    // 0x1a373c: 0x0  nop
    ctx->pc = 0x1a373cu;
    // NOP
    ctx->pc = 0x1a3740u;
}
