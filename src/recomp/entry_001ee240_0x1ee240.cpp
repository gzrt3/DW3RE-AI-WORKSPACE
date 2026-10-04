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

// Function: entry_001ee240
// Address: 0x1ee240 - 0x1ee250
void entry_001ee240_0x1ee240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee240_0x1ee240");
#endif

    switch (ctx->pc) {
        case 0x1ee248u: goto label_1ee248;
        default: break;
    }

    ctx->pc = 0x1ee240u;

    // 0x1ee240: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE240u;
    SET_GPR_U32(ctx, 31, 0x1EE248u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE240u, 0x1EE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE260u;
            return;
        }
    }
    ctx->pc = 0x1EE250u;
}
