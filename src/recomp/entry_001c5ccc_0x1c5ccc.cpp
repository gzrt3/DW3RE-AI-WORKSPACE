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

// Function: entry_001c5ccc
// Address: 0x1c5ccc - 0x1c5d00
void entry_001c5ccc_0x1c5ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5ccc_0x1c5ccc");
#endif

    ctx->pc = 0x1c5cccu;

    // 0x1c5ccc: 0x908302e8  lbu         $v1, 0x2E8($a0)
    ctx->pc = 0x1c5cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x1c5cd0: 0x908202ea  lbu         $v0, 0x2EA($a0)
    ctx->pc = 0x1c5cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 746)));
    // 0x1c5cd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c5cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c5cd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5CECu;
            goto label_1c5cec;
        }
    }
    ctx->pc = 0x1C5CE0u;
    // 0x1c5ce0: 0x908302e9  lbu         $v1, 0x2E9($a0)
    ctx->pc = 0x1c5ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 745)));
    // 0x1c5ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ce8: 0xa08302e8  sb          $v1, 0x2E8($a0)
    ctx->pc = 0x1c5ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 3));
label_1c5cec:
    // 0x1c5cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CF4u;
    // 0x1c5cf4: 0x0  nop
    ctx->pc = 0x1c5cf4u;
    // NOP
    // 0x1c5cf8: 0x0  nop
    ctx->pc = 0x1c5cf8u;
    // NOP
    // 0x1c5cfc: 0x0  nop
    ctx->pc = 0x1c5cfcu;
    // NOP
    ctx->pc = 0x1c5d00u;
}
