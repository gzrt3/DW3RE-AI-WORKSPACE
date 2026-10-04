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

// Function: entry_0019b4a4
// Address: 0x19b4a4 - 0x19b4d8
void entry_0019b4a4_0x19b4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b4a4_0x19b4a4");
#endif

    ctx->pc = 0x19b4a4u;

    // 0x19b4a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19b4a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x19b4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19b4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B4ACu;
    {
        const bool branch_taken_0x19b4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b4ac) {
            ctx->pc = 0x19B498u;
            return;
        }
    }
    ctx->pc = 0x19B4B4u;
    // 0x19b4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4BCu;
    // 0x19b4bc: 0x0  nop
    ctx->pc = 0x19b4bcu;
    // NOP
    // 0x19b4c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b4c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19b4c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19b4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4CCu;
        // 0x19b4d0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4D4u;
    // 0x19b4d4: 0x0  nop
    ctx->pc = 0x19b4d4u;
    // NOP
    ctx->pc = 0x19b4d8u;
}
