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

// Function: entry_0012fccc
// Address: 0x12fccc - 0x12fcfc
void entry_0012fccc_0x12fccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fccc_0x12fccc");
#endif

    switch (ctx->pc) {
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fce4u: goto label_12fce4;
        case 0x12fcf4u: goto label_12fcf4;
        default: break;
    }

    ctx->pc = 0x12fcccu;

    // 0x12fccc: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCCCu;
    SET_GPR_U32(ctx, 31, 0x12FCD4u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCCCu, 0x12FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCD4u;
label_12fcd4:
    // 0x12fcd4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCD4u;
        // 0x12fcd8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCDCu;
    SET_GPR_U32(ctx, 31, 0x12FCE4u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCDCu, 0x12FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCE4u;
label_12fce4:
    // 0x12fce4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x12FCE4u;
    {
        const bool branch_taken_0x12fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCE4u;
        // 0x12fce8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fce4) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FCECu;
    // 0x12fcec: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FCECu;
    SET_GPR_U32(ctx, 31, 0x12FCF4u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FCECu, 0x12FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCF4u;
label_12fcf4:
    // 0x12fcf4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x12FCF4u;
    {
        const bool branch_taken_0x12fcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcf4) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FCFCu;
}
