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

// Function: entry_0017fed8
// Address: 0x17fed8 - 0x17fef4
void entry_0017fed8_0x17fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fed8_0x17fed8");
#endif

    switch (ctx->pc) {
        case 0x17fee4u: goto label_17fee4;
        default: break;
    }

    ctx->pc = 0x17fed8u;

label_17fed8:
    // 0x17fed8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x17fedc: 0xc06b2b0  jal         func_1ACAC0
    ctx->pc = 0x17FEDCu;
    SET_GPR_U32(ctx, 31, 0x17FEE4u);
    ctx->pc = 0x17FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEDCu;
    // 0x17fee0: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACAC0u, 0x17FEDCu, 0x17FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEE4u;
label_17fee4:
    // 0x17fee4: 0x0  nop
    ctx->pc = 0x17fee4u;
    // NOP
    // 0x17fee8: 0x0  nop
    ctx->pc = 0x17fee8u;
    // NOP
    // 0x17feec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FEECu;
    {
        const bool branch_taken_0x17feec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17feec) {
            ctx->pc = 0x17FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fed8;
        }
    }
    ctx->pc = 0x17FEF4u;
}
