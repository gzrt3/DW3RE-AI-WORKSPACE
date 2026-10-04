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

// Function: entry_001a000c
// Address: 0x1a000c - 0x1a003c
void entry_001a000c_0x1a000c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a000c_0x1a000c");
#endif

    switch (ctx->pc) {
        case 0x1a0018u: goto label_1a0018;
        case 0x1a0028u: goto label_1a0028;
        case 0x1a0034u: goto label_1a0034;
        default: break;
    }

    ctx->pc = 0x1a000cu;

    // 0x1a000c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0010: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0010u;
    SET_GPR_U32(ctx, 31, 0x1A0018u);
    ctx->pc = 0x1A0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0010u;
    // 0x1a0014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0010u, 0x1A0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0018u;
label_1a0018:
    // 0x1a0018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0018u;
    {
        const bool branch_taken_0x1a0018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0018) {
            ctx->pc = 0x1A003Cu;
            return;
        }
    }
    ctx->pc = 0x1A0020u;
    // 0x1a0020: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A0020u;
    SET_GPR_U32(ctx, 31, 0x1A0028u);
    ctx->pc = 0x1A0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0020u;
    // 0x1a0024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A0020u, 0x1A0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0028u;
label_1a0028:
    // 0x1a0028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a002c: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A002Cu;
    SET_GPR_U32(ctx, 31, 0x1A0034u);
    ctx->pc = 0x1A0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A002Cu;
    // 0x1a0030: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A002Cu, 0x1A0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0034u;
label_1a0034:
    // 0x1a0034: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A0034u;
    SET_GPR_U32(ctx, 31, 0x1A003Cu);
    ctx->pc = 0x1A0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0034u;
    // 0x1a0038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A0034u, 0x1A003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A003Cu;
}
