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

// Function: entry_0024093c
// Address: 0x24093c - 0x240960
void entry_0024093c_0x24093c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024093c_0x24093c");
#endif

    ctx->pc = 0x24093cu;

    // 0x24093c: 0x0  nop
    ctx->pc = 0x24093cu;
    // NOP
    // 0x240940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240944: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x240948: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x240948u;
    {
        const bool branch_taken_0x240948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240948) {
            ctx->pc = 0x2408ACu;
            return;
        }
    }
    ctx->pc = 0x240950u;
    // 0x240950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240958: 0x3e00008  jr          $ra
    ctx->pc = 0x240958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240958u;
        // 0x24095c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240960u;
}
