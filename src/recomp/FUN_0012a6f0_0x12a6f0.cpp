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

// Function: FUN_0012a6f0
// Address: 0x12a6f0 - 0x12a904
void FUN_0012a6f0_0x12a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a6f0_0x12a6f0");
#endif

    switch (ctx->pc) {
        case 0x12a750u: goto label_12a750;
        case 0x12a790u: goto label_12a790;
        case 0x12a7c0u: goto label_12a7c0;
        case 0x12a7d0u: goto label_12a7d0;
        case 0x12a7dcu: goto label_12a7dc;
        case 0x12a804u: goto label_12a804;
        case 0x12a818u: goto label_12a818;
        case 0x12a874u: goto label_12a874;
        default: break;
    }

    ctx->pc = 0x12a6f0u;

    // 0x12a6f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12a6f4: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x12a6f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x12a6f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a6fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a700: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x12A700u;
    {
        const bool branch_taken_0x12a700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A700u;
        // 0x12a704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a700) {
            ctx->pc = 0x12A900u;
            goto label_12a900;
        }
    }
    ctx->pc = 0x12A708u;
    // 0x12a708: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x12a708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12a70c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x12a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x12a710: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12a714: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x12a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x12a718: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12a71c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x12a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12a720: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x12a720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x12a724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12a724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12a728: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12a728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a72c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x12A72Cu;
    {
        const bool branch_taken_0x12a72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A72Cu;
        // 0x12a730: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a72c) {
            ctx->pc = 0x12A900u;
            goto label_12a900;
        }
    }
    ctx->pc = 0x12A734u;
    // 0x12a734: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x12a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x12a738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12a73c: 0x8c7101b0  lw          $s1, 0x1B0($v1)
    ctx->pc = 0x12a73cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x12a740: 0x1220006f  beqz        $s1, . + 4 + (0x6F << 2)
    ctx->pc = 0x12A740u;
    {
        const bool branch_taken_0x12a740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a740) {
            ctx->pc = 0x12A900u;
            goto label_12a900;
        }
    }
    ctx->pc = 0x12A748u;
    // 0x12a748: 0xc0590dc  jal         func_164370
    ctx->pc = 0x12A748u;
    SET_GPR_U32(ctx, 31, 0x12A750u);
    ctx->pc = 0x12A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A748u;
    // 0x12a74c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x12A748u, 0x12A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A750u;
label_12a750:
    // 0x12a750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a754: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x12A754u;
    {
        const bool branch_taken_0x12a754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a754) {
            ctx->pc = 0x12A900u;
            goto label_12a900;
        }
    }
    ctx->pc = 0x12A75Cu;
    // 0x12a75c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12a760: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x12a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x12a764: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x12a764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x12a768: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a76c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x12a770: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x12a770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a774: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12a778: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12a778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12a77c: 0x24a20aa0  addiu       $v0, $a1, 0xAA0
    ctx->pc = 0x12a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2720));
    // 0x12a780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12a784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a788: 0xc066e26  jal         func_19B898
    ctx->pc = 0x12A788u;
    SET_GPR_U32(ctx, 31, 0x12A790u);
    ctx->pc = 0x12A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A788u;
    // 0x12a78c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x12A788u, 0x12A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A790u;
label_12a790:
    // 0x12a790: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12a794: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x12a794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x12a798: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x12a798u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x12a79c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12a7a0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x12a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a7a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12a7a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12a7ac: 0x24a20b30  addiu       $v0, $a1, 0xB30
    ctx->pc = 0x12a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2864));
    // 0x12a7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12a7b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a7b8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x12A7B8u;
    SET_GPR_U32(ctx, 31, 0x12A7C0u);
    ctx->pc = 0x12A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7B8u;
    // 0x12a7bc: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x12A7B8u, 0x12A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7C0u;
label_12a7c0:
    // 0x12a7c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a7c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a7c8: 0xc066e08  jal         func_19B820
    ctx->pc = 0x12A7C8u;
    SET_GPR_U32(ctx, 31, 0x12A7D0u);
    ctx->pc = 0x12A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7C8u;
    // 0x12a7cc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x12A7C8u, 0x12A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7D0u;
label_12a7d0:
    // 0x12a7d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a7d4: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x12A7D4u;
    SET_GPR_U32(ctx, 31, 0x12A7DCu);
    ctx->pc = 0x12A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7D4u;
    // 0x12a7d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x12A7D4u, 0x12A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7DCu;
label_12a7dc:
    // 0x12a7dc: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x12a7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x12a7e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a7e4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x12a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a7e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12a7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a7ec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x12a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a7f0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x12a7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12a7f4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x12a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x12a7f8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x12a7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12a7fc: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x12A7FCu;
    SET_GPR_U32(ctx, 31, 0x12A804u);
    ctx->pc = 0x12A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7FCu;
    // 0x12a800: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x12A7FCu, 0x12A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A804u;
label_12a804:
    // 0x12a804: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x12a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x12a808: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a80c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12a80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12a810: 0xc066e14  jal         func_19B850
    ctx->pc = 0x12A810u;
    SET_GPR_U32(ctx, 31, 0x12A818u);
    ctx->pc = 0x12A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A810u;
    // 0x12a814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x12A810u, 0x12A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A818u;
label_12a818:
    // 0x12a818: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x12a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12a81c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x12a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x12a820: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x12a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12a824: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x12a828: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a82c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x12a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a830: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x12a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a834: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12a834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a838: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x12a838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x12a83c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x12a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12a840: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x12a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a844: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12a848: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x12a848u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x12a84c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12a84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12a850: 0x46043042  mul.s       $f1, $f6, $f4
    ctx->pc = 0x12a850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x12a854: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x12a854u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x12a858: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x12a858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12a85c: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x12a85cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x12a860: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x12a860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x12a864: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x12a864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12a868: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12a868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12a86c: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12A86Cu;
    SET_GPR_U32(ctx, 31, 0x12A874u);
    ctx->pc = 0x12A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A86Cu;
    // 0x12a870: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12A86Cu, 0x12A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A874u;
label_12a874:
    // 0x12a874: 0xc78084f8  lwc1        $f0, -0x7B08($gp)
    ctx->pc = 0x12a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a878: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12a878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x12a87c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x12a87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12a880: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12a880u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a884: 0x0  nop
    ctx->pc = 0x12a884u;
    // NOP
    // 0x12a888: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x12a888u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12a88c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12a88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a890: 0x0  nop
    ctx->pc = 0x12a890u;
    // NOP
    // 0x12a894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A894u;
    {
        const bool branch_taken_0x12a894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A894u;
        // 0x12a898: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a894) {
            ctx->pc = 0x12A8A0u;
            goto label_12a8a0;
        }
    }
    ctx->pc = 0x12A89Cu;
    // 0x12a89c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12a89cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a8a0:
    // 0x12a8a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A8A0u;
    {
        const bool branch_taken_0x12a8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a8a0) {
            ctx->pc = 0x12A8BCu;
            goto label_12a8bc;
        }
    }
    ctx->pc = 0x12A8A8u;
    // 0x12a8a8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x12a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x12a8ac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12a8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12a8b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a8b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12A8B4u;
    {
        const bool branch_taken_0x12a8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8B4u;
        // 0x12a8b8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8b4) {
            ctx->pc = 0x12A8ECu;
            goto label_12a8ec;
        }
    }
    ctx->pc = 0x12A8BCu;
label_12a8bc:
    // 0x12a8bc: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x12a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x12a8c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12a8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12a8c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a8c8: 0x0  nop
    ctx->pc = 0x12a8c8u;
    // NOP
    // 0x12a8cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12a8ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a8d0: 0x0  nop
    ctx->pc = 0x12a8d0u;
    // NOP
    // 0x12a8d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12A8D4u;
    {
        const bool branch_taken_0x12a8d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8D4u;
        // 0x12a8d8: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8d4) {
            ctx->pc = 0x12A8ECu;
            goto label_12a8ec;
        }
    }
    ctx->pc = 0x12A8DCu;
    // 0x12a8dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12a8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12a8e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a8e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a8e4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12A8E4u;
    {
        const bool branch_taken_0x12a8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8E4u;
        // 0x12a8e8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8e4) {
            ctx->pc = 0x12A8ECu;
            goto label_12a8ec;
        }
    }
    ctx->pc = 0x12A8ECu;
label_12a8ec:
    // 0x12a8ec: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x12a8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x12a8f0: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12a8f4: 0x2463a920  addiu       $v1, $v1, -0x56E0
    ctx->pc = 0x12a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945056));
    // 0x12a8f8: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x12a8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a8fc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_12a900:
    // 0x12a900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x12a904u;
}
