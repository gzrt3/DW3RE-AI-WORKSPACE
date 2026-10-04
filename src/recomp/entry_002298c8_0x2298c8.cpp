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

// Function: entry_002298c8
// Address: 0x2298c8 - 0x229918
void entry_002298c8_0x2298c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002298c8_0x2298c8");
#endif

    switch (ctx->pc) {
        case 0x2298d0u: goto label_2298d0;
        case 0x2298e4u: goto label_2298e4;
        case 0x229900u: goto label_229900;
        default: break;
    }

    ctx->pc = 0x2298c8u;

    // 0x2298c8: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x2298C8u;
    SET_GPR_U32(ctx, 31, 0x2298D0u);
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x2298C8u, 0x2298D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298D0u;
label_2298d0:
    // 0x2298d0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2298D0u;
    {
        const bool branch_taken_0x2298d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D0u;
        // 0x2298d4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298d0) {
            ctx->pc = 0x229AE0u;
            return;
        }
    }
    ctx->pc = 0x2298D8u;
    // 0x2298d8: 0x8c30a278  lw          $s0, -0x5D88($at)
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943352)));
    // 0x2298dc: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x2298DCu;
    SET_GPR_U32(ctx, 31, 0x2298E4u);
    ctx->pc = 0x2298E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298DCu;
    // 0x2298e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x2298DCu, 0x2298E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298E4u;
label_2298e4:
    // 0x2298e4: 0x1202007e  beq         $s0, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2298E4u;
    {
        const bool branch_taken_0x2298e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2298e4) {
            ctx->pc = 0x229AE0u;
            return;
        }
    }
    ctx->pc = 0x2298ECu;
    // 0x2298ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2298f0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2298F0u;
    {
        const bool branch_taken_0x2298f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F0u;
        // 0x2298f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298f0) {
            ctx->pc = 0x229918u;
            return;
        }
    }
    ctx->pc = 0x2298F8u;
    // 0x2298f8: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x2298F8u;
    SET_GPR_U32(ctx, 31, 0x229900u);
    ctx->pc = 0x2298FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298F8u;
    // 0x2298fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x2298F8u, 0x229900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229900u;
label_229900:
    // 0x229900: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229904: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A270u));
    // 0x229908: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22990c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x229910u;
    {
        const bool branch_taken_0x229910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229910u;
        // 0x229914: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229910) {
            ctx->pc = 0x229940u;
            return;
        }
    }
    ctx->pc = 0x229918u;
}
