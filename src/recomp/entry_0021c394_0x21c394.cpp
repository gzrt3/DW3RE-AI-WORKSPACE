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

// Function: entry_0021c394
// Address: 0x21c394 - 0x21c3b0
void entry_0021c394_0x21c394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c394_0x21c394");
#endif

    ctx->pc = 0x21c394u;

    // 0x21c394: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x21c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21c398: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21c39c: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x21c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x21c3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3A4u;
        // 0x21c3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C3ACu;
    // 0x21c3ac: 0x0  nop
    ctx->pc = 0x21c3acu;
    // NOP
    ctx->pc = 0x21c3b0u;
}
