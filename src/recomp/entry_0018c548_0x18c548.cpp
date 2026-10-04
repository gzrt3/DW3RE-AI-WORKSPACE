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

// Function: entry_0018c548
// Address: 0x18c548 - 0x18c560
void entry_0018c548_0x18c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c548_0x18c548");
#endif

    ctx->pc = 0x18c548u;

    // 0x18c548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c554: 0x3e00008  jr          $ra
    ctx->pc = 0x18C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C554u;
        // 0x18c558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C55Cu;
    // 0x18c55c: 0x0  nop
    ctx->pc = 0x18c55cu;
    // NOP
    ctx->pc = 0x18c560u;
}
