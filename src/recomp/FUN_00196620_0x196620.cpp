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

// Function: FUN_00196620
// Address: 0x196620 - 0x19663c
void FUN_00196620_0x196620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196620_0x196620");
#endif

    switch (ctx->pc) {
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        default: break;
    }

    ctx->pc = 0x196620u;

label_196620:
    // 0x196620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196624:
    // 0x196624: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x196624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_196628:
    // 0x196628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19662c:
    // 0x19662c: 0x8c225788  lw          $v0, 0x5788($at)
    ctx->pc = 0x19662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22408)));
label_196630:
    // 0x196630: 0x40f809  jalr        $v0
label_196634:
    if (ctx->pc == 0x196634u) {
        ctx->pc = 0x196638u;
        goto label_196638;
    }
    ctx->pc = 0x196630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196630u, 0x196638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196638u;
label_196638:
    // 0x196638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19663cu;
}
