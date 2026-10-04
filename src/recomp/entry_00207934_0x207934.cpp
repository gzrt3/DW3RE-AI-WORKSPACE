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

// Function: entry_00207934
// Address: 0x207934 - 0x207970
void entry_00207934_0x207934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207934_0x207934");
#endif

    ctx->pc = 0x207934u;

    // 0x207934: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207938: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20793c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20793cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x207940: 0xac25e2e4  sw          $a1, -0x1D1C($at)
    ctx->pc = 0x207940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 5));
    // 0x207944: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207948: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20794c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20794cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207950: 0x8c23e2e4  lw          $v1, -0x1D1C($at)
    ctx->pc = 0x207950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x207954: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207954u;
    {
        const bool branch_taken_0x207954 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207954) {
            ctx->pc = 0x207964u;
            goto label_207964;
        }
    }
    ctx->pc = 0x20795Cu;
    // 0x20795c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20795cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207960: 0xac20e2e0  sw          $zero, -0x1D20($at)
    ctx->pc = 0x207960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
label_207964:
    // 0x207964: 0x3e00008  jr          $ra
    ctx->pc = 0x207964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20796Cu;
    // 0x20796c: 0x0  nop
    ctx->pc = 0x20796cu;
    // NOP
    ctx->pc = 0x207970u;
}
