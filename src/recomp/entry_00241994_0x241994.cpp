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

// Function: entry_00241994
// Address: 0x241994 - 0x2419d0
void entry_00241994_0x241994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241994_0x241994");
#endif

    ctx->pc = 0x241994u;

    // 0x241994: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x241998: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24199c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24199cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2419a0: 0xac252384  sw          $a1, 0x2384($at)
    ctx->pc = 0x2419a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 5));
    // 0x2419a4: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x2419a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2419ac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2419acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2419b0: 0x8c232384  lw          $v1, 0x2384($at)
    ctx->pc = 0x2419b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x2419b4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2419B4u;
    {
        const bool branch_taken_0x2419b4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2419B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B4u;
        // 0x2419b8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b4) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x2419BCu;
    // 0x2419bc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2419bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2419c0: 0xac202380  sw          $zero, 0x2380($at)
    ctx->pc = 0x2419c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
label_2419c4:
    // 0x2419c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2419C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419CCu;
    // 0x2419cc: 0x0  nop
    ctx->pc = 0x2419ccu;
    // NOP
    ctx->pc = 0x2419d0u;
}
