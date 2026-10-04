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

// Function: entry_0012fe3c
// Address: 0x12fe3c - 0x12fe5c
void entry_0012fe3c_0x12fe3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fe3c_0x12fe3c");
#endif

    switch (ctx->pc) {
        case 0x12fe44u: goto label_12fe44;
        case 0x12fe54u: goto label_12fe54;
        default: break;
    }

    ctx->pc = 0x12fe3cu;

    // 0x12fe3c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE3Cu;
    SET_GPR_U32(ctx, 31, 0x12FE44u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE3Cu, 0x12FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE44u;
label_12fe44:
    // 0x12fe44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12FE44u;
    {
        const bool branch_taken_0x12fe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE44u;
        // 0x12fe48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe44) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FE4Cu;
    // 0x12fe4c: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE4Cu;
    SET_GPR_U32(ctx, 31, 0x12FE54u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE4Cu, 0x12FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE54u;
label_12fe54:
    // 0x12fe54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12FE54u;
    {
        const bool branch_taken_0x12fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe54) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FE5Cu;
}
