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

// Function: FUN_001e83f0
// Address: 0x1e83f0 - 0x1e84dc
void FUN_001e83f0_0x1e83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e83f0_0x1e83f0");
#endif

    switch (ctx->pc) {
        case 0x1e8438u: goto label_1e8438;
        case 0x1e8448u: goto label_1e8448;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e8498u: goto label_1e8498;
        case 0x1e84b8u: goto label_1e84b8;
        case 0x1e84d8u: goto label_1e84d8;
        default: break;
    }

    ctx->pc = 0x1e83f0u;

    // 0x1e83f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e83f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e83f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e83fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e83fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8408: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8408u;
    {
        const bool branch_taken_0x1e8408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8408u;
        // 0x1e840c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8408) {
            ctx->pc = 0x1E8454u;
            goto label_1e8454;
        }
    }
    ctx->pc = 0x1E8410u;
    // 0x1e8410: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1e8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1e8414: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1e8414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1e8418: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e8418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e841c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E841Cu;
    {
        const bool branch_taken_0x1e841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E841Cu;
        // 0x1e8420: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e841c) {
            ctx->pc = 0x1E8450u;
            goto label_1e8450;
        }
    }
    ctx->pc = 0x1E8424u;
    // 0x1e8424: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e8424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e8428: 0x8c306910  lw          $s0, 0x6910($at)
    ctx->pc = 0x1e8428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26896)));
    // 0x1e842c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e8430: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1E8430u;
    SET_GPR_U32(ctx, 31, 0x1E8438u);
    ctx->pc = 0x1E8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8430u;
    // 0x1e8434: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E8430u, 0x1E8438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8438u;
label_1e8438:
    // 0x1e8438: 0x2604138a  addiu       $a0, $s0, 0x138A
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5002));
    // 0x1e843c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e8440: 0xc041744  jal         func_105D10
    ctx->pc = 0x1E8440u;
    SET_GPR_U32(ctx, 31, 0x1E8448u);
    ctx->pc = 0x1E8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8440u;
    // 0x1e8444: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E8440u, 0x1E8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8448u;
label_1e8448:
    // 0x1e8448: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1E8448u;
    {
        const bool branch_taken_0x1e8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8448u;
        // 0x1e844c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8448) {
            ctx->pc = 0x1E84DCu;
            return;
        }
    }
    ctx->pc = 0x1E8450u;
label_1e8450:
    // 0x1e8450: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1e8450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e8454:
    // 0x1e8454: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8454u;
    {
        const bool branch_taken_0x1e8454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8454) {
            ctx->pc = 0x1E84A0u;
            goto label_1e84a0;
        }
    }
    ctx->pc = 0x1E845Cu;
    // 0x1e845c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1e845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1e8460: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1e8460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1e8464: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1e8468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8468u;
    {
        const bool branch_taken_0x1e8468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8468) {
            ctx->pc = 0x1E84A0u;
            goto label_1e84a0;
        }
    }
    ctx->pc = 0x1E8470u;
    // 0x1e8470: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1e8474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e8478: 0x8c306910  lw          $s0, 0x6910($at)
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x296910u));
    // 0x1e847c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e8480: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1E8480u;
    SET_GPR_U32(ctx, 31, 0x1E8488u);
    ctx->pc = 0x1E8484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8480u;
    // 0x1e8484: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E8480u, 0x1E8488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8488u;
label_1e8488:
    // 0x1e8488: 0x260413c7  addiu       $a0, $s0, 0x13C7
    ctx->pc = 0x1e8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5063));
    // 0x1e848c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e8490: 0xc041744  jal         func_105D10
    ctx->pc = 0x1E8490u;
    SET_GPR_U32(ctx, 31, 0x1E8498u);
    ctx->pc = 0x1E8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8490u;
    // 0x1e8494: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E8490u, 0x1E8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8498u;
label_1e8498:
    // 0x1e8498: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E8498u;
    {
        const bool branch_taken_0x1e8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8498) {
            ctx->pc = 0x1E84D8u;
            goto label_1e84d8;
        }
    }
    ctx->pc = 0x1E84A0u;
label_1e84a0:
    // 0x1e84a0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1e84a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e84a8: 0x8c316910  lw          $s1, 0x6910($at)
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x296910u));
    // 0x1e84ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e84b0: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1E84B0u;
    SET_GPR_U32(ctx, 31, 0x1E84B8u);
    ctx->pc = 0x1E84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84B0u;
    // 0x1e84b4: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E84B0u, 0x1E84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84B8u;
label_1e84b8:
    // 0x1e84b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e84bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e84bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84c0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e84c4: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e84c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e84cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e84d0: 0xc041744  jal         func_105D10
    ctx->pc = 0x1E84D0u;
    SET_GPR_U32(ctx, 31, 0x1E84D8u);
    ctx->pc = 0x1E84D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84D0u;
    // 0x1e84d4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E84D0u, 0x1E84D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84D8u;
label_1e84d8:
    // 0x1e84d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1e84dcu;
}
