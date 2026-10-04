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

// Function: entry_0012fc30
// Address: 0x12fc30 - 0x12fc60
void entry_0012fc30_0x12fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc30_0x12fc30");
#endif

    switch (ctx->pc) {
        case 0x12fc38u: goto label_12fc38;
        case 0x12fc48u: goto label_12fc48;
        case 0x12fc58u: goto label_12fc58;
        default: break;
    }

    ctx->pc = 0x12fc30u;

    // 0x12fc30: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC30u;
    SET_GPR_U32(ctx, 31, 0x12FC38u);
    ctx->pc = 0x12FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC30u;
    // 0x12fc34: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC30u, 0x12FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC38u;
label_12fc38:
    // 0x12fc38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FC38u;
    {
        const bool branch_taken_0x12fc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC38u;
        // 0x12fc3c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc38) {
            ctx->pc = 0x12FC64u;
            return;
        }
    }
    ctx->pc = 0x12FC40u;
    // 0x12fc40: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC40u;
    SET_GPR_U32(ctx, 31, 0x12FC48u);
    ctx->pc = 0x12FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC40u;
    // 0x12fc44: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC40u, 0x12FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC48u;
label_12fc48:
    // 0x12fc48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FC48u;
    {
        const bool branch_taken_0x12fc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC48u;
        // 0x12fc4c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc48) {
            ctx->pc = 0x12FC60u;
            return;
        }
    }
    ctx->pc = 0x12FC50u;
    // 0x12fc50: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FC50u;
    SET_GPR_U32(ctx, 31, 0x12FC58u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FC50u, 0x12FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC58u;
label_12fc58:
    // 0x12fc58: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x12FC58u;
    {
        const bool branch_taken_0x12fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc58) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FC60u;
}
