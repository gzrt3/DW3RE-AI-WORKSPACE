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

// Function: entry_0014725c
// Address: 0x14725c - 0x147288
void entry_0014725c_0x14725c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014725c_0x14725c");
#endif

    switch (ctx->pc) {
        case 0x147280u: goto label_147280;
        default: break;
    }

    ctx->pc = 0x14725cu;

    // 0x14725c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x14725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x147260: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x147260u;
    {
        const bool branch_taken_0x147260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147260u;
        // 0x147264: 0x3083000c  andi        $v1, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147260) {
            ctx->pc = 0x14728Cu;
            return;
        }
    }
    ctx->pc = 0x147268u;
    // 0x147268: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x147268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x14726c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14726Cu;
    {
        const bool branch_taken_0x14726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14726c) {
            ctx->pc = 0x147288u;
            return;
        }
    }
    ctx->pc = 0x147274u;
    // 0x147274: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x147274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x147278: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147278u;
    SET_GPR_U32(ctx, 31, 0x147280u);
    ctx->pc = 0x14727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147278u;
    // 0x14727c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147278u, 0x147280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147280u;
label_147280:
    // 0x147280: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x147280u;
    {
        const bool branch_taken_0x147280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147280u;
        // 0x147284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147280) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147288u;
}
