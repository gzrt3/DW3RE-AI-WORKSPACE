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

// Function: entry_001aca48
// Address: 0x1aca48 - 0x1aca60
void entry_001aca48_0x1aca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aca48_0x1aca48");
#endif

    ctx->pc = 0x1aca48u;

    // 0x1aca48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aca4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aca4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aca50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aca50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aca54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA54u;
        // 0x1aca58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA5Cu;
    // 0x1aca5c: 0x0  nop
    ctx->pc = 0x1aca5cu;
    // NOP
    ctx->pc = 0x1aca60u;
}
