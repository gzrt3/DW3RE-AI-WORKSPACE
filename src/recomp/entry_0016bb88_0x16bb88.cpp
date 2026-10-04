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

// Function: entry_0016bb88
// Address: 0x16bb88 - 0x16bba0
void entry_0016bb88_0x16bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb88_0x16bb88");
#endif

    switch (ctx->pc) {
        case 0x16bb90u: goto label_16bb90;
        default: break;
    }

    ctx->pc = 0x16bb88u;

    // 0x16bb88: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x16BB88u;
    SET_GPR_U32(ctx, 31, 0x16BB90u);
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x16BB88u, 0x16BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB90u;
label_16bb90:
    // 0x16bb90: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x16bb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16bb94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BB94u;
    {
        const bool branch_taken_0x16bb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb94) {
            ctx->pc = 0x16BBA0u;
            return;
        }
    }
    ctx->pc = 0x16BB9Cu;
    // 0x16bb9c: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x16bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
    ctx->pc = 0x16bba0u;
}
