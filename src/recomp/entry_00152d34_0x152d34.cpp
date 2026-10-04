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

// Function: entry_00152d34
// Address: 0x152d34 - 0x152d70
void entry_00152d34_0x152d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152d34_0x152d34");
#endif

    ctx->pc = 0x152d34u;

    // 0x152d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152d38: 0x3e00008  jr          $ra
    ctx->pc = 0x152D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D38u;
        // 0x152d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D40u;
    // 0x152d40: 0x84a60250  lh          $a2, 0x250($a1)
    ctx->pc = 0x152d40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x152d44: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x152d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x152d48: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x152d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x152d4c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152d50: 0x61200a  movz        $a0, $v1, $at
    ctx->pc = 0x152d50u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x152d54: 0x84a30250  lh          $v1, 0x250($a1)
    ctx->pc = 0x152d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x152d58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x152D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D5Cu;
        // 0x152d60: 0xa4a30250  sh          $v1, 0x250($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D64u;
    // 0x152d64: 0x0  nop
    ctx->pc = 0x152d64u;
    // NOP
    // 0x152d68: 0x0  nop
    ctx->pc = 0x152d68u;
    // NOP
    // 0x152d6c: 0x0  nop
    ctx->pc = 0x152d6cu;
    // NOP
    ctx->pc = 0x152d70u;
}
