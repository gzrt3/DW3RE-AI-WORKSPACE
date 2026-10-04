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

// Function: entry_0022f7c4
// Address: 0x22f7c4 - 0x22f7f4
void entry_0022f7c4_0x22f7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f7c4_0x22f7c4");
#endif

    switch (ctx->pc) {
        case 0x22f7ecu: goto label_22f7ec;
        default: break;
    }

    ctx->pc = 0x22f7c4u;

    // 0x22f7c4: 0x0  nop
    ctx->pc = 0x22f7c4u;
    // NOP
    // 0x22f7c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f7cc: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f7d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F7D0u;
    {
        const bool branch_taken_0x22f7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D0u;
        // 0x22f7d4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7d0) {
            ctx->pc = 0x22F79Cu;
            return;
        }
    }
    ctx->pc = 0x22F7D8u;
    // 0x22f7d8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f7dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F7DCu;
    {
        const bool branch_taken_0x22f7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f7dc) {
            ctx->pc = 0x22F7F4u;
            return;
        }
    }
    ctx->pc = 0x22F7E4u;
    // 0x22f7e4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F7E4u;
    SET_GPR_U32(ctx, 31, 0x22F7ECu);
    ctx->pc = 0x22F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7E4u;
    // 0x22f7e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F7E4u, 0x22F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7ECu;
label_22f7ec:
    // 0x22f7ec: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F7ECu;
    SET_GPR_U32(ctx, 31, 0x22F7F4u);
    ctx->pc = 0x22F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7ECu;
    // 0x22f7f0: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F7ECu, 0x22F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7F4u;
}
