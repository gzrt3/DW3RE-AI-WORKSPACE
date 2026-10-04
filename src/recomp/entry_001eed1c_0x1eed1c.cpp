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

// Function: entry_001eed1c
// Address: 0x1eed1c - 0x1eed40
void entry_001eed1c_0x1eed1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eed1c_0x1eed1c");
#endif

    ctx->pc = 0x1eed1cu;

    // 0x1eed1c: 0x0  nop
    ctx->pc = 0x1eed1cu;
    // NOP
    // 0x1eed20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1eed24: 0x28e90006  slti        $t1, $a3, 0x6
    ctx->pc = 0x1eed24u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eed28: 0x1520ffbf  bnez        $t1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1EED28u;
    {
        const bool branch_taken_0x1eed28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED28u;
        // 0x1eed2c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed28) {
            ctx->pc = 0x1EEC28u;
            return;
        }
    }
    ctx->pc = 0x1EED30u;
    // 0x1eed30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EED38u;
    // 0x1eed38: 0x0  nop
    ctx->pc = 0x1eed38u;
    // NOP
    // 0x1eed3c: 0x0  nop
    ctx->pc = 0x1eed3cu;
    // NOP
    ctx->pc = 0x1eed40u;
}
