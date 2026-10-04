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

// Function: entry_001a0694
// Address: 0x1a0694 - 0x1a06c4
void entry_001a0694_0x1a0694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0694_0x1a0694");
#endif

    switch (ctx->pc) {
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06c0u: goto label_1a06c0;
        default: break;
    }

    ctx->pc = 0x1a0694u;

    // 0x1a0694: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0694u;
    {
        const bool branch_taken_0x1a0694 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0694) {
            ctx->pc = 0x1A06C4u;
            return;
        }
    }
    ctx->pc = 0x1A069Cu;
    // 0x1a069c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a06a0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a06a4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a06a8: 0x24a5a240  addiu       $a1, $a1, -0x5DC0
    ctx->pc = 0x1a06a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943296));
    // 0x1a06ac: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1A06ACu;
    SET_GPR_U32(ctx, 31, 0x1A06B4u);
    ctx->pc = 0x1A06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06ACu;
    // 0x1a06b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1A06ACu, 0x1A06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06B4u;
label_1a06b4:
    // 0x1a06b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a06b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06b8: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A06B8u;
    SET_GPR_U32(ctx, 31, 0x1A06C0u);
    ctx->pc = 0x1A06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06B8u;
    // 0x1a06bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A06B8u, 0x1A06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06C0u;
label_1a06c0:
    // 0x1a06c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a06c4u;
}
