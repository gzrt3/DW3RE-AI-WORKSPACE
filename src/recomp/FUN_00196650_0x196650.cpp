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

// Function: FUN_00196650
// Address: 0x196650 - 0x19666c
void FUN_00196650_0x196650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196650_0x196650");
#endif

    switch (ctx->pc) {
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        default: break;
    }

    ctx->pc = 0x196650u;

label_196650:
    // 0x196650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196654:
    // 0x196654: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_196658:
    // 0x196658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19665c:
    // 0x19665c: 0x8c225788  lw          $v0, 0x5788($at)
    ctx->pc = 0x19665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22408)));
label_196660:
    // 0x196660: 0x40f809  jalr        $v0
label_196664:
    if (ctx->pc == 0x196664u) {
        ctx->pc = 0x196668u;
        goto label_196668;
    }
    ctx->pc = 0x196660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196660u, 0x196668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196668u;
label_196668:
    // 0x196668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19666cu;
}
