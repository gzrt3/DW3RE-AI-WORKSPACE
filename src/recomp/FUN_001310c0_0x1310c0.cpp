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

// Function: FUN_001310c0
// Address: 0x1310c0 - 0x13132c
void FUN_001310c0_0x1310c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001310c0_0x1310c0");
#endif

    switch (ctx->pc) {
        case 0x1310f4u: goto label_1310f4;
        case 0x131164u: goto label_131164;
        case 0x131194u: goto label_131194;
        case 0x1311e0u: goto label_1311e0;
        case 0x131224u: goto label_131224;
        case 0x13128cu: goto label_13128c;
        case 0x1312acu: goto label_1312ac;
        case 0x1312dcu: goto label_1312dc;
        case 0x1312f8u: goto label_1312f8;
        case 0x13130cu: goto label_13130c;
        case 0x13131cu: goto label_13131c;
        default: break;
    }

    ctx->pc = 0x1310c0u;

    // 0x1310c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1310c4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1310c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1310c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1310c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1310cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1310ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1310d0: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1310d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1310d4: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x1310d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x1310d8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1310d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1310dc: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1310DCu;
    {
        const bool branch_taken_0x1310dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1310E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310DCu;
        // 0x1310e0: 0x2610a030  addiu       $s0, $s0, -0x5FD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310dc) {
            ctx->pc = 0x131328u;
            goto label_131328;
        }
    }
    ctx->pc = 0x1310E4u;
    // 0x1310e4: 0x27858100  addiu       $a1, $gp, -0x7F00
    ctx->pc = 0x1310e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934784));
    // 0x1310e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1310e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1310ec: 0xc04cfd0  jal         func_133F40
    ctx->pc = 0x1310ECu;
    SET_GPR_U32(ctx, 31, 0x1310F4u);
    ctx->pc = 0x1310F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310ECu;
    // 0x1310f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F40u, 0x1310ECu, 0x1310F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F4u;
label_1310f4:
    // 0x1310f4: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1310F4u;
    {
        const bool branch_taken_0x1310f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1310f4) {
            ctx->pc = 0x131328u;
            goto label_131328;
        }
    }
    ctx->pc = 0x1310FCu;
    // 0x1310fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1310fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131100: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x131100u;
    {
        const bool branch_taken_0x131100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131100) {
            ctx->pc = 0x131328u;
            goto label_131328;
        }
    }
    ctx->pc = 0x131108u;
    // 0x131108: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x131108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x13110c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x13110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x131110: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x131110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131114: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x131114u;
    {
        const bool branch_taken_0x131114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x131118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131114u;
        // 0x131118: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131114) {
            ctx->pc = 0x1312B8u;
            goto label_1312b8;
        }
    }
    ctx->pc = 0x13111Cu;
    // 0x13111c: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x13111Cu;
    {
        const bool branch_taken_0x13111c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x131120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13111Cu;
        // 0x131120: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13111c) {
            ctx->pc = 0x131298u;
            goto label_131298;
        }
    }
    ctx->pc = 0x131124u;
    // 0x131124: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x131124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x131128: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x131128u;
    {
        const bool branch_taken_0x131128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131128u;
        // 0x13112c: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131128) {
            ctx->pc = 0x131170u;
            goto label_131170;
        }
    }
    ctx->pc = 0x131130u;
    // 0x131130: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x131130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x131134: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131134u;
    {
        const bool branch_taken_0x131134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x131138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131134u;
        // 0x131138: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131134) {
            ctx->pc = 0x131144u;
            goto label_131144;
        }
    }
    ctx->pc = 0x13113Cu;
    // 0x13113c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x13113Cu;
    {
        const bool branch_taken_0x13113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13113c) {
            ctx->pc = 0x1312E8u;
            goto label_1312e8;
        }
    }
    ctx->pc = 0x131144u;
label_131144:
    // 0x131144: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x131144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x131148: 0x9024a402  lbu         $a0, -0x5BFE($at)
    ctx->pc = 0x131148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943746)));
    // 0x13114c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131150: 0x8c22a448  lw          $v0, -0x5BB8($at)
    ctx->pc = 0x131150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A448u));
    // 0x131154: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x131154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131158: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x131158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13115c: 0xc05b69c  jal         func_16DA70
    ctx->pc = 0x13115Cu;
    SET_GPR_U32(ctx, 31, 0x131164u);
    ctx->pc = 0x131160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13115Cu;
    // 0x131160: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA70u, 0x13115Cu, 0x131164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131164u;
label_131164:
    // 0x131164: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x131168: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x131168u;
    {
        const bool branch_taken_0x131168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131168u;
        // 0x13116c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131168) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x131170u;
label_131170:
    // 0x131170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131174: 0x9023a404  lbu         $v1, -0x5BFC($at)
    ctx->pc = 0x131174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943748)));
    // 0x131178: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x131178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13117c: 0x8c27a448  lw          $a3, -0x5BB8($at)
    ctx->pc = 0x13117cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x30A448u));
    // 0x131180: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x131180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x131184: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x131184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x131188: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x131188u;
    {
        const bool branch_taken_0x131188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131188u;
        // 0x13118c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131188) {
            ctx->pc = 0x1311B0u;
            goto label_1311b0;
        }
    }
    ctx->pc = 0x131190u;
    // 0x131190: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x131190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_131194:
    // 0x131194: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x131194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x131198: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131198u;
    {
        const bool branch_taken_0x131198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131198u;
        // 0x13119c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131198) {
            ctx->pc = 0x1311B0u;
            goto label_1311b0;
        }
    }
    ctx->pc = 0x1311A0u;
    // 0x1311a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1311a4: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x1311a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1311a8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1311A8u;
    {
        const bool branch_taken_0x1311a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1311a8) {
            ctx->pc = 0x131194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131194;
        }
    }
    ctx->pc = 0x1311B0u;
label_1311b0:
    // 0x1311b0: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x1311b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1311b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1311b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1311b8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1311B8u;
    {
        const bool branch_taken_0x1311b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311B8u;
        // 0x1311bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311b8) {
            ctx->pc = 0x131268u;
            goto label_131268;
        }
    }
    ctx->pc = 0x1311C0u;
    // 0x1311c0: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1311C0u;
    {
        const bool branch_taken_0x1311c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1311c0) {
            ctx->pc = 0x13121Cu;
            goto label_13121c;
        }
    }
    ctx->pc = 0x1311C8u;
    // 0x1311c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1311C8u;
    {
        const bool branch_taken_0x1311c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1311c8) {
            ctx->pc = 0x1311D8u;
            goto label_1311d8;
        }
    }
    ctx->pc = 0x1311D0u;
    // 0x1311d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1311D0u;
    {
        const bool branch_taken_0x1311d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1311d0) {
            ctx->pc = 0x131274u;
            goto label_131274;
        }
    }
    ctx->pc = 0x1311D8u;
label_1311d8:
    // 0x1311d8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1311D8u;
    SET_GPR_U32(ctx, 31, 0x1311E0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1311D8u, 0x1311E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E0u;
label_1311e0:
    // 0x1311e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1311e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1311e4: 0x0  nop
    ctx->pc = 0x1311e4u;
    // NOP
    // 0x1311e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1311e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1311ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1311ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1311f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1311f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1311f4: 0x0  nop
    ctx->pc = 0x1311f4u;
    // NOP
    // 0x1311f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1311f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1311fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1311fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131204: 0x0  nop
    ctx->pc = 0x131204u;
    // NOP
    // 0x131208: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x131208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x13120c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13120cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131210: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131214: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x131214u;
    {
        const bool branch_taken_0x131214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131214u;
        // 0x131218: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131214) {
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x13121Cu;
label_13121c:
    // 0x13121c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x13121Cu;
    SET_GPR_U32(ctx, 31, 0x131224u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x13121Cu, 0x131224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131224u;
label_131224:
    // 0x131224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131228: 0x0  nop
    ctx->pc = 0x131228u;
    // NOP
    // 0x13122c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13122cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x131230: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x131234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131238: 0x0  nop
    ctx->pc = 0x131238u;
    // NOP
    // 0x13123c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x13123cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131240: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131248: 0x0  nop
    ctx->pc = 0x131248u;
    // NOP
    // 0x13124c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13124cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x131250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131258: 0x0  nop
    ctx->pc = 0x131258u;
    // NOP
    // 0x13125c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x131260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x131260u;
    {
        const bool branch_taken_0x131260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131260u;
        // 0x131264: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131260) {
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x131268u;
label_131268:
    // 0x131268: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13126c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13126Cu;
    {
        const bool branch_taken_0x13126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13126Cu;
        // 0x131270: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13126c) {
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x131274u;
label_131274:
    // 0x131274: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x131274u;
    {
        const bool branch_taken_0x131274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131274u;
        // 0x131278: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131274) {
            ctx->pc = 0x13132Cu;
            return;
        }
    }
    ctx->pc = 0x13127Cu;
label_13127c:
    // 0x13127c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131280: 0x9024a404  lbu         $a0, -0x5BFC($at)
    ctx->pc = 0x131280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A404u));
    // 0x131284: 0xc05b6d8  jal         func_16DB60
    ctx->pc = 0x131284u;
    SET_GPR_U32(ctx, 31, 0x13128Cu);
    ctx->pc = 0x131288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131284u;
    // 0x131288: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB60u, 0x131284u, 0x13128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13128Cu;
label_13128c:
    // 0x13128c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x131290: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131290u;
    {
        const bool branch_taken_0x131290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131290u;
        // 0x131294: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131290) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x131298u;
label_131298:
    // 0x131298: 0x9024a402  lbu         $a0, -0x5BFE($at)
    ctx->pc = 0x131298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943746)));
    // 0x13129c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13129cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1312a0: 0x9026a404  lbu         $a2, -0x5BFC($at)
    ctx->pc = 0x1312a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x30A404u));
    // 0x1312a4: 0xc05b6bc  jal         func_16DAF0
    ctx->pc = 0x1312A4u;
    SET_GPR_U32(ctx, 31, 0x1312ACu);
    ctx->pc = 0x1312A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312A4u;
    // 0x1312a8: 0x84450002  lh          $a1, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DAF0u, 0x1312A4u, 0x1312ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312ACu;
label_1312ac:
    // 0x1312ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1312acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1312b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1312B0u;
    {
        const bool branch_taken_0x1312b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312B0u;
        // 0x1312b4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312b0) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312B8u;
label_1312b8:
    // 0x1312b8: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x1312b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1312bc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x1312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x1312c0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1312c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1312c4: 0x2463a409  addiu       $v1, $v1, -0x5BF7
    ctx->pc = 0x1312c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943753));
    // 0x1312c8: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1312cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1312ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1312d0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1312d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1312d4: 0xc05b6bc  jal         func_16DAF0
    ctx->pc = 0x1312D4u;
    SET_GPR_U32(ctx, 31, 0x1312DCu);
    ctx->pc = 0x1312D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312D4u;
    // 0x1312d8: 0x9024a402  lbu         $a0, -0x5BFE($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943746)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DAF0u, 0x1312D4u, 0x1312DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312DCu;
label_1312dc:
    // 0x1312dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1312dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1312e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1312E0u;
    {
        const bool branch_taken_0x1312e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E0u;
        // 0x1312e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312e0) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312E8u;
label_1312e8:
    // 0x1312e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1312E8u;
    {
        const bool branch_taken_0x1312e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1312e8) {
            ctx->pc = 0x131328u;
            goto label_131328;
        }
    }
    ctx->pc = 0x1312F0u;
label_1312f0:
    // 0x1312f0: 0xc05b648  jal         func_16D920
    ctx->pc = 0x1312F0u;
    SET_GPR_U32(ctx, 31, 0x1312F8u);
    ctx->pc = 0x16D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D920u, 0x1312F0u, 0x1312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312F8u;
label_1312f8:
    // 0x1312f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1312fc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1312FCu;
    {
        const bool branch_taken_0x1312fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1312fc) {
            ctx->pc = 0x131314u;
            goto label_131314;
        }
    }
    ctx->pc = 0x131304u;
    // 0x131304: 0xc05b640  jal         func_16D900
    ctx->pc = 0x131304u;
    SET_GPR_U32(ctx, 31, 0x13130Cu);
    ctx->pc = 0x16D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D900u, 0x131304u, 0x13130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13130Cu;
label_13130c:
    // 0x13130c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13130Cu;
    {
        const bool branch_taken_0x13130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13130Cu;
        // 0x131310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13130c) {
            ctx->pc = 0x131324u;
            goto label_131324;
        }
    }
    ctx->pc = 0x131314u;
label_131314:
    // 0x131314: 0xc05b848  jal         func_16E120
    ctx->pc = 0x131314u;
    SET_GPR_U32(ctx, 31, 0x13131Cu);
    ctx->pc = 0x131318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131314u;
    // 0x131318: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E120u, 0x131314u, 0x13131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13131Cu;
label_13131c:
    // 0x13131c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x13131cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x131320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131324:
    // 0x131324: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x131324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_131328:
    // 0x131328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13132cu;
}
