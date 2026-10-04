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

// Function: entry_00235a4c
// Address: 0x235a4c - 0x235a68
void entry_00235a4c_0x235a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235a4c_0x235a4c");
#endif

    ctx->pc = 0x235a4cu;

    // 0x235a4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x235a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235a54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x235a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x235A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A5Cu;
        // 0x235a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235A64u;
    // 0x235a64: 0x0  nop
    ctx->pc = 0x235a64u;
    // NOP
    ctx->pc = 0x235a68u;
}
