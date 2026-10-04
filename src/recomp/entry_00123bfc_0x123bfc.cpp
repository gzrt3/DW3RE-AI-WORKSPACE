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

// Function: entry_00123bfc
// Address: 0x123bfc - 0x123c30
void entry_00123bfc_0x123bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123bfc_0x123bfc");
#endif

    switch (ctx->pc) {
        case 0x123c08u: goto label_123c08;
        default: break;
    }

    ctx->pc = 0x123bfcu;

    // 0x123bfc: 0x960402f8  lhu         $a0, 0x2F8($s0)
    ctx->pc = 0x123bfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x123c00: 0xc07139c  jal         func_1C4E70
    ctx->pc = 0x123C00u;
    SET_GPR_U32(ctx, 31, 0x123C08u);
    ctx->pc = 0x123C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C00u;
    // 0x123c04: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E70u, 0x123C00u, 0x123C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C08u;
label_123c08:
    // 0x123c08: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x123c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x123c0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x123c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x123c10: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x123c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x123c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x123c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x123C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C1Cu;
        // 0x123c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123C24u;
    // 0x123c24: 0x0  nop
    ctx->pc = 0x123c24u;
    // NOP
    // 0x123c28: 0x0  nop
    ctx->pc = 0x123c28u;
    // NOP
    // 0x123c2c: 0x0  nop
    ctx->pc = 0x123c2cu;
    // NOP
    ctx->pc = 0x123c30u;
}
