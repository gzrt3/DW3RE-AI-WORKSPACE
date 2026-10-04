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

// Function: entry_0012fd98
// Address: 0x12fd98 - 0x12fdac
void entry_0012fd98_0x12fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd98_0x12fd98");
#endif

    switch (ctx->pc) {
        case 0x12fda0u: goto label_12fda0;
        default: break;
    }

    ctx->pc = 0x12fd98u;

    // 0x12fd98: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FD98u;
    SET_GPR_U32(ctx, 31, 0x12FDA0u);
    ctx->pc = 0x12FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD98u;
    // 0x12fd9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FD98u, 0x12FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDA0u;
label_12fda0:
    // 0x12fda0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x12FDA0u;
    {
        const bool branch_taken_0x12fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fda0) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FDA8u;
    // 0x12fda8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x12fdacu;
}
