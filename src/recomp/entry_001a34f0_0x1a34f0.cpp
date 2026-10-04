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

// Function: entry_001a34f0
// Address: 0x1a34f0 - 0x1a3508
void entry_001a34f0_0x1a34f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a34f0_0x1a34f0");
#endif

    switch (ctx->pc) {
        case 0x1a34f8u: goto label_1a34f8;
        default: break;
    }

    ctx->pc = 0x1a34f0u;

    // 0x1a34f0: 0xc068d1a  jal         func_1A3468
    ctx->pc = 0x1A34F0u;
    SET_GPR_U32(ctx, 31, 0x1A34F8u);
    ctx->pc = 0x1A34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34F0u;
    // 0x1a34f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3468u, 0x1A34F0u, 0x1A34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34F8u;
label_1a34f8:
    // 0x1a34f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a34f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a34fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A34FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34FCu;
        // 0x1a3500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A34FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3504u;
    // 0x1a3504: 0x0  nop
    ctx->pc = 0x1a3504u;
    // NOP
    ctx->pc = 0x1a3508u;
}
