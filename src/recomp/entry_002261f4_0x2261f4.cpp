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

// Function: entry_002261f4
// Address: 0x2261f4 - 0x226210
void entry_002261f4_0x2261f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002261f4_0x2261f4");
#endif

    ctx->pc = 0x2261f4u;

    // 0x2261f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2261f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2261f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2261f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2261fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226204: 0x3e00008  jr          $ra
    ctx->pc = 0x226204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226204u;
        // 0x226208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22620Cu;
    // 0x22620c: 0x0  nop
    ctx->pc = 0x22620cu;
    // NOP
    ctx->pc = 0x226210u;
}
