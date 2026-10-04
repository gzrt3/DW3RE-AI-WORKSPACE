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

// Function: entry_001cbb80
// Address: 0x1cbb80 - 0x1cbba8
void entry_001cbb80_0x1cbb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb80_0x1cbb80");
#endif

    switch (ctx->pc) {
        case 0x1cbba0u: goto label_1cbba0;
        default: break;
    }

    ctx->pc = 0x1cbb80u;

    // 0x1cbb80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbb84: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1cbb88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbb8c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbb94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbb98: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBB98u;
    SET_GPR_U32(ctx, 31, 0x1CBBA0u);
    ctx->pc = 0x1CBB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB98u;
    // 0x1cbb9c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBB98u, 0x1CBBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBA0u;
label_1cbba0:
    // 0x1cbba0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CBBA0u;
    {
        const bool branch_taken_0x1cbba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA0u;
        // 0x1cbba4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba0) {
            ctx->pc = 0x1CBC28u;
            return;
        }
    }
    ctx->pc = 0x1CBBA8u;
}
