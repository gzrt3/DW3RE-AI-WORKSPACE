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

// Function: entry_0012fe78
// Address: 0x12fe78 - 0x12fe90
void entry_0012fe78_0x12fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fe78_0x12fe78");
#endif

    switch (ctx->pc) {
        case 0x12fe80u: goto label_12fe80;
        default: break;
    }

    ctx->pc = 0x12fe78u;

    // 0x12fe78: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE78u;
    SET_GPR_U32(ctx, 31, 0x12FE80u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE78u, 0x12FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE80u;
    {
        const bool branch_taken_0x12fe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE80u;
        // 0x12fe84: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe80) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FE88u;
    // 0x12fe88: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE88u;
    SET_GPR_U32(ctx, 31, 0x12FE90u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE88u, 0x12FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE90u;
}
