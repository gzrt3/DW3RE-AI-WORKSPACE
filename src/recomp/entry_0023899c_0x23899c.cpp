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

// Function: entry_0023899c
// Address: 0x23899c - 0x2389d8
void entry_0023899c_0x23899c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023899c_0x23899c");
#endif

    switch (ctx->pc) {
        case 0x2389b8u: goto label_2389b8;
        default: break;
    }

    ctx->pc = 0x23899cu;

    // 0x23899c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2389a0: 0x0  nop
    ctx->pc = 0x2389a0u;
    // NOP
    // 0x2389a4: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2389A4u;
    {
        const bool branch_taken_0x2389a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389a4) {
            ctx->pc = 0x2389A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389A4u;
            // 0x2389a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238968u;
            return;
        }
    }
    ctx->pc = 0x2389ACu;
    // 0x2389ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2389acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389b0: 0xc08e230  jal         func_2388C0
    ctx->pc = 0x2389B0u;
    SET_GPR_U32(ctx, 31, 0x2389B8u);
    ctx->pc = 0x2389B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389B0u;
    // 0x2389b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388C0u, 0x2389B0u, 0x2389B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389B8u;
label_2389b8:
    // 0x2389b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2389b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2389bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2389c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2389C0u;
    {
        const bool branch_taken_0x2389c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C0u;
        // 0x2389c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c0) {
            ctx->pc = 0x2389D0u;
            goto label_2389d0;
        }
    }
    ctx->pc = 0x2389C8u;
    // 0x2389c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2389C8u;
    {
        const bool branch_taken_0x2389c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C8u;
        // 0x2389cc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c8) {
            ctx->pc = 0x238A18u;
            return;
        }
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2389D0u;
    {
        const bool branch_taken_0x2389d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D0u;
        // 0x2389d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389d0) {
            ctx->pc = 0x238968u;
            return;
        }
    }
    ctx->pc = 0x2389D8u;
}
