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

// Function: entry_001c4f90
// Address: 0x1c4f90 - 0x1c4fb0
void entry_001c4f90_0x1c4f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f90_0x1c4f90");
#endif

    ctx->pc = 0x1c4f90u;

    // 0x1c4f90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c4f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c4f94: 0x28c3007f  slti        $v1, $a2, 0x7F
    ctx->pc = 0x1c4f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x1c4f98: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C4F98u;
    {
        const bool branch_taken_0x1c4f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F98u;
        // 0x1c4f9c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f98) {
            ctx->pc = 0x1C4F64u;
            return;
        }
    }
    ctx->pc = 0x1C4FA0u;
    // 0x1c4fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4FA8u;
    // 0x1c4fa8: 0x0  nop
    ctx->pc = 0x1c4fa8u;
    // NOP
    // 0x1c4fac: 0x0  nop
    ctx->pc = 0x1c4facu;
    // NOP
    ctx->pc = 0x1c4fb0u;
}
