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

// Function: entry_00152020
// Address: 0x152020 - 0x152050
void entry_00152020_0x152020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152020_0x152020");
#endif

    ctx->pc = 0x152020u;

    // 0x152020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x152024: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x152024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x152028: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x152028u;
    {
        const bool branch_taken_0x152028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152028u;
        // 0x15202c: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152028) {
            ctx->pc = 0x151EACu;
            return;
        }
    }
    ctx->pc = 0x152030u;
    // 0x152030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15203c: 0x3e00008  jr          $ra
    ctx->pc = 0x15203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15203Cu;
        // 0x152040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152044u;
    // 0x152044: 0x0  nop
    ctx->pc = 0x152044u;
    // NOP
    // 0x152048: 0x0  nop
    ctx->pc = 0x152048u;
    // NOP
    // 0x15204c: 0x0  nop
    ctx->pc = 0x15204cu;
    // NOP
    ctx->pc = 0x152050u;
}
