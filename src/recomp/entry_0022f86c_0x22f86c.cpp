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

// Function: entry_0022f86c
// Address: 0x22f86c - 0x22f898
void entry_0022f86c_0x22f86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f86c_0x22f86c");
#endif

    switch (ctx->pc) {
        case 0x22f890u: goto label_22f890;
        default: break;
    }

    ctx->pc = 0x22f86cu;

    // 0x22f86c: 0x0  nop
    ctx->pc = 0x22f86cu;
    // NOP
    // 0x22f870: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f874: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f878: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F878u;
    {
        const bool branch_taken_0x22f878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F878u;
        // 0x22f87c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f878) {
            ctx->pc = 0x22F844u;
            return;
        }
    }
    ctx->pc = 0x22F880u;
    // 0x22f880: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F880u;
    {
        const bool branch_taken_0x22f880 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F880u;
        // 0x22f884: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f880) {
            ctx->pc = 0x22F898u;
            return;
        }
    }
    ctx->pc = 0x22F888u;
    // 0x22f888: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F888u;
    SET_GPR_U32(ctx, 31, 0x22F890u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F888u, 0x22F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F890u;
label_22f890:
    // 0x22f890: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F890u;
    SET_GPR_U32(ctx, 31, 0x22F898u);
    ctx->pc = 0x22F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F890u;
    // 0x22f894: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F890u, 0x22F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F898u;
}
