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

// Function: entry_001472a8
// Address: 0x1472a8 - 0x1472dc
void entry_001472a8_0x1472a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001472a8_0x1472a8");
#endif

    switch (ctx->pc) {
        case 0x1472d4u: goto label_1472d4;
        default: break;
    }

    ctx->pc = 0x1472a8u;

    // 0x1472a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1472ac: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1472ACu;
    {
        const bool branch_taken_0x1472ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1472B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472ACu;
        // 0x1472b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472ac) {
            ctx->pc = 0x147348u;
            return;
        }
    }
    ctx->pc = 0x1472B4u;
    // 0x1472b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1472b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1472b8: 0x90254af3  lbu         $a1, 0x4AF3($at)
    ctx->pc = 0x1472b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334AF3u));
    // 0x1472bc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1472bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1472c0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1472C0u;
    {
        const bool branch_taken_0x1472c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472C0u;
        // 0x1472c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472c0) {
            ctx->pc = 0x1472DCu;
            return;
        }
    }
    ctx->pc = 0x1472C8u;
    // 0x1472c8: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1472c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1472cc: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x1472CCu;
    SET_GPR_U32(ctx, 31, 0x1472D4u);
    ctx->pc = 0x1472D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472CCu;
    // 0x1472d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x1472CCu, 0x1472D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D4u;
label_1472d4:
    // 0x1472d4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1472D4u;
    {
        const bool branch_taken_0x1472d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472D4u;
        // 0x1472d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472d4) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x1472DCu;
}
