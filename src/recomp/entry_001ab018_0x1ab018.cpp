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

// Function: entry_001ab018
// Address: 0x1ab018 - 0x1ab03c
void entry_001ab018_0x1ab018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab018_0x1ab018");
#endif

    switch (ctx->pc) {
        case 0x1ab024u: goto label_1ab024;
        case 0x1ab034u: goto label_1ab034;
        default: break;
    }

    ctx->pc = 0x1ab018u;

    // 0x1ab018: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ab018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1ab01c: 0xc06a158  jal         func_1A8560
    ctx->pc = 0x1AB01Cu;
    SET_GPR_U32(ctx, 31, 0x1AB024u);
    ctx->pc = 0x1AB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB01Cu;
    // 0x1ab020: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8560u, 0x1AB01Cu, 0x1AB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB024u;
label_1ab024:
    // 0x1ab024: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB024u;
    {
        const bool branch_taken_0x1ab024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB024u;
        // 0x1ab028: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab024) {
            ctx->pc = 0x1AB03Cu;
            return;
        }
    }
    ctx->pc = 0x1AB02Cu;
    // 0x1ab02c: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AB02Cu;
    SET_GPR_U32(ctx, 31, 0x1AB034u);
    ctx->pc = 0x1AB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB02Cu;
    // 0x1ab030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AB02Cu, 0x1AB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB034u;
label_1ab034:
    // 0x1ab034: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AB034u;
    {
        const bool branch_taken_0x1ab034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB034u;
        // 0x1ab038: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab034) {
            ctx->pc = 0x1AB068u;
            return;
        }
    }
    ctx->pc = 0x1AB03Cu;
}
