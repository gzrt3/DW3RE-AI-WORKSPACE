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

// Function: entry_001d6190
// Address: 0x1d6190 - 0x1d61b0
void entry_001d6190_0x1d6190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6190_0x1d6190");
#endif

    ctx->pc = 0x1d6190u;

    // 0x1d6190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d619c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D619Cu;
        // 0x1d61a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D619Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D61A4u;
    // 0x1d61a4: 0x0  nop
    ctx->pc = 0x1d61a4u;
    // NOP
    // 0x1d61a8: 0x0  nop
    ctx->pc = 0x1d61a8u;
    // NOP
    // 0x1d61ac: 0x0  nop
    ctx->pc = 0x1d61acu;
    // NOP
    ctx->pc = 0x1d61b0u;
}
