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

// Function: FUN_001348e0
// Address: 0x1348e0 - 0x134e54
void FUN_001348e0_0x1348e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001348e0_0x1348e0");
#endif

    switch (ctx->pc) {
        case 0x134900u: goto label_134900;
        case 0x134a94u: goto label_134a94;
        case 0x134aa8u: goto label_134aa8;
        case 0x134abcu: goto label_134abc;
        case 0x134aecu: goto label_134aec;
        case 0x134afcu: goto label_134afc;
        case 0x134b10u: goto label_134b10;
        case 0x134b24u: goto label_134b24;
        case 0x134b54u: goto label_134b54;
        case 0x134b74u: goto label_134b74;
        case 0x134b88u: goto label_134b88;
        case 0x134b98u: goto label_134b98;
        case 0x134ba8u: goto label_134ba8;
        case 0x134bd0u: goto label_134bd0;
        case 0x134d18u: goto label_134d18;
        case 0x134d48u: goto label_134d48;
        case 0x134da0u: goto label_134da0;
        case 0x134e28u: goto label_134e28;
        default: break;
    }

    ctx->pc = 0x1348e0u;

    // 0x1348e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1348e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1348e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1348e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1348e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1348e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1348ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1348ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1348f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1348f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1348f4: 0x8c30a3cc  lw          $s0, -0x5C34($at)
    ctx->pc = 0x1348f4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x1348f8: 0x0  nop
    ctx->pc = 0x1348f8u;
    // NOP
    // 0x1348fc: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x1348fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_134900:
    // 0x134900: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x134900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134904: 0x1083014c  beq         $a0, $v1, . + 4 + (0x14C << 2)
    ctx->pc = 0x134904u;
    {
        const bool branch_taken_0x134904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134904u;
        // 0x134908: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134904) {
            ctx->pc = 0x134E38u;
            goto label_134e38;
        }
    }
    ctx->pc = 0x13490Cu;
    // 0x13490c: 0x10830144  beq         $a0, $v1, . + 4 + (0x144 << 2)
    ctx->pc = 0x13490Cu;
    {
        const bool branch_taken_0x13490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13490c) {
            ctx->pc = 0x134E20u;
            goto label_134e20;
        }
    }
    ctx->pc = 0x134914u;
    // 0x134914: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x134918: 0x10830149  beq         $a0, $v1, . + 4 + (0x149 << 2)
    ctx->pc = 0x134918u;
    {
        const bool branch_taken_0x134918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134918u;
        // 0x13491c: 0x2403004d  addiu       $v1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134918) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134920u;
    // 0x134920: 0x1083013a  beq         $a0, $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x134920u;
    {
        const bool branch_taken_0x134920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134920) {
            ctx->pc = 0x134E0Cu;
            goto label_134e0c;
        }
    }
    ctx->pc = 0x134928u;
    // 0x134928: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x134928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x13492c: 0x1083012c  beq         $a0, $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x13492Cu;
    {
        const bool branch_taken_0x13492c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13492Cu;
        // 0x134930: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13492c) {
            ctx->pc = 0x134DE0u;
            goto label_134de0;
        }
    }
    ctx->pc = 0x134934u;
    // 0x134934: 0x10830112  beq         $a0, $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x134934u;
    {
        const bool branch_taken_0x134934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134934) {
            ctx->pc = 0x134D80u;
            goto label_134d80;
        }
    }
    ctx->pc = 0x13493Cu;
    // 0x13493c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x134940: 0x10830103  beq         $a0, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x134940u;
    {
        const bool branch_taken_0x134940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134940u;
        // 0x134944: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134940) {
            ctx->pc = 0x134D50u;
            goto label_134d50;
        }
    }
    ctx->pc = 0x134948u;
    // 0x134948: 0x108300fc  beq         $a0, $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x134948u;
    {
        const bool branch_taken_0x134948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134948) {
            ctx->pc = 0x134D3Cu;
            goto label_134d3c;
        }
    }
    ctx->pc = 0x134950u;
    // 0x134950: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x134950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x134954: 0x108300ee  beq         $a0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x134954u;
    {
        const bool branch_taken_0x134954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134954u;
        // 0x134958: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134954) {
            ctx->pc = 0x134D10u;
            goto label_134d10;
        }
    }
    ctx->pc = 0x13495Cu;
    // 0x13495c: 0x108300e0  beq         $a0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x13495Cu;
    {
        const bool branch_taken_0x13495c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13495c) {
            ctx->pc = 0x134CE0u;
            goto label_134ce0;
        }
    }
    ctx->pc = 0x134964u;
    // 0x134964: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x134968: 0x108300cc  beq         $a0, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x134968u;
    {
        const bool branch_taken_0x134968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134968u;
        // 0x13496c: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134968) {
            ctx->pc = 0x134C9Cu;
            goto label_134c9c;
        }
    }
    ctx->pc = 0x134970u;
    // 0x134970: 0x108300a7  beq         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x134970u;
    {
        const bool branch_taken_0x134970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134970) {
            ctx->pc = 0x134C10u;
            goto label_134c10;
        }
    }
    ctx->pc = 0x134978u;
    // 0x134978: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13497c: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x13497Cu;
    {
        const bool branch_taken_0x13497c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13497Cu;
        // 0x134980: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13497c) {
            ctx->pc = 0x134BB0u;
            goto label_134bb0;
        }
    }
    ctx->pc = 0x134984u;
    // 0x134984: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x134984u;
    {
        const bool branch_taken_0x134984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134984) {
            ctx->pc = 0x134BA0u;
            goto label_134ba0;
        }
    }
    ctx->pc = 0x13498Cu;
    // 0x13498c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134990: 0x1083007f  beq         $a0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x134990u;
    {
        const bool branch_taken_0x134990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134990u;
        // 0x134994: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134990) {
            ctx->pc = 0x134B90u;
            goto label_134b90;
        }
    }
    ctx->pc = 0x134998u;
    // 0x134998: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x134998u;
    {
        const bool branch_taken_0x134998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134998) {
            ctx->pc = 0x134B5Cu;
            goto label_134b5c;
        }
    }
    ctx->pc = 0x1349A0u;
    // 0x1349a0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1349a4: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1349A4u;
    {
        const bool branch_taken_0x1349a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1349A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A4u;
        // 0x1349a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a4) {
            ctx->pc = 0x134B40u;
            goto label_134b40;
        }
    }
    ctx->pc = 0x1349ACu;
    // 0x1349ac: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1349ACu;
    {
        const bool branch_taken_0x1349ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1349ac) {
            ctx->pc = 0x134AD8u;
            goto label_134ad8;
        }
    }
    ctx->pc = 0x1349B4u;
    // 0x1349b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1349B4u;
    {
        const bool branch_taken_0x1349b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1349b4) {
            ctx->pc = 0x1349C4u;
            goto label_1349c4;
        }
    }
    ctx->pc = 0x1349BCu;
    // 0x1349bc: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1349BCu;
    {
        const bool branch_taken_0x1349bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349BCu;
        // 0x1349c0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349bc) {
            ctx->pc = 0x134E44u;
            goto label_134e44;
        }
    }
    ctx->pc = 0x1349C4u;
label_1349c4:
    // 0x1349c4: 0x0  nop
    ctx->pc = 0x1349c4u;
    // NOP
    // 0x1349c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1349cc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1349ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1349d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1349d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1349d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1349d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1349dc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1349dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1349e0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1349e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1349e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1349e8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1349e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1349ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1349ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1349f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1349f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1349f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349f8: 0x0  nop
    ctx->pc = 0x1349f8u;
    // NOP
    // 0x1349fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1349fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134a00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x134a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x134a04: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x134a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x134a08: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x134a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x134a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134a10: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x134a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x134a14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x134a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x134a18: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x134a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x134a1c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x134a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x134a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134a24: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x134a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x134a28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x134a28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x134a2c: 0x0  nop
    ctx->pc = 0x134a2cu;
    // NOP
    // 0x134a30: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x134a30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x134a34: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x134a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a38: 0x0  nop
    ctx->pc = 0x134a38u;
    // NOP
    // 0x134a3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x134A3Cu;
    {
        const bool branch_taken_0x134a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x134A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A3Cu;
        // 0x134a40: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a3c) {
            ctx->pc = 0x134A58u;
            goto label_134a58;
        }
    }
    ctx->pc = 0x134A44u;
    // 0x134a44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x134a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x134a48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x134a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x134a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134A50u;
    {
        const bool branch_taken_0x134a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A50u;
        // 0x134a54: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a50) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A58u;
label_134a58:
    // 0x134a58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x134a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x134a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a60: 0x0  nop
    ctx->pc = 0x134a60u;
    // NOP
    // 0x134a64: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x134a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a68: 0x0  nop
    ctx->pc = 0x134a68u;
    // NOP
    // 0x134a6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x134A6Cu;
    {
        const bool branch_taken_0x134a6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a6c) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A74u;
    // 0x134a74: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x134a78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x134a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x134a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a80: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x134A80u;
    {
        const bool branch_taken_0x134a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A80u;
        // 0x134a84: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a80) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A88u;
label_134a88:
    // 0x134a88: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134a8c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x134A8Cu;
    SET_GPR_U32(ctx, 31, 0x134A94u);
    ctx->pc = 0x134A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A8Cu;
    // 0x134a90: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x134A8Cu, 0x134A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A94u;
label_134a94:
    // 0x134a94: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134a98: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134a9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134a9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134aa0: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x134AA0u;
    SET_GPR_U32(ctx, 31, 0x134AA8u);
    ctx->pc = 0x134AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AA0u;
    // 0x134aa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x134AA0u, 0x134AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA8u;
label_134aa8:
    // 0x134aa8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134aac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x134aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134ab0: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134ab4: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x134AB4u;
    SET_GPR_U32(ctx, 31, 0x134ABCu);
    ctx->pc = 0x134AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AB4u;
    // 0x134ab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x134AB4u, 0x134ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ABCu;
label_134abc:
    // 0x134abc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ac0: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x134ac4: 0xe79484f8  swc1        $f20, -0x7B08($gp)
    ctx->pc = 0x134ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), bits); }
    // 0x134ac8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x134ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x134acc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ad0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x134AD0u;
    {
        const bool branch_taken_0x134ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD0u;
        // 0x134ad4: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ad0) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134AD8u;
label_134ad8:
    // 0x134ad8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134adc: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x134adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x134ae0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x134ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134ae4: 0xc04cf10  jal         func_133C40
    ctx->pc = 0x134AE4u;
    SET_GPR_U32(ctx, 31, 0x134AECu);
    ctx->pc = 0x134AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AE4u;
    // 0x134ae8: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C40u, 0x134AE4u, 0x134AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AECu;
label_134aec:
    // 0x134aec: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x134aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134af0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134af4: 0xc066e44  jal         func_19B910
    ctx->pc = 0x134AF4u;
    SET_GPR_U32(ctx, 31, 0x134AFCu);
    ctx->pc = 0x134AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AF4u;
    // 0x134af8: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x134AF4u, 0x134AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AFCu;
label_134afc:
    // 0x134afc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134b00: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134b04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134b04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134b08: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x134B08u;
    SET_GPR_U32(ctx, 31, 0x134B10u);
    ctx->pc = 0x134B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B08u;
    // 0x134b0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x134B08u, 0x134B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B10u;
label_134b10:
    // 0x134b10: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134b14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x134b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134b18: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134b1c: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x134B1Cu;
    SET_GPR_U32(ctx, 31, 0x134B24u);
    ctx->pc = 0x134B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B1Cu;
    // 0x134b20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x134B1Cu, 0x134B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B24u;
label_134b24:
    // 0x134b24: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134b28: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x134b2c: 0xe79484f8  swc1        $f20, -0x7B08($gp)
    ctx->pc = 0x134b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), bits); }
    // 0x134b30: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x134b34: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134b38: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x134B38u;
    {
        const bool branch_taken_0x134b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B38u;
        // 0x134b3c: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b38) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134B40u;
label_134b40:
    // 0x134b40: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134b44: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x134b44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134b48: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x134b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x134b4c: 0xc08bb00  jal         func_22EC00
    ctx->pc = 0x134B4Cu;
    SET_GPR_U32(ctx, 31, 0x134B54u);
    ctx->pc = 0x134B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B4Cu;
    // 0x134b50: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EC00u, 0x134B4Cu, 0x134B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B54u;
label_134b54:
    // 0x134b54: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x134B54u;
    {
        const bool branch_taken_0x134b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b54) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134B5Cu;
label_134b5c:
    // 0x134b5c: 0x0  nop
    ctx->pc = 0x134b5cu;
    // NOP
    // 0x134b60: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134b64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134B64u;
    {
        const bool branch_taken_0x134b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134b64) {
            ctx->pc = 0x134B7Cu;
            goto label_134b7c;
        }
    }
    ctx->pc = 0x134B6Cu;
    // 0x134b6c: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x134B6Cu;
    SET_GPR_U32(ctx, 31, 0x134B74u);
    ctx->pc = 0x134B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B6Cu;
    // 0x134b70: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x134B6Cu, 0x134B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B74u;
label_134b74:
    // 0x134b74: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x134B74u;
    {
        const bool branch_taken_0x134b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b74) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134B7Cu;
label_134b7c:
    // 0x134b7c: 0x0  nop
    ctx->pc = 0x134b7cu;
    // NOP
    // 0x134b80: 0xc059e78  jal         func_1679E0
    ctx->pc = 0x134B80u;
    SET_GPR_U32(ctx, 31, 0x134B88u);
    ctx->pc = 0x134B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B80u;
    // 0x134b84: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679E0u, 0x134B80u, 0x134B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B88u;
label_134b88:
    // 0x134b88: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x134B88u;
    {
        const bool branch_taken_0x134b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b88) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134B90u;
label_134b90:
    // 0x134b90: 0xc04bfa8  jal         func_12FEA0
    ctx->pc = 0x134B90u;
    SET_GPR_U32(ctx, 31, 0x134B98u);
    ctx->pc = 0x134B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B90u;
    // 0x134b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEA0u, 0x134B90u, 0x134B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B98u;
label_134b98:
    // 0x134b98: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x134B98u;
    {
        const bool branch_taken_0x134b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b98) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134BA0u;
label_134ba0:
    // 0x134ba0: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x134BA0u;
    SET_GPR_U32(ctx, 31, 0x134BA8u);
    ctx->pc = 0x134BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BA0u;
    // 0x134ba4: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x134BA0u, 0x134BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BA8u;
label_134ba8:
    // 0x134ba8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x134BA8u;
    {
        const bool branch_taken_0x134ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ba8) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134BB0u;
label_134bb0:
    // 0x134bb0: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x134bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134bb4: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x134bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134bb8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x134BB8u;
    {
        const bool branch_taken_0x134bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BB8u;
        // 0x134bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bb8) {
            ctx->pc = 0x134BF8u;
            goto label_134bf8;
        }
    }
    ctx->pc = 0x134BC0u;
    // 0x134bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bc4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134bc8: 0x9024a404  lbu         $a0, -0x5BFC($at)
    ctx->pc = 0x134bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A404u));
    // 0x134bcc: 0x0  nop
    ctx->pc = 0x134bccu;
    // NOP
label_134bd0:
    // 0x134bd0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x134bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x134bd4: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x134bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x134bd8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134BD8u;
    {
        const bool branch_taken_0x134bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134bd8) {
            ctx->pc = 0x134BE8u;
            goto label_134be8;
        }
    }
    ctx->pc = 0x134BE0u;
    // 0x134be0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134BE0u;
    {
        const bool branch_taken_0x134be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134be0) {
            ctx->pc = 0x134C04u;
            goto label_134c04;
        }
    }
    ctx->pc = 0x134BE8u;
label_134be8:
    // 0x134be8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x134be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x134bec: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x134becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134bf0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x134BF0u;
    {
        const bool branch_taken_0x134bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BF0u;
        // 0x134bf4: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bf0) {
            ctx->pc = 0x134BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134bd0;
        }
    }
    ctx->pc = 0x134BF8u;
label_134bf8:
    // 0x134bf8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134bfc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134c00: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134c04:
    // 0x134c04: 0x0  nop
    ctx->pc = 0x134c04u;
    // NOP
    // 0x134c08: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x134C08u;
    {
        const bool branch_taken_0x134c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c08) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134C10u;
label_134c10:
    // 0x134c10: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c18: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x134C18u;
    {
        const bool branch_taken_0x134c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C18u;
        // 0x134c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c18) {
            ctx->pc = 0x134C64u;
            goto label_134c64;
        }
    }
    ctx->pc = 0x134C20u;
    // 0x134c20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x134C20u;
    {
        const bool branch_taken_0x134c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C20u;
        // 0x134c24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c20) {
            ctx->pc = 0x134C50u;
            goto label_134c50;
        }
    }
    ctx->pc = 0x134C28u;
    // 0x134c28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134C28u;
    {
        const bool branch_taken_0x134c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134c28) {
            ctx->pc = 0x134C38u;
            goto label_134c38;
        }
    }
    ctx->pc = 0x134C30u;
    // 0x134c30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x134C30u;
    {
        const bool branch_taken_0x134c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c30) {
            ctx->pc = 0x134C78u;
            goto label_134c78;
        }
    }
    ctx->pc = 0x134C38u;
label_134c38:
    // 0x134c38: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134c3c: 0x9023a407  lbu         $v1, -0x5BF9($at)
    ctx->pc = 0x134c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A407u));
    // 0x134c40: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x134c44: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x134c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x134C48u;
    {
        const bool branch_taken_0x134c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C48u;
        // 0x134c4c: 0x38650001  xori        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c48) {
            ctx->pc = 0x134C78u;
            goto label_134c78;
        }
    }
    ctx->pc = 0x134C50u;
label_134c50:
    // 0x134c50: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134c54: 0x9023a407  lbu         $v1, -0x5BF9($at)
    ctx->pc = 0x134c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A407u));
    // 0x134c58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x134c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x134c5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134C5Cu;
    {
        const bool branch_taken_0x134c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C5Cu;
        // 0x134c60: 0x2c650001  sltiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c5c) {
            ctx->pc = 0x134C78u;
            goto label_134c78;
        }
    }
    ctx->pc = 0x134C64u;
label_134c64:
    // 0x134c64: 0x0  nop
    ctx->pc = 0x134c64u;
    // NOP
    // 0x134c68: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134c6c: 0x9023a407  lbu         $v1, -0x5BF9($at)
    ctx->pc = 0x134c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A407u));
    // 0x134c70: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x134c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x134c74: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x134c74u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_134c78:
    // 0x134c78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134C78u;
    {
        const bool branch_taken_0x134c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c78) {
            ctx->pc = 0x134C88u;
            goto label_134c88;
        }
    }
    ctx->pc = 0x134C80u;
    // 0x134c80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134C80u;
    {
        const bool branch_taken_0x134c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c80) {
            ctx->pc = 0x134C94u;
            goto label_134c94;
        }
    }
    ctx->pc = 0x134C88u;
label_134c88:
    // 0x134c88: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134c8c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134c90: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134c94:
    // 0x134c94: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x134C94u;
    {
        const bool branch_taken_0x134c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c94) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134C9Cu;
label_134c9c:
    // 0x134c9c: 0x0  nop
    ctx->pc = 0x134c9cu;
    // NOP
    // 0x134ca0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ca4: 0x9025a405  lbu         $a1, -0x5BFB($at)
    ctx->pc = 0x134ca4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A405u));
    // 0x134ca8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x134cac: 0x2484fd00  addiu       $a0, $a0, -0x300
    ctx->pc = 0x134cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
    // 0x134cb0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x134cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134cb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x134cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x134cb8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x134cb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134cbc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134CBCu;
    {
        const bool branch_taken_0x134cbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134cbc) {
            ctx->pc = 0x134CCCu;
            goto label_134ccc;
        }
    }
    ctx->pc = 0x134CC4u;
    // 0x134cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134CC4u;
    {
        const bool branch_taken_0x134cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cc4) {
            ctx->pc = 0x134CD8u;
            goto label_134cd8;
        }
    }
    ctx->pc = 0x134CCCu;
label_134ccc:
    // 0x134ccc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134cccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134cd0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134cd4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134cd8:
    // 0x134cd8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x134CD8u;
    {
        const bool branch_taken_0x134cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cd8) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134CE0u;
label_134ce0:
    // 0x134ce0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ce4: 0x9024a408  lbu         $a0, -0x5BF8($at)
    ctx->pc = 0x134ce4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A408u));
    // 0x134ce8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x134ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134cec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134CECu;
    {
        const bool branch_taken_0x134cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134cec) {
            ctx->pc = 0x134CFCu;
            goto label_134cfc;
        }
    }
    ctx->pc = 0x134CF4u;
    // 0x134cf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134CF4u;
    {
        const bool branch_taken_0x134cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf4) {
            ctx->pc = 0x134D08u;
            goto label_134d08;
        }
    }
    ctx->pc = 0x134CFCu;
label_134cfc:
    // 0x134cfc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134cfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134d00: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134d04: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134d08:
    // 0x134d08: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x134D08u;
    {
        const bool branch_taken_0x134d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d08) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134D10u;
label_134d10:
    // 0x134d10: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x134D10u;
    SET_GPR_U32(ctx, 31, 0x134D18u);
    ctx->pc = 0x134D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D10u;
    // 0x134d14: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x134D10u, 0x134D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D18u;
label_134d18:
    // 0x134d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D18u;
    {
        const bool branch_taken_0x134d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d18) {
            ctx->pc = 0x134D28u;
            goto label_134d28;
        }
    }
    ctx->pc = 0x134D20u;
    // 0x134d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134D20u;
    {
        const bool branch_taken_0x134d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d20) {
            ctx->pc = 0x134D34u;
            goto label_134d34;
        }
    }
    ctx->pc = 0x134D28u;
label_134d28:
    // 0x134d28: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134d2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134d30: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134d34:
    // 0x134d34: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x134D34u;
    {
        const bool branch_taken_0x134d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d34) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134D3Cu;
label_134d3c:
    // 0x134d3c: 0x0  nop
    ctx->pc = 0x134d3cu;
    // NOP
    // 0x134d40: 0xc04c614  jal         func_131850
    ctx->pc = 0x134D40u;
    SET_GPR_U32(ctx, 31, 0x134D48u);
    ctx->pc = 0x134D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D40u;
    // 0x134d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131850u, 0x134D40u, 0x134D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D48u;
label_134d48:
    // 0x134d48: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x134D48u;
    {
        const bool branch_taken_0x134d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D48u;
        // 0x134d4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d48) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134D50u;
label_134d50:
    // 0x134d50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x134d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x134d54: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x134d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134d58: 0x9023490e  lbu         $v1, 0x490E($at)
    ctx->pc = 0x134d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Eu));
    // 0x134d5c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D5Cu;
    {
        const bool branch_taken_0x134d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134d5c) {
            ctx->pc = 0x134D6Cu;
            goto label_134d6c;
        }
    }
    ctx->pc = 0x134D64u;
    // 0x134d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134D64u;
    {
        const bool branch_taken_0x134d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d64) {
            ctx->pc = 0x134D78u;
            goto label_134d78;
        }
    }
    ctx->pc = 0x134D6Cu;
label_134d6c:
    // 0x134d6c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134d6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134d70: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134d74: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134d78:
    // 0x134d78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x134D78u;
    {
        const bool branch_taken_0x134d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d78) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134D80u;
label_134d80:
    // 0x134d80: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x134d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134d84: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x134d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134d88: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x134D88u;
    {
        const bool branch_taken_0x134d88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D88u;
        // 0x134d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d88) {
            ctx->pc = 0x134DC8u;
            goto label_134dc8;
        }
    }
    ctx->pc = 0x134D90u;
    // 0x134d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x134d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x134d98: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x134d9c: 0x0  nop
    ctx->pc = 0x134d9cu;
    // NOP
label_134da0:
    // 0x134da0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x134da4: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x134da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x134da8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134DA8u;
    {
        const bool branch_taken_0x134da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134da8) {
            ctx->pc = 0x134DB8u;
            goto label_134db8;
        }
    }
    ctx->pc = 0x134DB0u;
    // 0x134db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134DB0u;
    {
        const bool branch_taken_0x134db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134db0) {
            ctx->pc = 0x134DD4u;
            goto label_134dd4;
        }
    }
    ctx->pc = 0x134DB8u;
label_134db8:
    // 0x134db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x134dbc: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x134dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134dc0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x134DC0u;
    {
        const bool branch_taken_0x134dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DC0u;
        // 0x134dc4: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dc0) {
            ctx->pc = 0x134DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134da0;
        }
    }
    ctx->pc = 0x134DC8u;
label_134dc8:
    // 0x134dc8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134dc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134dcc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134dd0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134dd4:
    // 0x134dd4: 0x0  nop
    ctx->pc = 0x134dd4u;
    // NOP
    // 0x134dd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x134DD8u;
    {
        const bool branch_taken_0x134dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134dd8) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134DE0u;
label_134de0:
    // 0x134de0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x134de4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x134de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x134de8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134DE8u;
    {
        const bool branch_taken_0x134de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134de8) {
            ctx->pc = 0x134DF8u;
            goto label_134df8;
        }
    }
    ctx->pc = 0x134DF0u;
    // 0x134df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134DF0u;
    {
        const bool branch_taken_0x134df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134df0) {
            ctx->pc = 0x134E04u;
            goto label_134e04;
        }
    }
    ctx->pc = 0x134DF8u;
label_134df8:
    // 0x134df8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134dfc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134e00: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134e04:
    // 0x134e04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x134E04u;
    {
        const bool branch_taken_0x134e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e04) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134E0Cu;
label_134e0c:
    // 0x134e0c: 0x0  nop
    ctx->pc = 0x134e0cu;
    // NOP
    // 0x134e10: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134e14: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134e18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134E18u;
    {
        const bool branch_taken_0x134e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E18u;
        // 0x134e1c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e18) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134E20u;
label_134e20:
    // 0x134e20: 0xc04df14  jal         func_137C50
    ctx->pc = 0x134E20u;
    SET_GPR_U32(ctx, 31, 0x134E28u);
    ctx->pc = 0x134E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E20u;
    // 0x134e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C50u, 0x134E20u, 0x134E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E28u;
label_134e28:
    // 0x134e28: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134e2c: 0x8c23a3cc  lw          $v1, -0x5C34($at)
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x134e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134E30u;
    {
        const bool branch_taken_0x134e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E30u;
        // 0x134e34: 0x2470ffe0  addiu       $s0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e30) {
            ctx->pc = 0x134E40u;
            goto label_134e40;
        }
    }
    ctx->pc = 0x134E38u;
label_134e38:
    // 0x134e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134E38u;
    {
        const bool branch_taken_0x134e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e38) {
            ctx->pc = 0x134E4Cu;
            goto label_134e4c;
        }
    }
    ctx->pc = 0x134E40u;
label_134e40:
    // 0x134e40: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x134e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_134e44:
    // 0x134e44: 0x1000feae  b           . + 4 + (-0x152 << 2)
    ctx->pc = 0x134E44u;
    {
        const bool branch_taken_0x134e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E44u;
        // 0x134e48: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e44) {
            ctx->pc = 0x134900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134900;
        }
    }
    ctx->pc = 0x134E4Cu;
label_134e4c:
    // 0x134e4c: 0x0  nop
    ctx->pc = 0x134e4cu;
    // NOP
    // 0x134e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x134e54u;
}
