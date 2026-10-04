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

// Function: entry_0023a74c
// Address: 0x23a74c - 0x23a770
void entry_0023a74c_0x23a74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a74c_0x23a74c");
#endif

    ctx->pc = 0x23a74cu;

label_23a74c:
    // 0x23a74c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23a750: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a758: 0x0  nop
    ctx->pc = 0x23a758u;
    // NOP
    // 0x23a75c: 0x0  nop
    ctx->pc = 0x23a75cu;
    // NOP
    // 0x23a760: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A760u;
    {
        const bool branch_taken_0x23a760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a760) {
            ctx->pc = 0x23A74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a74c;
        }
    }
    ctx->pc = 0x23A768u;
    // 0x23a768: 0x3e00008  jr          $ra
    ctx->pc = 0x23A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A768u;
        // 0x23a76c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A770u;
}
