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

// Function: entry_001ee260
// Address: 0x1ee260 - 0x1ee280
void entry_001ee260_0x1ee260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee260_0x1ee260");
#endif

    ctx->pc = 0x1ee260u;

    // 0x1ee260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee26c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee270: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE270u;
        // 0x1ee274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE278u;
    // 0x1ee278: 0x0  nop
    ctx->pc = 0x1ee278u;
    // NOP
    // 0x1ee27c: 0x0  nop
    ctx->pc = 0x1ee27cu;
    // NOP
    ctx->pc = 0x1ee280u;
}
