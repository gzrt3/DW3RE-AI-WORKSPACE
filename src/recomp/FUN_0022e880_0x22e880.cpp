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

// Function: FUN_0022e880
// Address: 0x22e880 - 0x22e9cc
void FUN_0022e880_0x22e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022e880_0x22e880");
#endif

    switch (ctx->pc) {
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e8e4u: goto label_22e8e4;
        case 0x22e8f4u: goto label_22e8f4;
        case 0x22e904u: goto label_22e904;
        case 0x22e918u: goto label_22e918;
        case 0x22e930u: goto label_22e930;
        case 0x22e970u: goto label_22e970;
        case 0x22e9a0u: goto label_22e9a0;
        case 0x22e9b8u: goto label_22e9b8;
        case 0x22e9c8u: goto label_22e9c8;
        default: break;
    }

    ctx->pc = 0x22e880u;

    // 0x22e880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22e888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e890: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22e894: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x22e894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22e898: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x22E898u;
    {
        const bool branch_taken_0x22e898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e898) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E8A0u;
    // 0x22e8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e8a4: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x22e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
    // 0x22e8a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22e8ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e8b0: 0x600008  jr          $v1
    ctx->pc = 0x22E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E8B8u: goto label_22e8b8;
            case 0x22E8C8u: goto label_22e8c8;
            case 0x22E8ECu: goto label_22e8ec;
            case 0x22E8FCu: goto label_22e8fc;
            case 0x22E90Cu: goto label_22e90c;
            case 0x22E98Cu: goto label_22e98c;
            case 0x22E9A8u: goto label_22e9a8;
            case 0x22E9C0u: goto label_22e9c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E8B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E8B8u;
label_22e8b8:
    // 0x22e8b8: 0xc08b658  jal         func_22D960
    ctx->pc = 0x22E8B8u;
    SET_GPR_U32(ctx, 31, 0x22E8C0u);
    ctx->pc = 0x22E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8B8u;
    // 0x22e8bc: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D960u, 0x22E8B8u, 0x22E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8C0u;
label_22e8c0:
    // 0x22e8c0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x22E8C0u;
    {
        const bool branch_taken_0x22e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C0u;
        // 0x22e8c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8c0) {
            ctx->pc = 0x22E9CCu;
            return;
        }
    }
    ctx->pc = 0x22E8C8u;
label_22e8c8:
    // 0x22e8c8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22e8cc: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22e8d0: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e8d4: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x22e8d8: 0x8488000c  lh          $t0, 0xC($a0)
    ctx->pc = 0x22e8d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22e8dc: 0xc08b800  jal         func_22E000
    ctx->pc = 0x22E8DCu;
    SET_GPR_U32(ctx, 31, 0x22E8E4u);
    ctx->pc = 0x22E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8DCu;
    // 0x22e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E000u, 0x22E8DCu, 0x22E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8E4u;
label_22e8e4:
    // 0x22e8e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x22E8E4u;
    {
        const bool branch_taken_0x22e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8e4) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E8ECu;
label_22e8ec:
    // 0x22e8ec: 0xc08b4b8  jal         func_22D2E0
    ctx->pc = 0x22E8ECu;
    SET_GPR_U32(ctx, 31, 0x22E8F4u);
    ctx->pc = 0x22E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8ECu;
    // 0x22e8f0: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D2E0u, 0x22E8ECu, 0x22E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8F4u;
label_22e8f4:
    // 0x22e8f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x22E8F4u;
    {
        const bool branch_taken_0x22e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8f4) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E8FCu;
label_22e8fc:
    // 0x22e8fc: 0xc08abf4  jal         func_22AFD0
    ctx->pc = 0x22E8FCu;
    SET_GPR_U32(ctx, 31, 0x22E904u);
    ctx->pc = 0x22E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8FCu;
    // 0x22e900: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AFD0u, 0x22E8FCu, 0x22E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E904u;
label_22e904:
    // 0x22e904: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x22E904u;
    {
        const bool branch_taken_0x22e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e904) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E90Cu;
label_22e90c:
    // 0x22e90c: 0x90910002  lbu         $s1, 0x2($a0)
    ctx->pc = 0x22e90cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22e910: 0xc0590dc  jal         func_164370
    ctx->pc = 0x22E910u;
    SET_GPR_U32(ctx, 31, 0x22E918u);
    ctx->pc = 0x22E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E910u;
    // 0x22e914: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22E910u, 0x22E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E918u;
label_22e918:
    // 0x22e918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e91c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22E91Cu;
    {
        const bool branch_taken_0x22e91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E91Cu;
        // 0x22e920: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e91c) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E924u;
    // 0x22e924: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22e928: 0xc066e26  jal         func_19B898
    ctx->pc = 0x22E928u;
    SET_GPR_U32(ctx, 31, 0x22E930u);
    ctx->pc = 0x22E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E928u;
    // 0x22e92c: 0x24a5a490  addiu       $a1, $a1, -0x5B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22E928u, 0x22E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E930u;
label_22e930:
    // 0x22e930: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x22e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x22e934: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x22e938: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22e938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22e93c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22e940: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x22e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22e944: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x22e948: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x22e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e94c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x22e94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22e950: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x22e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e954: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x22e954u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x22e958: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x22e958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x22e95c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x22e95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x22e960: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x22e960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22e964: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x22e964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22e968: 0xc066e26  jal         func_19B898
    ctx->pc = 0x22E968u;
    SET_GPR_U32(ctx, 31, 0x22E970u);
    ctx->pc = 0x22E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E968u;
    // 0x22e96c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22E968u, 0x22E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x22e974: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x22e978: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x22e978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x22e97c: 0x2463b740  addiu       $v1, $v1, -0x48C0
    ctx->pc = 0x22e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948672));
    // 0x22e980: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x22e980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x22e984: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22E984u;
    {
        const bool branch_taken_0x22e984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E984u;
        // 0x22e988: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e984) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E98Cu;
label_22e98c:
    // 0x22e98c: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x22e98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22e990: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x22e994: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e998: 0xc08b148  jal         func_22C520
    ctx->pc = 0x22E998u;
    SET_GPR_U32(ctx, 31, 0x22E9A0u);
    ctx->pc = 0x22E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E998u;
    // 0x22e99c: 0x24c6ef80  addiu       $a2, $a2, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C520u, 0x22E998u, 0x22E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9A0u;
label_22e9a0:
    // 0x22e9a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22E9A0u;
    {
        const bool branch_taken_0x22e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9a0) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E9A8u;
label_22e9a8:
    // 0x22e9a8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x22e9a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22e9ac: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x22e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x22e9b0: 0xc08b028  jal         func_22C0A0
    ctx->pc = 0x22E9B0u;
    SET_GPR_U32(ctx, 31, 0x22E9B8u);
    ctx->pc = 0x22E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9B0u;
    // 0x22e9b4: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C0A0u, 0x22E9B0u, 0x22E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9B8u;
label_22e9b8:
    // 0x22e9b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22E9B8u;
    {
        const bool branch_taken_0x22e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9b8) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E9C0u;
label_22e9c0:
    // 0x22e9c0: 0xc08ad14  jal         func_22B450
    ctx->pc = 0x22E9C0u;
    SET_GPR_U32(ctx, 31, 0x22E9C8u);
    ctx->pc = 0x22E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9C0u;
    // 0x22e9c4: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B450u, 0x22E9C0u, 0x22E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9C8u;
label_22e9c8:
    // 0x22e9c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x22e9ccu;
}
