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

// Function: entry_001c01d8
// Address: 0x1c01d8 - 0x1c0200
void entry_001c01d8_0x1c01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c01d8_0x1c01d8");
#endif

    ctx->pc = 0x1c01d8u;

    // 0x1c01d8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c01dc: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A98u));
    // 0x1c01e0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c01e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C01E4u;
    {
        const bool branch_taken_0x1c01e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4u;
        // 0x1c01e8: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e4) {
            ctx->pc = 0x1C01F0u;
            goto label_1c01f0;
        }
    }
    ctx->pc = 0x1C01ECu;
    // 0x1c01ec: 0xac254a98  sw          $a1, 0x4A98($at)
    ctx->pc = 0x1c01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
label_1c01f0:
    // 0x1c01f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01F8u;
    // 0x1c01f8: 0x0  nop
    ctx->pc = 0x1c01f8u;
    // NOP
    // 0x1c01fc: 0x0  nop
    ctx->pc = 0x1c01fcu;
    // NOP
    ctx->pc = 0x1c0200u;
}
