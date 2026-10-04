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

// Function: entry_0014ed3c
// Address: 0x14ed3c - 0x14ed70
void entry_0014ed3c_0x14ed3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed3c_0x14ed3c");
#endif

    ctx->pc = 0x14ed3cu;

    // 0x14ed3c: 0x0  nop
    ctx->pc = 0x14ed3cu;
    // NOP
    // 0x14ed40: 0x461ffce  bgez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x14ED40u;
    {
        const bool branch_taken_0x14ed40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED40u;
        // 0x14ed44: 0x33880  sll         $a3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed40) {
            ctx->pc = 0x14EC7Cu;
            return;
        }
    }
    ctx->pc = 0x14ED48u;
    // 0x14ed48: 0x2483008e  addiu       $v1, $a0, 0x8E
    ctx->pc = 0x14ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 142));
    // 0x14ed4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14ed4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x14ed50: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x14ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x14ed54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ed58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ed5c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x14ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x14ED60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED60u;
        // 0x14ed64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ED60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ED68u;
    // 0x14ed68: 0x0  nop
    ctx->pc = 0x14ed68u;
    // NOP
    // 0x14ed6c: 0x0  nop
    ctx->pc = 0x14ed6cu;
    // NOP
    ctx->pc = 0x14ed70u;
}
