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

// Function: entry_002446e0
// Address: 0x2446e0 - 0x244700
void entry_002446e0_0x2446e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002446e0_0x2446e0");
#endif

    ctx->pc = 0x2446e0u;

    // 0x2446e0: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2446e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2446e4: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x2446e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2446e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2446E8u;
    {
        const bool branch_taken_0x2446e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446e8) {
            ctx->pc = 0x2446F8u;
            goto label_2446f8;
        }
    }
    ctx->pc = 0x2446F0u;
    // 0x2446f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446f4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x2446f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_2446f8:
    // 0x2446f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2446F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244700u;
}
