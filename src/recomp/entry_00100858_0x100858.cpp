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

// Function: entry_00100858
// Address: 0x100858 - 0x100874
void entry_00100858_0x100858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100858_0x100858");
#endif

    switch (ctx->pc) {
        case 0x100870u: goto label_100870;
        default: break;
    }

    ctx->pc = 0x100858u;

    // 0x100858: 0x8f828430  lw          $v0, -0x7BD0($gp)
    ctx->pc = 0x100858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935600)));
    // 0x10085c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x10085cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100860: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x100860u;
    {
        const bool branch_taken_0x100860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100860) {
            ctx->pc = 0x100834u;
            return;
        }
    }
    ctx->pc = 0x100868u;
    // 0x100868: 0xc05ee5c  jal         func_17B970
    ctx->pc = 0x100868u;
    SET_GPR_U32(ctx, 31, 0x100870u);
    ctx->pc = 0x17B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B970u, 0x100868u, 0x100870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100870u;
label_100870:
    // 0x100870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x100874u;
}
