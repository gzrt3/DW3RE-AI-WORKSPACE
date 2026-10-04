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

// Function: FUN_00169720
// Address: 0x169720 - 0x169740
void FUN_00169720_0x169720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169720_0x169720");
#endif

    switch (ctx->pc) {
        case 0x169720u: goto label_169720;
        case 0x169724u: goto label_169724;
        case 0x169728u: goto label_169728;
        case 0x16972cu: goto label_16972c;
        case 0x169730u: goto label_169730;
        case 0x169734u: goto label_169734;
        case 0x169738u: goto label_169738;
        case 0x16973cu: goto label_16973c;
        default: break;
    }

    ctx->pc = 0x169720u;

label_169720:
    // 0x169720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169724:
    // 0x169724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169728:
    // 0x169728: 0x8f8386e8  lw          $v1, -0x7918($gp)
    ctx->pc = 0x169728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936296)));
label_16972c:
    // 0x16972c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_169730:
    if (ctx->pc == 0x169730u) {
        ctx->pc = 0x169734u;
        goto label_169734;
    }
    ctx->pc = 0x16972Cu;
    {
        const bool branch_taken_0x16972c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16972c) {
            ctx->pc = 0x16973Cu;
            goto label_16973c;
        }
    }
    ctx->pc = 0x169734u;
label_169734:
    // 0x169734: 0x60f809  jalr        $v1
label_169738:
    if (ctx->pc == 0x169738u) {
        ctx->pc = 0x16973Cu;
        goto label_16973c;
    }
    ctx->pc = 0x169734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16973Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169734u, 0x16973Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16973Cu;
label_16973c:
    // 0x16973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x169740u;
}
