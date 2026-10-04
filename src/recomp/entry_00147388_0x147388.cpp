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

// Function: entry_00147388
// Address: 0x147388 - 0x1473a4
void entry_00147388_0x147388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147388_0x147388");
#endif

    switch (ctx->pc) {
        case 0x1473a0u: goto label_1473a0;
        default: break;
    }

    ctx->pc = 0x147388u;

    // 0x147388: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x147388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x14738c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14738Cu;
    {
        const bool branch_taken_0x14738c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14738c) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147394u;
    // 0x147394: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x147394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147398: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147398u;
    SET_GPR_U32(ctx, 31, 0x1473A0u);
    ctx->pc = 0x14739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147398u;
    // 0x14739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147398u, 0x1473A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473A0u;
label_1473a0:
    // 0x1473a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1473a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1473a4u;
}
