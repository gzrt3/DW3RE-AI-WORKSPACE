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

// Function: entry_001a02d4
// Address: 0x1a02d4 - 0x1a02f0
void entry_001a02d4_0x1a02d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02d4_0x1a02d4");
#endif

    ctx->pc = 0x1a02d4u;

    // 0x1a02d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a02d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a02d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a02d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a02dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a02e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a02e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a02e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A02E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02E4u;
        // 0x1a02e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A02ECu;
    // 0x1a02ec: 0x0  nop
    ctx->pc = 0x1a02ecu;
    // NOP
    ctx->pc = 0x1a02f0u;
}
