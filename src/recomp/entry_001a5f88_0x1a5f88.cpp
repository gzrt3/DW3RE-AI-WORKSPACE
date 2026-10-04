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

// Function: entry_001a5f88
// Address: 0x1a5f88 - 0x1a5fb8
void entry_001a5f88_0x1a5f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f88_0x1a5f88");
#endif

    ctx->pc = 0x1a5f88u;

label_1a5f88:
    // 0x1a5f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5f8c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a5f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a5f90: 0x0  nop
    ctx->pc = 0x1a5f90u;
    // NOP
    // 0x1a5f94: 0x0  nop
    ctx->pc = 0x1a5f94u;
    // NOP
    // 0x1a5f98: 0x0  nop
    ctx->pc = 0x1a5f98u;
    // NOP
    // 0x1a5f9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5F9Cu;
    {
        const bool branch_taken_0x1a5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f9c) {
            ctx->pc = 0x1A5F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5f88;
        }
    }
    ctx->pc = 0x1A5FA4u;
    // 0x1a5fa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a5fa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5fac: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x1a5facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x1a5fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5FB8u;
}
