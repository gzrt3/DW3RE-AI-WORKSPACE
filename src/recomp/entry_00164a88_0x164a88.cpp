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

// Function: entry_00164a88
// Address: 0x164a88 - 0x164ab0
void entry_00164a88_0x164a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a88_0x164a88");
#endif

    ctx->pc = 0x164a88u;

    // 0x164a88: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x164a88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x164a8c: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x164a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x164a90: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x164A90u;
    {
        const bool branch_taken_0x164a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a90) {
            ctx->pc = 0x164A58u;
            return;
        }
    }
    ctx->pc = 0x164A98u;
    // 0x164a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x164AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AA4u;
        // 0x164aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164AACu;
    // 0x164aac: 0x0  nop
    ctx->pc = 0x164aacu;
    // NOP
    ctx->pc = 0x164ab0u;
}
