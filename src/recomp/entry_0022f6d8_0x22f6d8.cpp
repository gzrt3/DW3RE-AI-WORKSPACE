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

// Function: entry_0022f6d8
// Address: 0x22f6d8 - 0x22f708
void entry_0022f6d8_0x22f6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f6d8_0x22f6d8");
#endif

    switch (ctx->pc) {
        case 0x22f6fcu: goto label_22f6fc;
        case 0x22f704u: goto label_22f704;
        default: break;
    }

    ctx->pc = 0x22f6d8u;

    // 0x22f6d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f6dc: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f6e0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F6E0u;
    {
        const bool branch_taken_0x22f6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6E0u;
        // 0x22f6e4: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6e0) {
            ctx->pc = 0x22F6B0u;
            return;
        }
    }
    ctx->pc = 0x22F6E8u;
    // 0x22f6e8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f6ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F6ECu;
    {
        const bool branch_taken_0x22f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ec) {
            ctx->pc = 0x22F708u;
            return;
        }
    }
    ctx->pc = 0x22F6F4u;
    // 0x22f6f4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F6F4u;
    SET_GPR_U32(ctx, 31, 0x22F6FCu);
    ctx->pc = 0x22F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6F4u;
    // 0x22f6f8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F6F4u, 0x22F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6FCu;
label_22f6fc:
    // 0x22f6fc: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F6FCu;
    SET_GPR_U32(ctx, 31, 0x22F704u);
    ctx->pc = 0x22F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6FCu;
    // 0x22f700: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F6FCu, 0x22F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F704u;
label_22f704:
    // 0x22f704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22f708u;
}
