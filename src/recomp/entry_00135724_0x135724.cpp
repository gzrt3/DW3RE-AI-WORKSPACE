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

// Function: entry_00135724
// Address: 0x135724 - 0x135750
void entry_00135724_0x135724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135724_0x135724");
#endif

    ctx->pc = 0x135724u;

    // 0x135724: 0x0  nop
    ctx->pc = 0x135724u;
    // NOP
    // 0x135728: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x135728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13572c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x13572cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x135730: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x135730u;
    {
        const bool branch_taken_0x135730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135730u;
        // 0x135734: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135730) {
            ctx->pc = 0x135710u;
            return;
        }
    }
    ctx->pc = 0x135738u;
    // 0x135738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13573c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13573cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135744: 0x3e00008  jr          $ra
    ctx->pc = 0x135744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135744u;
        // 0x135748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13574Cu;
    // 0x13574c: 0x0  nop
    ctx->pc = 0x13574cu;
    // NOP
    ctx->pc = 0x135750u;
}
