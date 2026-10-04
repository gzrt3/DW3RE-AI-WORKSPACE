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

// Function: entry_00209ea4
// Address: 0x209ea4 - 0x209ed0
void entry_00209ea4_0x209ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209ea4_0x209ea4");
#endif

    ctx->pc = 0x209ea4u;

    // 0x209ea4: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209ea8: 0xac655724  sw          $a1, 0x5724($v1)
    ctx->pc = 0x209ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22308), GPR_U32(ctx, 5));
    // 0x209eac: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209eb0: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209eb4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209EB4u;
    {
        const bool branch_taken_0x209eb4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x209eb4) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209EBCu;
    // 0x209ebc: 0xac805720  sw          $zero, 0x5720($a0)
    ctx->pc = 0x209ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
label_209ec0:
    // 0x209ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x209EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209EC8u;
    // 0x209ec8: 0x0  nop
    ctx->pc = 0x209ec8u;
    // NOP
    // 0x209ecc: 0x0  nop
    ctx->pc = 0x209eccu;
    // NOP
    ctx->pc = 0x209ed0u;
}
