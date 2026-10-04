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

// Function: entry_00199f28
// Address: 0x199f28 - 0x199f50
void entry_00199f28_0x199f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f28_0x199f28");
#endif

    ctx->pc = 0x199f28u;

    // 0x199f28: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x199f28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199f2c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x199f2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199f30: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x199f30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199f34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x199f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199f38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x199f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199f3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x199f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199f40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x199f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199f44: 0x3e00008  jr          $ra
    ctx->pc = 0x199F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F44u;
        // 0x199f48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F4Cu;
    // 0x199f4c: 0x0  nop
    ctx->pc = 0x199f4cu;
    // NOP
    ctx->pc = 0x199f50u;
}
