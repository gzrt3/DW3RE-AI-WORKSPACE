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

// Function: entry_001b078c
// Address: 0x1b078c - 0x1b0810
void entry_001b078c_0x1b078c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b078c_0x1b078c");
#endif

    switch (ctx->pc) {
        case 0x1b07bcu: goto label_1b07bc;
        case 0x1b07d0u: goto label_1b07d0;
        case 0x1b07ecu: goto label_1b07ec;
        case 0x1b080cu: goto label_1b080c;
        default: break;
    }

    ctx->pc = 0x1b078cu;

    // 0x1b078c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b078cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0790: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x1b0794: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    // 0x1b0798: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b079c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b07a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b07a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b07a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b07a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b07acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b07b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b07b4: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B07B4u;
    SET_GPR_U32(ctx, 31, 0x1B07BCu);
    ctx->pc = 0x1B07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07B4u;
    // 0x1b07b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B07B4u, 0x1B07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07BCu;
label_1b07bc:
    // 0x1b07bc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B07BCu;
    {
        const bool branch_taken_0x1b07bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07BCu;
        // 0x1b07c0: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07bc) {
            ctx->pc = 0x1B07D8u;
            goto label_1b07d8;
        }
    }
    ctx->pc = 0x1B07C4u;
    // 0x1b07c4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b07c8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B07C8u;
    SET_GPR_U32(ctx, 31, 0x1B07D0u);
    ctx->pc = 0x1B07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07C8u;
    // 0x1b07cc: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B07C8u, 0x1B07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07D0u;
label_1b07d0:
    // 0x1b07d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B07D0u;
    {
        const bool branch_taken_0x1b07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07D0u;
        // 0x1b07d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07d0) {
            ctx->pc = 0x1B0810u;
            return;
        }
    }
    ctx->pc = 0x1B07D8u;
label_1b07d8:
    // 0x1b07d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b07dc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b07dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b07e0: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
    // 0x1b07e4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B07E4u;
    SET_GPR_U32(ctx, 31, 0x1B07ECu);
    ctx->pc = 0x1B07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07E4u;
    // 0x1b07e8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B07E4u, 0x1B07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07ECu;
label_1b07ec:
    // 0x1b07ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b07f0: 0x8c627290  lw          $v0, 0x7290($v1)
    ctx->pc = 0x1b07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x287290u));
    // 0x1b07f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b07f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b07f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B07F8u;
    {
        const bool branch_taken_0x1b07f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F8u;
        // 0x1b07fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07f8) {
            ctx->pc = 0x1B0810u;
            return;
        }
    }
    ctx->pc = 0x1B0800u;
    // 0x1b0800: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0804: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0804u;
    SET_GPR_U32(ctx, 31, 0x1B080Cu);
    ctx->pc = 0x1B0808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0804u;
    // 0x1b0808: 0x2484ab28  addiu       $a0, $a0, -0x54D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0804u, 0x1B080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B080Cu;
label_1b080c:
    // 0x1b080c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b080cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0810u;
}
