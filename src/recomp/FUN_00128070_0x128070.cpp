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

// Function: FUN_00128070
// Address: 0x128070 - 0x128280
void FUN_00128070_0x128070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128070_0x128070");
#endif

    switch (ctx->pc) {
        case 0x12809cu: goto label_12809c;
        case 0x128268u: goto label_128268;
        default: break;
    }

    ctx->pc = 0x128070u;

    // 0x128070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128074: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x128074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x128078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12807c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128080: 0x9025a3ea  lbu         $a1, -0x5C16($at)
    ctx->pc = 0x128080u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x128084: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x128084u;
    {
        const bool branch_taken_0x128084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x128084) {
            ctx->pc = 0x128094u;
            goto label_128094;
        }
    }
    ctx->pc = 0x12808Cu;
    // 0x12808c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12808Cu;
    {
        const bool branch_taken_0x12808c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12808c) {
            ctx->pc = 0x1280A4u;
            goto label_1280a4;
        }
    }
    ctx->pc = 0x128094u;
label_128094:
    // 0x128094: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128094u;
    SET_GPR_U32(ctx, 31, 0x12809Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128094u, 0x12809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12809Cu;
label_12809c:
    // 0x12809c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x12809Cu;
    {
        const bool branch_taken_0x12809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12809Cu;
        // 0x1280a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12809c) {
            ctx->pc = 0x128280u;
            return;
        }
    }
    ctx->pc = 0x1280A4u;
label_1280a4:
    // 0x1280a4: 0x948602e6  lhu         $a2, 0x2E6($a0)
    ctx->pc = 0x1280a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x1280a8: 0x948302f8  lhu         $v1, 0x2F8($a0)
    ctx->pc = 0x1280a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1280ac: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1280acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1280b0: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1280B0u;
    {
        const bool branch_taken_0x1280b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280b0) {
            ctx->pc = 0x12816Cu;
            goto label_12816c;
        }
    }
    ctx->pc = 0x1280B8u;
    // 0x1280b8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1280bc: 0x908602e3  lbu         $a2, 0x2E3($a0)
    ctx->pc = 0x1280bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x1280c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1280c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1280c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1280c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1280c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1280cc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1280ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1280d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1280d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1280d4: 0x0  nop
    ctx->pc = 0x1280d4u;
    // NOP
    // 0x1280d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1280d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1280dc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1280dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1280e0: 0x0  nop
    ctx->pc = 0x1280e0u;
    // NOP
    // 0x1280e4: 0x0  nop
    ctx->pc = 0x1280e4u;
    // NOP
    // 0x1280e8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1280E8u;
    {
        const bool branch_taken_0x1280e8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1280e8) {
            ctx->pc = 0x1280FCu;
            goto label_1280fc;
        }
    }
    ctx->pc = 0x1280F0u;
    // 0x1280f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1280f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1280f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1280F4u;
    {
        const bool branch_taken_0x1280f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280F4u;
        // 0x1280f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280f4) {
            ctx->pc = 0x128118u;
            goto label_128118;
        }
    }
    ctx->pc = 0x1280FCu;
label_1280fc:
    // 0x1280fc: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x1280fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x128100: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x128100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x128104: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x128104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x128108: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x128108u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12810c: 0x0  nop
    ctx->pc = 0x12810cu;
    // NOP
    // 0x128110: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128114: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x128114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_128118:
    // 0x128118: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x128118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12811c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x128120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128124: 0x0  nop
    ctx->pc = 0x128124u;
    // NOP
    // 0x128128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12812c: 0x0  nop
    ctx->pc = 0x12812cu;
    // NOP
    // 0x128130: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x128130u;
    {
        const bool branch_taken_0x128130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128130) {
            ctx->pc = 0x128148u;
            goto label_128148;
        }
    }
    ctx->pc = 0x128138u;
    // 0x128138: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12813c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12813cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128140u;
    {
        const bool branch_taken_0x128140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128140u;
        // 0x128144: 0xa08502e3  sb          $a1, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128140) {
            ctx->pc = 0x128164u;
            goto label_128164;
        }
    }
    ctx->pc = 0x128148u;
label_128148:
    // 0x128148: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12814c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x128150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128154: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128158: 0x0  nop
    ctx->pc = 0x128158u;
    // NOP
    // 0x12815c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12815cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x128160: 0xa08502e3  sb          $a1, 0x2E3($a0)
    ctx->pc = 0x128160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
label_128164:
    // 0x128164: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x128164u;
    {
        const bool branch_taken_0x128164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128164u;
        // 0x128168: 0x948302e6  lhu         $v1, 0x2E6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128164) {
            ctx->pc = 0x128274u;
            goto label_128274;
        }
    }
    ctx->pc = 0x12816Cu;
label_12816c:
    // 0x12816c: 0x948302fa  lhu         $v1, 0x2FA($a0)
    ctx->pc = 0x12816cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 762)));
    // 0x128170: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x128170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x128174: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x128174u;
    {
        const bool branch_taken_0x128174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128174) {
            ctx->pc = 0x128270u;
            goto label_128270;
        }
    }
    ctx->pc = 0x12817Cu;
    // 0x12817c: 0x948702fc  lhu         $a3, 0x2FC($a0)
    ctx->pc = 0x12817cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x128180: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x128180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x128184: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x128184u;
    {
        const bool branch_taken_0x128184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128184) {
            ctx->pc = 0x128260u;
            goto label_128260;
        }
    }
    ctx->pc = 0x12818Cu;
    // 0x12818c: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x12818cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x128190: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128190u;
    {
        const bool branch_taken_0x128190 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x128194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128190u;
        // 0x128194: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128190) {
            ctx->pc = 0x1281A4u;
            goto label_1281a4;
        }
    }
    ctx->pc = 0x128198u;
    // 0x128198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12819c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12819Cu;
    {
        const bool branch_taken_0x12819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12819Cu;
        // 0x1281a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12819c) {
            ctx->pc = 0x1281BCu;
            goto label_1281bc;
        }
    }
    ctx->pc = 0x1281A4u;
label_1281a4:
    // 0x1281a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1281a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1281a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1281a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1281ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1281acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1281b0: 0x0  nop
    ctx->pc = 0x1281b0u;
    // NOP
    // 0x1281b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1281b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1281b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1281b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1281bc:
    // 0x1281bc: 0xe62823  subu        $a1, $a3, $a2
    ctx->pc = 0x1281bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1281c0: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x1281c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x1281c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1281c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1281c8: 0x0  nop
    ctx->pc = 0x1281c8u;
    // NOP
    // 0x1281cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1281ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1281d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1281d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1281d4: 0x0  nop
    ctx->pc = 0x1281d4u;
    // NOP
    // 0x1281d8: 0x0  nop
    ctx->pc = 0x1281d8u;
    // NOP
    // 0x1281dc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1281DCu;
    {
        const bool branch_taken_0x1281dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1281dc) {
            ctx->pc = 0x1281F0u;
            goto label_1281f0;
        }
    }
    ctx->pc = 0x1281E4u;
    // 0x1281e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1281e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1281e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1281E8u;
    {
        const bool branch_taken_0x1281e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281E8u;
        // 0x1281ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281e8) {
            ctx->pc = 0x12820Cu;
            goto label_12820c;
        }
    }
    ctx->pc = 0x1281F0u;
label_1281f0:
    // 0x1281f0: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1281f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1281f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1281f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1281f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1281f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1281fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1281fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128200: 0x0  nop
    ctx->pc = 0x128200u;
    // NOP
    // 0x128204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128208: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x128208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_12820c:
    // 0x12820c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12820cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x128210: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x128214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128218: 0x0  nop
    ctx->pc = 0x128218u;
    // NOP
    // 0x12821c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12821cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128220: 0x0  nop
    ctx->pc = 0x128220u;
    // NOP
    // 0x128224: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x128224u;
    {
        const bool branch_taken_0x128224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128224) {
            ctx->pc = 0x12823Cu;
            goto label_12823c;
        }
    }
    ctx->pc = 0x12822Cu;
    // 0x12822c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12822cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128230: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128234: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128234u;
    {
        const bool branch_taken_0x128234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128234u;
        // 0x128238: 0xa08502e3  sb          $a1, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128234) {
            ctx->pc = 0x128258u;
            goto label_128258;
        }
    }
    ctx->pc = 0x12823Cu;
label_12823c:
    // 0x12823c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12823cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128240: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x128244: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x128248: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x128248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12824c: 0x0  nop
    ctx->pc = 0x12824cu;
    // NOP
    // 0x128250: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x128250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x128254: 0xa08502e3  sb          $a1, 0x2E3($a0)
    ctx->pc = 0x128254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 5));
label_128258:
    // 0x128258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128258u;
    {
        const bool branch_taken_0x128258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128258) {
            ctx->pc = 0x128270u;
            goto label_128270;
        }
    }
    ctx->pc = 0x128260u;
label_128260:
    // 0x128260: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128260u;
    SET_GPR_U32(ctx, 31, 0x128268u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128260u, 0x128268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128268u;
label_128268:
    // 0x128268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x128268u;
    {
        const bool branch_taken_0x128268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128268) {
            ctx->pc = 0x12827Cu;
            goto label_12827c;
        }
    }
    ctx->pc = 0x128270u;
label_128270:
    // 0x128270: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x128270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
label_128274:
    // 0x128274: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128278: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x128278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
label_12827c:
    // 0x12827c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x128280u;
}
