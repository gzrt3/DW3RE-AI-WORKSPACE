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

// Function: entry_001b04a4
// Address: 0x1b04a4 - 0x1b04e4
void entry_001b04a4_0x1b04a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04a4_0x1b04a4");
#endif

    switch (ctx->pc) {
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04d0u: goto label_1b04d0;
        default: break;
    }

    ctx->pc = 0x1b04a4u;

    // 0x1b04a4: 0x26738380  addiu       $s3, $s3, -0x7C80
    ctx->pc = 0x1b04a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935424));
    // 0x1b04a8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1b04ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04b0: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B04B0u;
    SET_GPR_U32(ctx, 31, 0x1B04B8u);
    ctx->pc = 0x1B04B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04B0u;
    // 0x1b04b4: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B04B0u, 0x1B04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04B8u;
label_1b04b8:
    // 0x1b04b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b04b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04bc: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B04BCu;
    SET_GPR_U32(ctx, 31, 0x1B04C4u);
    ctx->pc = 0x1B04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04BCu;
    // 0x1b04c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B04BCu, 0x1B04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04C4u;
label_1b04c4:
    // 0x1b04c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b04c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04c8: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B04C8u;
    SET_GPR_U32(ctx, 31, 0x1B04D0u);
    ctx->pc = 0x1B04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C8u;
    // 0x1b04cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B04C8u, 0x1B04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04D0u;
label_1b04d0:
    // 0x1b04d0: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1b04d4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B04D4u;
    {
        const bool branch_taken_0x1b04d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04D4u;
        // 0x1b04d8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04d4) {
            ctx->pc = 0x1B04E4u;
            return;
        }
    }
    ctx->pc = 0x1B04DCu;
    // 0x1b04dc: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B04DCu;
    SET_GPR_U32(ctx, 31, 0x1B04E4u);
    ctx->pc = 0x1B04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04DCu;
    // 0x1b04e0: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B04DCu, 0x1B04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04E4u;
}
