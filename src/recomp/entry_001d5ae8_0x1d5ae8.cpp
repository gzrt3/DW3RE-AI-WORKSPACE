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

// Function: entry_001d5ae8
// Address: 0x1d5ae8 - 0x1d5af8
void entry_001d5ae8_0x1d5ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ae8_0x1d5ae8");
#endif

    switch (ctx->pc) {
        case 0x1d5af0u: goto label_1d5af0;
        default: break;
    }

    ctx->pc = 0x1d5ae8u;

    // 0x1d5ae8: 0xc045460  jal         func_115180
    ctx->pc = 0x1D5AE8u;
    SET_GPR_U32(ctx, 31, 0x1D5AF0u);
    ctx->pc = 0x1D5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AE8u;
    // 0x1d5aec: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x1D5AE8u, 0x1D5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AF0u;
label_1d5af0:
    // 0x1d5af0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF0u;
        // 0x1d5af4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5B1Cu;
            return;
        }
    }
    ctx->pc = 0x1D5AF8u;
}
