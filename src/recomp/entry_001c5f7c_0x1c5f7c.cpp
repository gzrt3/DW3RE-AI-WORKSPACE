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

// Function: entry_001c5f7c
// Address: 0x1c5f7c - 0x1c5fa0
void entry_001c5f7c_0x1c5f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f7c_0x1c5f7c");
#endif

    ctx->pc = 0x1c5f7cu;

    // 0x1c5f7c: 0x0  nop
    ctx->pc = 0x1c5f7cu;
    // NOP
    // 0x1c5f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c5f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c5f84: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x1c5f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c5f88: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C5F88u;
    {
        const bool branch_taken_0x1c5f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f88) {
            ctx->pc = 0x1C5F3Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F90u;
    // 0x1c5f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F98u;
    // 0x1c5f98: 0x0  nop
    ctx->pc = 0x1c5f98u;
    // NOP
    // 0x1c5f9c: 0x0  nop
    ctx->pc = 0x1c5f9cu;
    // NOP
    ctx->pc = 0x1c5fa0u;
}
