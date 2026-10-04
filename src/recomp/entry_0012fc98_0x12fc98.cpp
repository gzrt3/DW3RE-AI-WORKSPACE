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

// Function: entry_0012fc98
// Address: 0x12fc98 - 0x12fcc8
void entry_0012fc98_0x12fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc98_0x12fc98");
#endif

    switch (ctx->pc) {
        case 0x12fca0u: goto label_12fca0;
        case 0x12fcb0u: goto label_12fcb0;
        case 0x12fcc0u: goto label_12fcc0;
        default: break;
    }

    ctx->pc = 0x12fc98u;

    // 0x12fc98: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC98u;
    SET_GPR_U32(ctx, 31, 0x12FCA0u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC98u, 0x12FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCA0u;
label_12fca0:
    // 0x12fca0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FCA0u;
    {
        const bool branch_taken_0x12fca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCA0u;
        // 0x12fca4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fca0) {
            ctx->pc = 0x12FCCCu;
            return;
        }
    }
    ctx->pc = 0x12FCA8u;
    // 0x12fca8: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCA8u;
    SET_GPR_U32(ctx, 31, 0x12FCB0u);
    ctx->pc = 0x12FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCA8u;
    // 0x12fcac: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCA8u, 0x12FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCB0u;
label_12fcb0:
    // 0x12fcb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FCB0u;
    {
        const bool branch_taken_0x12fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCB0u;
        // 0x12fcb4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcb0) {
            ctx->pc = 0x12FCC8u;
            return;
        }
    }
    ctx->pc = 0x12FCB8u;
    // 0x12fcb8: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FCB8u;
    SET_GPR_U32(ctx, 31, 0x12FCC0u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FCB8u, 0x12FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCC0u;
label_12fcc0:
    // 0x12fcc0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12FCC0u;
    {
        const bool branch_taken_0x12fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcc0) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FCC8u;
}
