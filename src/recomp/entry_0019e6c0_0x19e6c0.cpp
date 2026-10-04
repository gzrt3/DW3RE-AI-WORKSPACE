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

// Function: entry_0019e6c0
// Address: 0x19e6c0 - 0x19e704
void entry_0019e6c0_0x19e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e6c0_0x19e6c0");
#endif

    switch (ctx->pc) {
        case 0x19e6c8u: goto label_19e6c8;
        case 0x19e6d0u: goto label_19e6d0;
        case 0x19e6dcu: goto label_19e6dc;
        case 0x19e6fcu: goto label_19e6fc;
        default: break;
    }

    ctx->pc = 0x19e6c0u;

    // 0x19e6c0: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19E6C0u;
    SET_GPR_U32(ctx, 31, 0x19E6C8u);
    ctx->pc = 0x19E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C0u;
    // 0x19e6c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19E6C0u, 0x19E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6C8u;
label_19e6c8:
    // 0x19e6c8: 0xc067e46  jal         func_19F918
    ctx->pc = 0x19E6C8u;
    SET_GPR_U32(ctx, 31, 0x19E6D0u);
    ctx->pc = 0x19E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C8u;
    // 0x19e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F918u, 0x19E6C8u, 0x19E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6D0u;
label_19e6d0:
    // 0x19e6d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19e6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6d4: 0xc06790e  jal         func_19E438
    ctx->pc = 0x19E6D4u;
    SET_GPR_U32(ctx, 31, 0x19E6DCu);
    ctx->pc = 0x19E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6D4u;
    // 0x19e6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E438u, 0x19E6D4u, 0x19E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6DCu;
label_19e6dc:
    // 0x19e6dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19e6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6e0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x19e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x19e6e4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x19e6e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E6E8u;
    {
        const bool branch_taken_0x19e6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E8u;
        // 0x19e6ec: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6e8) {
            ctx->pc = 0x19E704u;
            return;
        }
    }
    ctx->pc = 0x19E6F0u;
    // 0x19e6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6f4: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x19E6F4u;
    SET_GPR_U32(ctx, 31, 0x19E6FCu);
    ctx->pc = 0x19E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6F4u;
    // 0x19e6f8: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x19E6F4u, 0x19E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6FCu;
label_19e6fc:
    // 0x19e6fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19E6FCu;
    {
        const bool branch_taken_0x19e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6FCu;
        // 0x19e700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6fc) {
            ctx->pc = 0x19E758u;
            return;
        }
    }
    ctx->pc = 0x19E704u;
}
