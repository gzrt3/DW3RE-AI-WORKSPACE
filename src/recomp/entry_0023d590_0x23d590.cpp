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

// Function: entry_0023d590
// Address: 0x23d590 - 0x23d5b8
void entry_0023d590_0x23d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d590_0x23d590");
#endif

    ctx->pc = 0x23d590u;

label_23d590:
    // 0x23d590: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23d590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d594: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d59c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23d5a0: 0x0  nop
    ctx->pc = 0x23d5a0u;
    // NOP
    // 0x23d5a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D5A4u;
    {
        const bool branch_taken_0x23d5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d5a4) {
            ctx->pc = 0x23D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d590;
        }
    }
    ctx->pc = 0x23D5ACu;
    // 0x23d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5ACu;
        // 0x23d5b0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D5B4u;
    // 0x23d5b4: 0x0  nop
    ctx->pc = 0x23d5b4u;
    // NOP
    ctx->pc = 0x23d5b8u;
}
