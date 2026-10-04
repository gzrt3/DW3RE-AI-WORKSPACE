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

// Function: FUN_001402c0
// Address: 0x1402c0 - 0x1407c4
void FUN_001402c0_0x1402c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001402c0_0x1402c0");
#endif

    switch (ctx->pc) {
        case 0x140520u: goto label_140520;
        case 0x14053cu: goto label_14053c;
        case 0x1406a8u: goto label_1406a8;
        case 0x140704u: goto label_140704;
        case 0x140724u: goto label_140724;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407c0u: goto label_1407c0;
        default: break;
    }

    ctx->pc = 0x1402c0u;

    // 0x1402c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1402c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1402c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1402c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1402c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1402cc: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x1402ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x1402d0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1402d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1402d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1402D4u;
    {
        const bool branch_taken_0x1402d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1402D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402D4u;
        // 0x1402d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402d4) {
            ctx->pc = 0x1402E8u;
            goto label_1402e8;
        }
    }
    ctx->pc = 0x1402DCu;
    // 0x1402dc: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x1402dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x1402e0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1402E0u;
    {
        const bool branch_taken_0x1402e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1402E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402E0u;
        // 0x1402e4: 0xa6020222  sh          $v0, 0x222($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402e0) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x1402E8u;
label_1402e8:
    // 0x1402e8: 0x8604003c  lh          $a0, 0x3C($s0)
    ctx->pc = 0x1402e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1402ec: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x1402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1402f0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1402F0u;
    {
        const bool branch_taken_0x1402f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1402f0) {
            ctx->pc = 0x140334u;
            goto label_140334;
        }
    }
    ctx->pc = 0x1402F8u;
    // 0x1402f8: 0x28820096  slti        $v0, $a0, 0x96
    ctx->pc = 0x1402f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1402fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1402FCu;
    {
        const bool branch_taken_0x1402fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402FCu;
        // 0x140300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402fc) {
            ctx->pc = 0x140310u;
            goto label_140310;
        }
    }
    ctx->pc = 0x140304u;
    // 0x140304: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140304u;
    {
        const bool branch_taken_0x140304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140304u;
        // 0x140308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140304) {
            ctx->pc = 0x140310u;
            goto label_140310;
        }
    }
    ctx->pc = 0x14030Cu;
    // 0x14030c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14030cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140310:
    // 0x140310: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x140310u;
    {
        const bool branch_taken_0x140310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140310) {
            ctx->pc = 0x140418u;
            goto label_140418;
        }
    }
    ctx->pc = 0x140318u;
    // 0x140318: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14031c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x140320: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x140320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x140324: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x140324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x140328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14032c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x14032Cu;
    {
        const bool branch_taken_0x14032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14032Cu;
        // 0x140330: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14032c) {
            ctx->pc = 0x14041Cu;
            goto label_14041c;
        }
    }
    ctx->pc = 0x140334u;
label_140334:
    // 0x140334: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x140338: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x140338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14033c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x140340: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x140340u;
    {
        const bool branch_taken_0x140340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140340) {
            ctx->pc = 0x1403D0u;
            goto label_1403d0;
        }
    }
    ctx->pc = 0x140348u;
    // 0x140348: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x140348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14034c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14034Cu;
    {
        const bool branch_taken_0x14034c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14034Cu;
        // 0x140350: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14034c) {
            ctx->pc = 0x140360u;
            goto label_140360;
        }
    }
    ctx->pc = 0x140354u;
    // 0x140354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x140358u;
    {
        const bool branch_taken_0x140358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140358u;
        // 0x14035c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140358) {
            ctx->pc = 0x14037Cu;
            goto label_14037c;
        }
    }
    ctx->pc = 0x140360u;
label_140360:
    // 0x140360: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x140360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x140364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x140364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x140368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x140368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14036c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14036cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140370: 0x0  nop
    ctx->pc = 0x140370u;
    // NOP
    // 0x140374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x140378: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x140378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14037c:
    // 0x14037c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14037cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140380: 0x0  nop
    ctx->pc = 0x140380u;
    // NOP
    // 0x140384: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x140384u;
    {
        const bool branch_taken_0x140384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140384) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x14038Cu;
    // 0x14038c: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x14038cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x140390: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140390u;
    {
        const bool branch_taken_0x140390 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140390u;
        // 0x140394: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140390) {
            ctx->pc = 0x1403A8u;
            goto label_1403a8;
        }
    }
    ctx->pc = 0x140398u;
    // 0x140398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14039c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14039Cu;
    {
        const bool branch_taken_0x14039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14039Cu;
        // 0x1403a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14039c) {
            ctx->pc = 0x1403C0u;
            goto label_1403c0;
        }
    }
    ctx->pc = 0x1403A4u;
    // 0x1403a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1403a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1403a8:
    // 0x1403a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1403a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1403ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1403acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1403b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1403b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1403b4: 0x0  nop
    ctx->pc = 0x1403b4u;
    // NOP
    // 0x1403b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1403b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1403bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1403bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1403c0:
    // 0x1403c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1403c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1403c4: 0x0  nop
    ctx->pc = 0x1403c4u;
    // NOP
    // 0x1403c8: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x1403C8u;
    {
        const bool branch_taken_0x1403c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1403c8) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x1403D0u;
label_1403d0:
    // 0x1403d0: 0xde030270  ld          $v1, 0x270($s0)
    ctx->pc = 0x1403d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1403d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1403d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1403d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1403d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1403dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1403dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1403e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1403E0u;
    {
        const bool branch_taken_0x1403e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403e0) {
            ctx->pc = 0x140400u;
            goto label_140400;
        }
    }
    ctx->pc = 0x1403E8u;
    // 0x1403e8: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x1403e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1403ec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1403ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1403f0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1403f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1403f4: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1403f4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1403f8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1403F8u;
    {
        const bool branch_taken_0x1403f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403F8u;
        // 0x1403fc: 0xa6020222  sh          $v0, 0x222($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403f8) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x140400u;
label_140400:
    // 0x140400: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x140404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140408: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x140408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14040c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x14040cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x140410: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x140410u;
    {
        const bool branch_taken_0x140410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140410u;
        // 0x140414: 0xa6020222  sh          $v0, 0x222($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140410) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x140418u;
label_140418:
    // 0x140418: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x140418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_14041c:
    // 0x14041c: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x14041Cu;
    {
        const bool branch_taken_0x14041c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14041c) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x140424u;
    // 0x140424: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x140428: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x140428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x14042c: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x14042Cu;
    {
        const bool branch_taken_0x14042c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14042c) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x140434u;
    // 0x140434: 0x86040222  lh          $a0, 0x222($s0)
    ctx->pc = 0x140434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x140438: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x140438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x14043c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x14043cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x140440: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x140440u;
    {
        const bool branch_taken_0x140440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140440) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x140448u;
    // 0x140448: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x140448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14044c: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x14044Cu;
    {
        const bool branch_taken_0x14044c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14044c) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x140454u;
    // 0x140454: 0x8607028a  lh          $a3, 0x28A($s0)
    ctx->pc = 0x140454u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 650)));
    // 0x140458: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x14045c: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x14045cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x140460: 0x86030288  lh          $v1, 0x288($s0)
    ctx->pc = 0x140460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x140464: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x140464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140468: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x140468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14046c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x140470: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x140474: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x140478: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x140478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14047c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140480: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x140480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x140484: 0x0  nop
    ctx->pc = 0x140484u;
    // NOP
    // 0x140488: 0x0  nop
    ctx->pc = 0x140488u;
    // NOP
    // 0x14048c: 0x1810  mfhi        $v1
    ctx->pc = 0x14048cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x140490: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x140494: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x140498: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x140498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14049c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1404a0: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x1404a0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1404a4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1404a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1404a8: 0x0  nop
    ctx->pc = 0x1404a8u;
    // NOP
    // 0x1404ac: 0x1010  mfhi        $v0
    ctx->pc = 0x1404acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1404b0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x1404b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1404b4: 0xa6020288  sh          $v0, 0x288($s0)
    ctx->pc = 0x1404b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 648), (uint16_t)GPR_U32(ctx, 2));
    // 0x1404b8: 0x86040252  lh          $a0, 0x252($s0)
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x1404bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1404bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1404c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1404c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1404c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1404c8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1404c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1404cc: 0x81100a  movz        $v0, $a0, $at
    ctx->pc = 0x1404ccu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1404d0: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x1404d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x1404d4: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1404d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1404d8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1404d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1404dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1404DCu;
    {
        const bool branch_taken_0x1404dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1404dc) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x1404E4u;
    // 0x1404e4: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x1404e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1404e8: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x1404e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x1404ec: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1404ECu;
    {
        const bool branch_taken_0x1404ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1404ec) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x1404F4u;
    // 0x1404f4: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x1404f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x1404f8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1404f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1404fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1404fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x140500: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140504u;
    {
        const bool branch_taken_0x140504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140504u;
        // 0x140508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140504) {
            ctx->pc = 0x140518u;
            goto label_140518;
        }
    }
    ctx->pc = 0x14050Cu;
    // 0x14050c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14050Cu;
    {
        const bool branch_taken_0x14050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14050Cu;
        // 0x140510: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14050c) {
            ctx->pc = 0x14052Cu;
            goto label_14052c;
        }
    }
    ctx->pc = 0x140514u;
    // 0x140514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140518:
    // 0x140518: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x140518u;
    SET_GPR_U32(ctx, 31, 0x140520u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x140518u, 0x140520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140520u;
label_140520:
    // 0x140520: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140524: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x140528: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x140528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_14052c:
    // 0x14052c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x140530: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x140530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x140534: 0xc05ae1c  jal         func_16B870
    ctx->pc = 0x140534u;
    SET_GPR_U32(ctx, 31, 0x14053Cu);
    ctx->pc = 0x140538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140534u;
    // 0x140538: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x140534u, 0x14053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14053Cu;
label_14053c:
    // 0x14053c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x140540: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140544: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x140544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x140548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140548u;
    {
        const bool branch_taken_0x140548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140548) {
            ctx->pc = 0x140560u;
            goto label_140560;
        }
    }
    ctx->pc = 0x140550u;
    // 0x140550: 0x860201a8  lh          $v0, 0x1A8($s0)
    ctx->pc = 0x140550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x140554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140558u;
    {
        const bool branch_taken_0x140558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140558u;
        // 0x14055c: 0xa60201a8  sh          $v0, 0x1A8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140558) {
            ctx->pc = 0x140564u;
            goto label_140564;
        }
    }
    ctx->pc = 0x140560u;
label_140560:
    // 0x140560: 0xa60001a8  sh          $zero, 0x1A8($s0)
    ctx->pc = 0x140560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 0));
label_140564:
    // 0x140564: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x140568: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x14056c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14056Cu;
    {
        const bool branch_taken_0x14056c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14056c) {
            ctx->pc = 0x1405C4u;
            goto label_1405c4;
        }
    }
    ctx->pc = 0x140574u;
    // 0x140574: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x140574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140578: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x140578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14057c: 0x0  nop
    ctx->pc = 0x14057cu;
    // NOP
    // 0x140580: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x140580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140584: 0x0  nop
    ctx->pc = 0x140584u;
    // NOP
    // 0x140588: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x140588u;
    {
        const bool branch_taken_0x140588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140588) {
            ctx->pc = 0x1405C4u;
            goto label_1405c4;
        }
    }
    ctx->pc = 0x140590u;
    // 0x140590: 0x9204024a  lbu         $a0, 0x24A($s0)
    ctx->pc = 0x140590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 586)));
    // 0x140594: 0x3c024812  lui         $v0, 0x4812
    ctx->pc = 0x140594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18450 << 16));
    // 0x140598: 0x34437c00  ori         $v1, $v0, 0x7C00
    ctx->pc = 0x140598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31744);
    // 0x14059c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1405a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1405a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1405a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1405a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1405a8: 0x841018  mult        $v0, $a0, $a0
    ctx->pc = 0x1405a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1405ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1405acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1405b0: 0x0  nop
    ctx->pc = 0x1405b0u;
    // NOP
    // 0x1405b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1405b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1405b8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1405b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1405bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1405bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1405c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1405c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1405c4:
    // 0x1405c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1405c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1405c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1405cc: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1405ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1405d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1405D0u;
    {
        const bool branch_taken_0x1405d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1405d0) {
            ctx->pc = 0x1405F4u;
            goto label_1405f4;
        }
    }
    ctx->pc = 0x1405D8u;
    // 0x1405d8: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1405dc: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1405e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1405E0u;
    {
        const bool branch_taken_0x1405e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1405e0) {
            ctx->pc = 0x1405F4u;
            goto label_1405f4;
        }
    }
    ctx->pc = 0x1405E8u;
    // 0x1405e8: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x1405e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x1405ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1405ECu;
    {
        const bool branch_taken_0x1405ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405ec) {
            ctx->pc = 0x140638u;
            goto label_140638;
        }
    }
    ctx->pc = 0x1405F4u;
label_1405f4:
    // 0x1405f4: 0x860301aa  lh          $v1, 0x1AA($s0)
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 426)));
    // 0x1405f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1405fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1405fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140600: 0xa60301aa  sh          $v1, 0x1AA($s0)
    ctx->pc = 0x140600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 426), (uint16_t)GPR_U32(ctx, 3));
    // 0x140604: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x140604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x140608: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x140608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14060c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14060Cu;
    {
        const bool branch_taken_0x14060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14060c) {
            ctx->pc = 0x140618u;
            goto label_140618;
        }
    }
    ctx->pc = 0x140614u;
    // 0x140614: 0xa60001ac  sh          $zero, 0x1AC($s0)
    ctx->pc = 0x140614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 0));
label_140618:
    // 0x140618: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x140618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x14061c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x14061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x140620: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140620u;
    {
        const bool branch_taken_0x140620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140620) {
            ctx->pc = 0x14063Cu;
            goto label_14063c;
        }
    }
    ctx->pc = 0x140628u;
    // 0x140628: 0x860201ac  lh          $v0, 0x1AC($s0)
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x14062c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140630u;
    {
        const bool branch_taken_0x140630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140630u;
        // 0x140634: 0xa60201ac  sh          $v0, 0x1AC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140630) {
            ctx->pc = 0x14063Cu;
            goto label_14063c;
        }
    }
    ctx->pc = 0x140638u;
label_140638:
    // 0x140638: 0xa60001aa  sh          $zero, 0x1AA($s0)
    ctx->pc = 0x140638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 426), (uint16_t)GPR_U32(ctx, 0));
label_14063c:
    // 0x14063c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x140640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140644: 0x30420044  andi        $v0, $v0, 0x44
    ctx->pc = 0x140644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)68);
    // 0x140648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x140648u;
    {
        const bool branch_taken_0x140648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140648) {
            ctx->pc = 0x14067Cu;
            goto label_14067c;
        }
    }
    ctx->pc = 0x140650u;
    // 0x140650: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x140650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140654: 0x2402ff9f  addiu       $v0, $zero, -0x61
    ctx->pc = 0x140654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
    // 0x140658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14065c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x14065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x140660: 0x9202023a  lbu         $v0, 0x23A($s0)
    ctx->pc = 0x140660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x140664: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140664u;
    {
        const bool branch_taken_0x140664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140664) {
            ctx->pc = 0x14067Cu;
            goto label_14067c;
        }
    }
    ctx->pc = 0x14066Cu;
    // 0x14066c: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x14066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140670: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x140670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x140674: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140678: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x140678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_14067c:
    // 0x14067c: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x14067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140680: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140684u;
    {
        const bool branch_taken_0x140684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140684) {
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x14068Cu;
    // 0x14068c: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x14068cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x140690: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x140690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x140694: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x140694u;
    {
        const bool branch_taken_0x140694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140694) {
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x14069Cu;
    // 0x14069c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14069cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406a0: 0xc050fa4  jal         func_143E90
    ctx->pc = 0x1406A0u;
    SET_GPR_U32(ctx, 31, 0x1406A8u);
    ctx->pc = 0x1406A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406A0u;
    // 0x1406a4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E90u, 0x1406A0u, 0x1406A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406A8u;
label_1406a8:
    // 0x1406a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1406ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1406b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1406b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1406b4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1406B4u;
    {
        const bool branch_taken_0x1406b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1406b4) {
            ctx->pc = 0x14072Cu;
            goto label_14072c;
        }
    }
    ctx->pc = 0x1406BCu;
    // 0x1406bc: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1406c0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1406c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1406c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1406C4u;
    {
        const bool branch_taken_0x1406c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1406c4) {
            ctx->pc = 0x14072Cu;
            goto label_14072c;
        }
    }
    ctx->pc = 0x1406CCu;
    // 0x1406cc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1406d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1406D0u;
    {
        const bool branch_taken_0x1406d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1406d0) {
            ctx->pc = 0x1406E8u;
            goto label_1406e8;
        }
    }
    ctx->pc = 0x1406D8u;
    // 0x1406d8: 0x8043021f  lb          $v1, 0x21F($v0)
    ctx->pc = 0x1406d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    // 0x1406dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1406dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1406e0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1406E0u;
    {
        const bool branch_taken_0x1406e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1406e0) {
            ctx->pc = 0x14072Cu;
            goto label_14072c;
        }
    }
    ctx->pc = 0x1406E8u;
label_1406e8:
    // 0x1406e8: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x1406e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x1406ec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1406ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1406f0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1406F0u;
    {
        const bool branch_taken_0x1406f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1406f0) {
            ctx->pc = 0x140704u;
            goto label_140704;
        }
    }
    ctx->pc = 0x1406F8u;
    // 0x1406f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1406f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406fc: 0xc050fa4  jal         func_143E90
    ctx->pc = 0x1406FCu;
    SET_GPR_U32(ctx, 31, 0x140704u);
    ctx->pc = 0x140700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406FCu;
    // 0x140700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E90u, 0x1406FCu, 0x140704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140704u;
label_140704:
    // 0x140704: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x140704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140708: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x14070c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x14070cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x140710: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x140710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x140714: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140714u;
    {
        const bool branch_taken_0x140714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140714) {
            ctx->pc = 0x14073Cu;
            goto label_14073c;
        }
    }
    ctx->pc = 0x14071Cu;
    // 0x14071c: 0xc04e334  jal         func_138CD0
    ctx->pc = 0x14071Cu;
    SET_GPR_U32(ctx, 31, 0x140724u);
    ctx->pc = 0x138CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CD0u, 0x14071Cu, 0x140724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140724u;
label_140724:
    // 0x140724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x140724u;
    {
        const bool branch_taken_0x140724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140724u;
        // 0x140728: 0x92020232  lbu         $v0, 0x232($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140724) {
            ctx->pc = 0x140740u;
            goto label_140740;
        }
    }
    ctx->pc = 0x14072Cu;
label_14072c:
    // 0x14072c: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x14072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140730: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x140734: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140738: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x140738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_14073c:
    // 0x14073c: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x14073cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
label_140740:
    // 0x140740: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x140740u;
    {
        const bool branch_taken_0x140740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140740u;
        // 0x140744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140740) {
            ctx->pc = 0x1407B8u;
            goto label_1407b8;
        }
    }
    ctx->pc = 0x140748u;
    // 0x140748: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x140748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x14074c: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x140750: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x140750u;
    {
        const bool branch_taken_0x140750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x140750) {
            ctx->pc = 0x1407B4u;
            goto label_1407b4;
        }
    }
    ctx->pc = 0x140758u;
    // 0x140758: 0xde030270  ld          $v1, 0x270($s0)
    ctx->pc = 0x140758u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x14075c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x140760: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140764: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x140764u;
    {
        const bool branch_taken_0x140764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140764) {
            ctx->pc = 0x1407B4u;
            goto label_1407b4;
        }
    }
    ctx->pc = 0x14076Cu;
    // 0x14076c: 0x8603021e  lh          $v1, 0x21E($s0)
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x140770: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x140770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x140774: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x140774u;
    {
        const bool branch_taken_0x140774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140774u;
        // 0x140778: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140774) {
            ctx->pc = 0x140790u;
            goto label_140790;
        }
    }
    ctx->pc = 0x14077Cu;
    // 0x14077c: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x140780: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x140780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x140784: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x140784u;
    {
        const bool branch_taken_0x140784 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140784u;
        // 0x140788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140784) {
            ctx->pc = 0x1407ACu;
            goto label_1407ac;
        }
    }
    ctx->pc = 0x14078Cu;
    // 0x14078c: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x14078cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
label_140790:
    // 0x140790: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140790u;
    {
        const bool branch_taken_0x140790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140790) {
            ctx->pc = 0x1407B4u;
            goto label_1407b4;
        }
    }
    ctx->pc = 0x140798u;
    // 0x140798: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x140798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x14079c: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x14079cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1407a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1407A0u;
    {
        const bool branch_taken_0x1407a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1407a0) {
            ctx->pc = 0x1407B4u;
            goto label_1407b4;
        }
    }
    ctx->pc = 0x1407A8u;
    // 0x1407a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1407ac:
    // 0x1407ac: 0xc0756dc  jal         func_1D5B70
    ctx->pc = 0x1407ACu;
    SET_GPR_U32(ctx, 31, 0x1407B4u);
    ctx->pc = 0x1D5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B70u, 0x1407ACu, 0x1407B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407B4u;
label_1407b4:
    // 0x1407b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1407b8:
    // 0x1407b8: 0xc054bfc  jal         func_152FF0
    ctx->pc = 0x1407B8u;
    SET_GPR_U32(ctx, 31, 0x1407C0u);
    ctx->pc = 0x152FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FF0u, 0x1407B8u, 0x1407C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C0u;
label_1407c0:
    // 0x1407c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1407c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1407c4u;
}
