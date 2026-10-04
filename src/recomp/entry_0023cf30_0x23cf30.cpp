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

// Function: entry_0023cf30
// Address: 0x23cf30 - 0x23cf58
void entry_0023cf30_0x23cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cf30_0x23cf30");
#endif

    ctx->pc = 0x23cf30u;

label_23cf30:
    // 0x23cf30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23cf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cf34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23cf38: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23cf3c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23cf40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23cf44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23CF44u;
    {
        const bool branch_taken_0x23cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cf44) {
            ctx->pc = 0x23CF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CF4Cu;
    // 0x23cf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF4Cu;
        // 0x23cf50: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF54u;
    // 0x23cf54: 0x0  nop
    ctx->pc = 0x23cf54u;
    // NOP
    ctx->pc = 0x23cf58u;
}
