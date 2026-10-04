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

// Function: entry_001b0edc
// Address: 0x1b0edc - 0x1b0eec
void entry_001b0edc_0x1b0edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0edc_0x1b0edc");
#endif

    ctx->pc = 0x1b0edcu;

    // 0x1b0edc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0EDCu;
    {
        const bool branch_taken_0x1b0edc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EDCu;
        // 0x1b0ee0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0edc) {
            ctx->pc = 0x1B0EECu;
            return;
        }
    }
    ctx->pc = 0x1B0EE4u;
    // 0x1b0ee4: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0EE4u;
    SET_GPR_U32(ctx, 31, 0x1B0EECu);
    ctx->pc = 0x1B0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EE4u;
    // 0x1b0ee8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0EE4u, 0x1B0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EECu;
}
