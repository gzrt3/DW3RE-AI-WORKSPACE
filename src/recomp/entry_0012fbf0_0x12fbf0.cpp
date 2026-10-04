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

// Function: entry_0012fbf0
// Address: 0x12fbf0 - 0x12fc10
void entry_0012fbf0_0x12fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fbf0_0x12fbf0");
#endif

    switch (ctx->pc) {
        case 0x12fbf8u: goto label_12fbf8;
        case 0x12fc08u: goto label_12fc08;
        default: break;
    }

    ctx->pc = 0x12fbf0u;

    // 0x12fbf0: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FBF0u;
    SET_GPR_U32(ctx, 31, 0x12FBF8u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FBF0u, 0x12FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBF8u;
label_12fbf8:
    // 0x12fbf8: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12FBF8u;
    {
        const bool branch_taken_0x12fbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fbf8) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FC00u;
    // 0x12fc00: 0xc040208  jal         func_100820
    ctx->pc = 0x12FC00u;
    SET_GPR_U32(ctx, 31, 0x12FC08u);
    ctx->pc = 0x100820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100820u, 0x12FC00u, 0x12FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC08u;
label_12fc08:
    // 0x12fc08: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x12FC08u;
    {
        const bool branch_taken_0x12fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc08) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FC10u;
}
