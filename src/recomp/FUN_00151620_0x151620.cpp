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

// Function: FUN_00151620
// Address: 0x151620 - 0x15179c
void FUN_00151620_0x151620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151620_0x151620");
#endif

    switch (ctx->pc) {
        case 0x1516d8u: goto label_1516d8;
        case 0x151780u: goto label_151780;
        case 0x151798u: goto label_151798;
        default: break;
    }

    ctx->pc = 0x151620u;

    // 0x151620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151624: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x151624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x151628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15162c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x151630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151634: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x151634u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x334AF4u));
    // 0x151638: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151638u;
    {
        const bool branch_taken_0x151638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151638u;
        // 0x15163c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151638) {
            ctx->pc = 0x151650u;
            goto label_151650;
        }
    }
    ctx->pc = 0x151640u;
    // 0x151640: 0x92040234  lbu         $a0, 0x234($s0)
    ctx->pc = 0x151640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x151644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151648: 0x14830053  bne         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151648) {
            ctx->pc = 0x151798u;
            goto label_151798;
        }
    }
    ctx->pc = 0x151650u;
label_151650:
    // 0x151650: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x151654: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151654u;
    {
        const bool branch_taken_0x151654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151654u;
        // 0x151658: 0x92040248  lbu         $a0, 0x248($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151654) {
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x15165Cu;
    // 0x15165c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x151660: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x151660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF3u));
    // 0x151664: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x151664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x151668: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x151668u;
    {
        const bool branch_taken_0x151668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151668) {
            ctx->pc = 0x151798u;
            goto label_151798;
        }
    }
    ctx->pc = 0x151670u;
label_151670:
    // 0x151670: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x151674: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151674u;
    {
        const bool branch_taken_0x151674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x151678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151674u;
        // 0x151678: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151674) {
            ctx->pc = 0x15168Cu;
            goto label_15168c;
        }
    }
    ctx->pc = 0x15167Cu;
    // 0x15167c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x151680: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151680u;
    {
        const bool branch_taken_0x151680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x151680) {
            ctx->pc = 0x15169Cu;
            goto label_15169c;
        }
    }
    ctx->pc = 0x151688u;
    // 0x151688: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15168c:
    // 0x15168c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x15168Cu;
    {
        const bool branch_taken_0x15168c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15168Cu;
        // 0x151690: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15168c) {
            ctx->pc = 0x15176Cu;
            goto label_15176c;
        }
    }
    ctx->pc = 0x151694u;
    // 0x151694: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x151694u;
    {
        const bool branch_taken_0x151694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151694u;
        // 0x151698: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151694) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x15169Cu;
label_15169c:
    // 0x15169c: 0x92060249  lbu         $a2, 0x249($s0)
    ctx->pc = 0x15169cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x1516a0: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x1516a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1516a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1516A4u;
    {
        const bool branch_taken_0x1516a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516A4u;
        // 0x1516a8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516a4) {
            ctx->pc = 0x1516BCu;
            goto label_1516bc;
        }
    }
    ctx->pc = 0x1516ACu;
    // 0x1516ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1516b0: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1516B0u;
    {
        const bool branch_taken_0x1516b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1516b0) {
            ctx->pc = 0x151764u;
            goto label_151764;
        }
    }
    ctx->pc = 0x1516B8u;
    // 0x1516b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1516bc:
    // 0x1516bc: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1516BCu;
    {
        const bool branch_taken_0x1516bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516BCu;
        // 0x1516c0: 0x28810010  slti        $at, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516bc) {
            ctx->pc = 0x151718u;
            goto label_151718;
        }
    }
    ctx->pc = 0x1516C4u;
    // 0x1516c4: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x1516c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1516c8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1516C8u;
    {
        const bool branch_taken_0x1516c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C8u;
        // 0x1516cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c8) {
            ctx->pc = 0x151710u;
            goto label_151710;
        }
    }
    ctx->pc = 0x1516D0u;
    // 0x1516d0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1516D0u;
    SET_GPR_U32(ctx, 31, 0x1516D8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1516D0u, 0x1516D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516D8u;
label_1516d8:
    // 0x1516d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1516d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1516dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1516e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1516e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1516e4: 0x0  nop
    ctx->pc = 0x1516e4u;
    // NOP
    // 0x1516e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1516e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1516ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1516f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1516f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1516f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1516f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1516f8: 0x0  nop
    ctx->pc = 0x1516f8u;
    // NOP
    // 0x1516fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1516fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x151700: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151704: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x151704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x151708: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x151708u;
    {
        const bool branch_taken_0x151708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151708u;
        // 0x15170c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151708) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151710u;
label_151710:
    // 0x151710: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x151710u;
    {
        const bool branch_taken_0x151710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151710) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151718u;
label_151718:
    // 0x151718: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x151718u;
    {
        const bool branch_taken_0x151718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151718u;
        // 0x15171c: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151718) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151720u;
    // 0x151720: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151720u;
    {
        const bool branch_taken_0x151720 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x151724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151720u;
        // 0x151724: 0x28a10003  slti        $at, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151720) {
            ctx->pc = 0x151738u;
            goto label_151738;
        }
    }
    ctx->pc = 0x151728u;
    // 0x151728: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151728u;
    {
        const bool branch_taken_0x151728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x151728) {
            ctx->pc = 0x151734u;
            goto label_151734;
        }
    }
    ctx->pc = 0x151730u;
    // 0x151730: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_151734:
    // 0x151734: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x151734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_151738:
    // 0x151738: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x151738u;
    {
        const bool branch_taken_0x151738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151738u;
        // 0x15173c: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151738) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151740u;
    // 0x151740: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x151740u;
    {
        const bool branch_taken_0x151740 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x151744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151740u;
        // 0x151744: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151740) {
            ctx->pc = 0x151754u;
            goto label_151754;
        }
    }
    ctx->pc = 0x151748u;
    // 0x151748: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x15174c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x151750: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x151750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_151754:
    // 0x151754: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x151754u;
    {
        const bool branch_taken_0x151754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151754) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x15175Cu;
    // 0x15175c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15175Cu;
    {
        const bool branch_taken_0x15175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15175Cu;
        // 0x151760: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15175c) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151764u;
label_151764:
    // 0x151764: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x151764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151768:
    // 0x151768: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15176c:
    // 0x15176c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15176Cu;
    {
        const bool branch_taken_0x15176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x151770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15176Cu;
        // 0x151770: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15176c) {
            ctx->pc = 0x151798u;
            goto label_151798;
        }
    }
    ctx->pc = 0x151774u;
    // 0x151774: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x151774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151778: 0xc054864  jal         func_152190
    ctx->pc = 0x151778u;
    SET_GPR_U32(ctx, 31, 0x151780u);
    ctx->pc = 0x15177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151778u;
    // 0x15177c: 0x24060e10  addiu       $a2, $zero, 0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152190u, 0x151778u, 0x151780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151780u;
label_151780:
    // 0x151780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151784: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x151788: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x151788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x15178c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x151790: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x151790u;
    SET_GPR_U32(ctx, 31, 0x151798u);
    ctx->pc = 0x151794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151790u;
    // 0x151794: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x151790u, 0x151798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151798u;
label_151798:
    // 0x151798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x15179cu;
}
