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

// Function: entry_0014f464
// Address: 0x14f464 - 0x14f480
void entry_0014f464_0x14f464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f464_0x14f464");
#endif

    ctx->pc = 0x14f464u;

    // 0x14f464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f470: 0x3e00008  jr          $ra
    ctx->pc = 0x14F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F470u;
        // 0x14f474: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F478u;
    // 0x14f478: 0x0  nop
    ctx->pc = 0x14f478u;
    // NOP
    // 0x14f47c: 0x0  nop
    ctx->pc = 0x14f47cu;
    // NOP
    ctx->pc = 0x14f480u;
}
