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

// Function: entry_002014c8
// Address: 0x2014c8 - 0x2014f0
void entry_002014c8_0x2014c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002014c8_0x2014c8");
#endif

    ctx->pc = 0x2014c8u;

    // 0x2014c8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2014c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2014cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2014d0: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2014d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2014d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2014D4u;
    {
        const bool branch_taken_0x2014d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014d4) {
            ctx->pc = 0x2014E0u;
            goto label_2014e0;
        }
    }
    ctx->pc = 0x2014DCu;
    // 0x2014dc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2014e0:
    // 0x2014e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2014E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E0u;
        // 0x2014e4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2014E8u;
    // 0x2014e8: 0x0  nop
    ctx->pc = 0x2014e8u;
    // NOP
    // 0x2014ec: 0x0  nop
    ctx->pc = 0x2014ecu;
    // NOP
    ctx->pc = 0x2014f0u;
}
