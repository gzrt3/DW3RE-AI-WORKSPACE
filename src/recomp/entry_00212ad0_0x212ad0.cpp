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

// Function: entry_00212ad0
// Address: 0x212ad0 - 0x212ae8
void entry_00212ad0_0x212ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212ad0_0x212ad0");
#endif

    switch (ctx->pc) {
        case 0x212ae0u: goto label_212ae0;
        default: break;
    }

    ctx->pc = 0x212ad0u;

    // 0x212ad0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212ad4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x212ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x212ad8: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212AD8u;
    SET_GPR_U32(ctx, 31, 0x212AE0u);
    ctx->pc = 0x212ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AD8u;
    // 0x212adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212AD8u, 0x212AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AE0u;
label_212ae0:
    // 0x212ae0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x212AE0u;
    {
        const bool branch_taken_0x212ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE0u;
        // 0x212ae4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae0) {
            ctx->pc = 0x212BC0u;
            return;
        }
    }
    ctx->pc = 0x212AE8u;
}
