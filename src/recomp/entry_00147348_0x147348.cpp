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

// Function: entry_00147348
// Address: 0x147348 - 0x14736c
void entry_00147348_0x147348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147348_0x147348");
#endif

    switch (ctx->pc) {
        case 0x147364u: goto label_147364;
        default: break;
    }

    ctx->pc = 0x147348u;

    // 0x147348: 0x90244af3  lbu         $a0, 0x4AF3($at)
    ctx->pc = 0x147348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
    // 0x14734c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x14734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x147350: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147350u;
    {
        const bool branch_taken_0x147350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147350u;
        // 0x147354: 0x30830018  andi        $v1, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147350) {
            ctx->pc = 0x14736Cu;
            return;
        }
    }
    ctx->pc = 0x147358u;
    // 0x147358: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14735c: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x14735Cu;
    SET_GPR_U32(ctx, 31, 0x147364u);
    ctx->pc = 0x147360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14735Cu;
    // 0x147360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x14735Cu, 0x147364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147364u;
label_147364:
    // 0x147364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x147364u;
    {
        const bool branch_taken_0x147364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147364u;
        // 0x147368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147364) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x14736Cu;
}
