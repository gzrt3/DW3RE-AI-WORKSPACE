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

// Function: entry_00167994
// Address: 0x167994 - 0x1679b0
void entry_00167994_0x167994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167994_0x167994");
#endif

    ctx->pc = 0x167994u;

    // 0x167994: 0x0  nop
    ctx->pc = 0x167994u;
    // NOP
    // 0x167998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16799c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16799cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1679a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1679A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679A0u;
        // 0x1679a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679A8u;
    // 0x1679a8: 0x0  nop
    ctx->pc = 0x1679a8u;
    // NOP
    // 0x1679ac: 0x0  nop
    ctx->pc = 0x1679acu;
    // NOP
    ctx->pc = 0x1679b0u;
}
