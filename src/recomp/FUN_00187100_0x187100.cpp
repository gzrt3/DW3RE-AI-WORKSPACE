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

// Function: FUN_00187100
// Address: 0x187100 - 0x18724c
void FUN_00187100_0x187100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187100_0x187100");
#endif

    switch (ctx->pc) {
        case 0x187124u: goto label_187124;
        default: break;
    }

    ctx->pc = 0x187100u;

    // 0x187100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187104: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x187108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18710c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x18710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x187110: 0x9025490c  lbu         $a1, 0x490C($at)
    ctx->pc = 0x187110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x187114: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187114u;
    {
        const bool branch_taken_0x187114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x187114) {
            ctx->pc = 0x18712Cu;
            goto label_18712c;
        }
    }
    ctx->pc = 0x18711Cu;
    // 0x18711c: 0xc061c98  jal         func_187260
    ctx->pc = 0x18711Cu;
    SET_GPR_U32(ctx, 31, 0x187124u);
    ctx->pc = 0x187260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187260u, 0x18711Cu, 0x187124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187124u;
label_187124:
    // 0x187124: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x187124u;
    {
        const bool branch_taken_0x187124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187124u;
        // 0x187128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187124) {
            ctx->pc = 0x18724Cu;
            return;
        }
    }
    ctx->pc = 0x18712Cu;
label_18712c:
    // 0x18712c: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x18712cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x187130: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187134: 0x1067002f  beq         $v1, $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x187134u;
    {
        const bool branch_taken_0x187134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x187138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187134u;
        // 0x187138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187134) {
            ctx->pc = 0x1871F4u;
            goto label_1871f4;
        }
    }
    ctx->pc = 0x18713Cu;
    // 0x18713c: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18713Cu;
    {
        const bool branch_taken_0x18713c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x18713c) {
            ctx->pc = 0x187180u;
            goto label_187180;
        }
    }
    ctx->pc = 0x187144u;
    // 0x187144: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187144u;
    {
        const bool branch_taken_0x187144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187144) {
            ctx->pc = 0x187154u;
            goto label_187154;
        }
    }
    ctx->pc = 0x18714Cu;
    // 0x18714c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18714Cu;
    {
        const bool branch_taken_0x18714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18714c) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187154u;
label_187154:
    // 0x187154: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187158: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
    // 0x18715c: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x187160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187164: 0x0  nop
    ctx->pc = 0x187164u;
    // NOP
    // 0x187168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x187168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18716c: 0x0  nop
    ctx->pc = 0x18716cu;
    // NOP
    // 0x187170: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x187170u;
    {
        const bool branch_taken_0x187170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187170) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187178u;
    // 0x187178: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x187178u;
    {
        const bool branch_taken_0x187178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187178u;
        // 0x18717c: 0xa085023c  sb          $a1, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187178) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187180u;
label_187180:
    // 0x187180: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187184: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
    // 0x187188: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x187188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x18718c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18718cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187190: 0x0  nop
    ctx->pc = 0x187190u;
    // NOP
    // 0x187194: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x187194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187198: 0x0  nop
    ctx->pc = 0x187198u;
    // NOP
    // 0x18719c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18719Cu;
    {
        const bool branch_taken_0x18719c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18719c) {
            ctx->pc = 0x1871ACu;
            goto label_1871ac;
        }
    }
    ctx->pc = 0x1871A4u;
    // 0x1871a4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1871A4u;
    {
        const bool branch_taken_0x1871a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a4) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x1871ACu;
label_1871ac:
    // 0x1871ac: 0x90860244  lbu         $a2, 0x244($a0)
    ctx->pc = 0x1871acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x1871b0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1871b4: 0x2463aec4  addiu       $v1, $v1, -0x513C
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946500));
    // 0x1871b8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1871bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1871c0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1871c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1871c8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1871cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1871ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1871d0: 0x0  nop
    ctx->pc = 0x1871d0u;
    // NOP
    // 0x1871d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1871d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1871d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1871d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1871dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1871dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1871e0: 0x0  nop
    ctx->pc = 0x1871e0u;
    // NOP
    // 0x1871e4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1871E4u;
    {
        const bool branch_taken_0x1871e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1871e4) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x1871ECu;
    // 0x1871ec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1871ECu;
    {
        const bool branch_taken_0x1871ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871ECu;
        // 0x1871f0: 0xa087023c  sb          $a3, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871ec) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x1871F4u;
label_1871f4:
    // 0x1871f4: 0x90860244  lbu         $a2, 0x244($a0)
    ctx->pc = 0x1871f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x1871f8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x1871fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1871fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x187200: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x187204: 0x24a5aec4  addiu       $a1, $a1, -0x513C
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946500));
    // 0x187208: 0xc4800260  lwc1        $f0, 0x260($a0)
    ctx->pc = 0x187208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18720c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187210: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x187214: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x187218: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18721c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18721cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187220: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x187220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
    // 0x187228: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18722c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18722cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x187230: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x187230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x187234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x187234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187238: 0x0  nop
    ctx->pc = 0x187238u;
    // NOP
    // 0x18723c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18723Cu;
    {
        const bool branch_taken_0x18723c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18723Cu;
        // 0x187240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18723c) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187244u;
    // 0x187244: 0xa083023c  sb          $v1, 0x23C($a0)
    ctx->pc = 0x187244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 3));
label_187248:
    // 0x187248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x18724cu;
}
