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

// Function: entry_001a36d8
// Address: 0x1a36d8 - 0x1a370c
void entry_001a36d8_0x1a36d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36d8_0x1a36d8");
#endif

    switch (ctx->pc) {
        case 0x1a36e0u: goto label_1a36e0;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3704u: goto label_1a3704;
        default: break;
    }

    ctx->pc = 0x1a36d8u;

    // 0x1a36d8: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A36D8u;
    SET_GPR_U32(ctx, 31, 0x1A36E0u);
    ctx->pc = 0x1A36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36D8u;
    // 0x1a36dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A36D8u, 0x1A36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36E0u;
label_1a36e0:
    // 0x1a36e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A36E0u;
    {
        const bool branch_taken_0x1a36e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36e0) {
            ctx->pc = 0x1A370Cu;
            return;
        }
    }
    ctx->pc = 0x1A36E8u;
    // 0x1a36e8: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A36E8u;
    SET_GPR_U32(ctx, 31, 0x1A36F0u);
    ctx->pc = 0x1A36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36E8u;
    // 0x1a36ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A36E8u, 0x1A36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36F0u;
label_1a36f0:
    // 0x1a36f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36f4: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A36F4u;
    SET_GPR_U32(ctx, 31, 0x1A36FCu);
    ctx->pc = 0x1A36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36F4u;
    // 0x1a36f8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A36F4u, 0x1A36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36FCu;
label_1a36fc:
    // 0x1a36fc: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A36FCu;
    SET_GPR_U32(ctx, 31, 0x1A3704u);
    ctx->pc = 0x1A3700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36FCu;
    // 0x1a3700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A36FCu, 0x1A3704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3704u;
label_1a3704:
    // 0x1a3704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A3720u;
            return;
        }
    }
    ctx->pc = 0x1A370Cu;
}
