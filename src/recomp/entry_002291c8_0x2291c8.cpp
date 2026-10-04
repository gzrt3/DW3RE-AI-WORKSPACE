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

// Function: entry_002291c8
// Address: 0x2291c8 - 0x2291e4
void entry_002291c8_0x2291c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002291c8_0x2291c8");
#endif

    switch (ctx->pc) {
        case 0x2291e0u: goto label_2291e0;
        default: break;
    }

    ctx->pc = 0x2291c8u;

    // 0x2291c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2291c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2291cc: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2291ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2291d0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2291D0u;
    {
        const bool branch_taken_0x2291d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291D0u;
        // 0x2291d4: 0x254a0070  addiu       $t2, $t2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291d0) {
            ctx->pc = 0x2290F8u;
            return;
        }
    }
    ctx->pc = 0x2291D8u;
    // 0x2291d8: 0xc06e45c  jal         func_1B9170
    ctx->pc = 0x2291D8u;
    SET_GPR_U32(ctx, 31, 0x2291E0u);
    ctx->pc = 0x2291DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291D8u;
    // 0x2291dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x2291D8u, 0x2291E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291E0u;
label_2291e0:
    // 0x2291e0: 0xc05dd08  jal         func_177420
    ctx->pc = 0x2291E0u;
    SET_GPR_U32(ctx, 31, 0x2291E8u);
    ctx->pc = 0x177420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177420u, 0x2291E0u, 0x2291E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291E8u;
}
