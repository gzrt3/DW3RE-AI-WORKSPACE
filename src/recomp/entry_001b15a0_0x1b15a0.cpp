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

// Function: entry_001b15a0
// Address: 0x1b15a0 - 0x1b15bc
void entry_001b15a0_0x1b15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15a0_0x1b15a0");
#endif

    switch (ctx->pc) {
        case 0x1b15acu: goto label_1b15ac;
        default: break;
    }

    ctx->pc = 0x1b15a0u;

    // 0x1b15a0: 0x3c140029  lui         $s4, 0x29
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)41 << 16));
    // 0x1b15a4: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B15A4u;
    SET_GPR_U32(ctx, 31, 0x1B15ACu);
    ctx->pc = 0x1B15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15A4u;
    // 0x1b15a8: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B15A4u, 0x1B15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15ACu;
label_1b15ac:
    // 0x1b15ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B15ACu;
    {
        const bool branch_taken_0x1b15ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ACu;
        // 0x1b15b0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15ac) {
            ctx->pc = 0x1B15BCu;
            return;
        }
    }
    ctx->pc = 0x1B15B4u;
    // 0x1b15b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B15B4u;
    {
        const bool branch_taken_0x1b15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B4u;
        // 0x1b15b8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b4) {
            ctx->pc = 0x1B1618u;
            return;
        }
    }
    ctx->pc = 0x1B15BCu;
}
