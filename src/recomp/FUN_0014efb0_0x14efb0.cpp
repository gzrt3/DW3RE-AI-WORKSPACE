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

// Function: FUN_0014efb0
// Address: 0x14efb0 - 0x14f468
void FUN_0014efb0_0x14efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014efb0_0x14efb0");
#endif

    switch (ctx->pc) {
        case 0x14f1d8u: goto label_14f1d8;
        case 0x14f26cu: goto label_14f26c;
        case 0x14f284u: goto label_14f284;
        case 0x14f298u: goto label_14f298;
        case 0x14f2a4u: goto label_14f2a4;
        case 0x14f2acu: goto label_14f2ac;
        case 0x14f2b4u: goto label_14f2b4;
        case 0x14f2c8u: goto label_14f2c8;
        case 0x14f2d4u: goto label_14f2d4;
        case 0x14f308u: goto label_14f308;
        case 0x14f314u: goto label_14f314;
        case 0x14f328u: goto label_14f328;
        case 0x14f334u: goto label_14f334;
        case 0x14f34cu: goto label_14f34c;
        case 0x14f370u: goto label_14f370;
        case 0x14f388u: goto label_14f388;
        case 0x14f3b4u: goto label_14f3b4;
        default: break;
    }

    ctx->pc = 0x14efb0u;

    // 0x14efb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14efb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14efb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14efbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14efc0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x14efc4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x14efc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x14efc8: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x14EFC8u;
    {
        const bool branch_taken_0x14efc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFC8u;
        // 0x14efcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efc8) {
            ctx->pc = 0x14F1A8u;
            goto label_14f1a8;
        }
    }
    ctx->pc = 0x14EFD0u;
    // 0x14efd0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x14efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14efd4: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x14EFD4u;
    {
        const bool branch_taken_0x14efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14efd4) {
            ctx->pc = 0x14F1A8u;
            goto label_14f1a8;
        }
    }
    ctx->pc = 0x14EFDCu;
    // 0x14efdc: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x14efdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x14efe0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14efe4: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x14EFE4u;
    {
        const bool branch_taken_0x14efe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFE4u;
        // 0x14efe8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efe4) {
            ctx->pc = 0x14F11Cu;
            goto label_14f11c;
        }
    }
    ctx->pc = 0x14EFECu;
    // 0x14efec: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14F09Cu;
            goto label_14f09c;
        }
    }
    ctx->pc = 0x14EFF4u;
    // 0x14eff4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x14eff8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EFF8u;
    {
        const bool branch_taken_0x14eff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFF8u;
        // 0x14effc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eff8) {
            ctx->pc = 0x14F01Cu;
            goto label_14f01c;
        }
    }
    ctx->pc = 0x14F000u;
    // 0x14f000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F000u;
    {
        const bool branch_taken_0x14f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f000) {
            ctx->pc = 0x14F010u;
            goto label_14f010;
        }
    }
    ctx->pc = 0x14F008u;
    // 0x14f008: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x14F008u;
    {
        const bool branch_taken_0x14f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F008u;
        // 0x14f00c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f008) {
            ctx->pc = 0x14F19Cu;
            goto label_14f19c;
        }
    }
    ctx->pc = 0x14F010u;
label_14f010:
    // 0x14f010: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f014: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x14F014u;
    {
        const bool branch_taken_0x14f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F014u;
        // 0x14f018: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f014) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F01Cu;
label_14f01c:
    // 0x14f01c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f020: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f024: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f028: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14f028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f02c: 0x0  nop
    ctx->pc = 0x14f02cu;
    // NOP
    // 0x14f030: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x14f030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14f034: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x14f034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f038: 0x0  nop
    ctx->pc = 0x14f038u;
    // NOP
    // 0x14f03c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F03Cu;
    {
        const bool branch_taken_0x14f03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F03Cu;
        // 0x14f040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f03c) {
            ctx->pc = 0x14F048u;
            goto label_14f048;
        }
    }
    ctx->pc = 0x14F044u;
    // 0x14f044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f048:
    // 0x14f048: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F048u;
    {
        const bool branch_taken_0x14f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f048) {
            ctx->pc = 0x14F064u;
            goto label_14f064;
        }
    }
    ctx->pc = 0x14F050u;
    // 0x14f050: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f05c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F05Cu;
    {
        const bool branch_taken_0x14f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F05Cu;
        // 0x14f060: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f05c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F064u;
label_14f064:
    // 0x14f064: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x14f068: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f070: 0x0  nop
    ctx->pc = 0x14f070u;
    // NOP
    // 0x14f074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f078: 0x0  nop
    ctx->pc = 0x14f078u;
    // NOP
    // 0x14f07c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F07Cu;
    {
        const bool branch_taken_0x14f07c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F07Cu;
        // 0x14f080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f07c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F084u;
    // 0x14f084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f08c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F08Cu;
    {
        const bool branch_taken_0x14f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F08Cu;
        // 0x14f090: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f08c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F094u;
label_14f094:
    // 0x14f094: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14F094u;
    {
        const bool branch_taken_0x14f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F094u;
        // 0x14f098: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f094) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F09Cu;
label_14f09c:
    // 0x14f09c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f0a0: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x14f0a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f0ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f0b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0b8: 0x0  nop
    ctx->pc = 0x14f0b8u;
    // NOP
    // 0x14f0bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14f0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14f0c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f0c4: 0x0  nop
    ctx->pc = 0x14f0c4u;
    // NOP
    // 0x14f0c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F0C8u;
    {
        const bool branch_taken_0x14f0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0C8u;
        // 0x14f0cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0c8) {
            ctx->pc = 0x14F0E4u;
            goto label_14f0e4;
        }
    }
    ctx->pc = 0x14F0D0u;
    // 0x14f0d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f0d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F0DCu;
    {
        const bool branch_taken_0x14f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0DCu;
        // 0x14f0e0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0dc) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F0E4u;
label_14f0e4:
    // 0x14f0e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0ec: 0x0  nop
    ctx->pc = 0x14f0ecu;
    // NOP
    // 0x14f0f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f0f4: 0x0  nop
    ctx->pc = 0x14f0f4u;
    // NOP
    // 0x14f0f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F0F8u;
    {
        const bool branch_taken_0x14f0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f0f8) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F100u;
    // 0x14f100: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f10c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F10Cu;
    {
        const bool branch_taken_0x14f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F10Cu;
        // 0x14f110: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f10c) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F114u;
label_14f114:
    // 0x14f114: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x14F114u;
    {
        const bool branch_taken_0x14f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F114u;
        // 0x14f118: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f114) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F11Cu;
label_14f11c:
    // 0x14f11c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f120: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14f124: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f12c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f130: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f138: 0x0  nop
    ctx->pc = 0x14f138u;
    // NOP
    // 0x14f13c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14f13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14f140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f144: 0x0  nop
    ctx->pc = 0x14f144u;
    // NOP
    // 0x14f148: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F148u;
    {
        const bool branch_taken_0x14f148 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F148u;
        // 0x14f14c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f148) {
            ctx->pc = 0x14F164u;
            goto label_14f164;
        }
    }
    ctx->pc = 0x14F150u;
    // 0x14f150: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f154: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f15c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F15Cu;
    {
        const bool branch_taken_0x14f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F15Cu;
        // 0x14f160: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f15c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F164u;
label_14f164:
    // 0x14f164: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f16c: 0x0  nop
    ctx->pc = 0x14f16cu;
    // NOP
    // 0x14f170: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
    // 0x14f178: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F178u;
    {
        const bool branch_taken_0x14f178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f178) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F180u;
    // 0x14f180: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f18c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F18Cu;
    {
        const bool branch_taken_0x14f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F18Cu;
        // 0x14f190: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f18c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F194u;
label_14f194:
    // 0x14f194: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14F194u;
    {
        const bool branch_taken_0x14f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F194u;
        // 0x14f198: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f194) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F19Cu;
label_14f19c:
    // 0x14f19c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f1a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14F1A0u;
    {
        const bool branch_taken_0x14f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1A0u;
        // 0x14f1a4: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1a0) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F1A8u;
label_14f1a8:
    // 0x14f1a8: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x14f1ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F1ACu;
    {
        const bool branch_taken_0x14f1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f1ac) {
            ctx->pc = 0x14F1C0u;
            goto label_14f1c0;
        }
    }
    ctx->pc = 0x14F1B4u;
    // 0x14f1b4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x14f1b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F1B8u;
    {
        const bool branch_taken_0x14f1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1B8u;
        // 0x14f1bc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1b8) {
            ctx->pc = 0x14F1E0u;
            goto label_14f1e0;
        }
    }
    ctx->pc = 0x14F1C0u;
label_14f1c0:
    // 0x14f1c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f1c4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x14f1c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x14f1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14f1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f1d0: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x14F1D0u;
    SET_GPR_U32(ctx, 31, 0x14F1D8u);
    ctx->pc = 0x14F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1D0u;
    // 0x14f1d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x14F1D0u, 0x14F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1D8u;
label_14f1d8:
    // 0x14f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F1D8u;
    {
        const bool branch_taken_0x14f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D8u;
        // 0x14f1dc: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1d8) {
            ctx->pc = 0x14F1E8u;
            goto label_14f1e8;
        }
    }
    ctx->pc = 0x14F1E0u;
label_14f1e0:
    // 0x14f1e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f1e4: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x14f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_14f1e8:
    // 0x14f1e8: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x14f1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x14f1ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14f1f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F1F0u;
    {
        const bool branch_taken_0x14f1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f1f0) {
            ctx->pc = 0x14F204u;
            goto label_14f204;
        }
    }
    ctx->pc = 0x14F1F8u;
    // 0x14f1f8: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x14f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x14f1fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14f200: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x14f200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_14f204:
    // 0x14f204: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x14f208: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x14f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x14f20c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F20Cu;
    {
        const bool branch_taken_0x14f20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F20Cu;
        // 0x14f210: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f20c) {
            ctx->pc = 0x14F21Cu;
            goto label_14f21c;
        }
    }
    ctx->pc = 0x14F214u;
    // 0x14f214: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14F214u;
    {
        const bool branch_taken_0x14f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F214u;
        // 0x14f218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f214) {
            ctx->pc = 0x14F29Cu;
            goto label_14f29c;
        }
    }
    ctx->pc = 0x14F21Cu;
label_14f21c:
    // 0x14f21c: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x14f220: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14f224: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F224u;
    {
        const bool branch_taken_0x14f224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F224u;
        // 0x14f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f224) {
            ctx->pc = 0x14F290u;
            goto label_14f290;
        }
    }
    ctx->pc = 0x14F22Cu;
    // 0x14f22c: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x14f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x14f230: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F230u;
    {
        const bool branch_taken_0x14f230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f230) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F238u;
    // 0x14f238: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14f23c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f244: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F24Cu;
    // 0x14f24c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14f250: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x14f254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f25c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F25Cu;
        // 0x14f260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F264u;
    // 0x14f264: 0xc075224  jal         func_1D4890
    ctx->pc = 0x14F264u;
    SET_GPR_U32(ctx, 31, 0x14F26Cu);
    ctx->pc = 0x1D4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4890u, 0x14F264u, 0x14F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F26Cu;
label_14f26c:
    // 0x14f26c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F26Cu;
    {
        const bool branch_taken_0x14f26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f26c) {
            ctx->pc = 0x14F28Cu;
            goto label_14f28c;
        }
    }
    ctx->pc = 0x14F274u;
    // 0x14f274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f278: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14f27c: 0xc050f08  jal         func_143C20
    ctx->pc = 0x14F27Cu;
    SET_GPR_U32(ctx, 31, 0x14F284u);
    ctx->pc = 0x14F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F27Cu;
    // 0x14f280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x14F27Cu, 0x14F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F284u;
label_14f284:
    // 0x14f284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F284u;
    {
        const bool branch_taken_0x14f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f284) {
            ctx->pc = 0x14F298u;
            goto label_14f298;
        }
    }
    ctx->pc = 0x14F28Cu;
label_14f28c:
    // 0x14f28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f290:
    // 0x14f290: 0xc053df4  jal         func_14F7D0
    ctx->pc = 0x14F290u;
    SET_GPR_U32(ctx, 31, 0x14F298u);
    ctx->pc = 0x14F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7D0u, 0x14F290u, 0x14F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F298u;
label_14f298:
    // 0x14f298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f29c:
    // 0x14f29c: 0xc053d20  jal         func_14F480
    ctx->pc = 0x14F29Cu;
    SET_GPR_U32(ctx, 31, 0x14F2A4u);
    ctx->pc = 0x14F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F480u, 0x14F29Cu, 0x14F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2A4u;
label_14f2a4:
    // 0x14f2a4: 0xc05409c  jal         func_150270
    ctx->pc = 0x14F2A4u;
    SET_GPR_U32(ctx, 31, 0x14F2ACu);
    ctx->pc = 0x14F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2A4u;
    // 0x14f2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150270u, 0x14F2A4u, 0x14F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2ACu;
label_14f2ac:
    // 0x14f2ac: 0xc053db0  jal         func_14F6C0
    ctx->pc = 0x14F2ACu;
    SET_GPR_U32(ctx, 31, 0x14F2B4u);
    ctx->pc = 0x14F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2ACu;
    // 0x14f2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F6C0u, 0x14F2ACu, 0x14F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2B4u;
label_14f2b4:
    // 0x14f2b4: 0x920301a2  lbu         $v1, 0x1A2($s0)
    ctx->pc = 0x14f2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x14f2b8: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x14F2B8u;
    {
        const bool branch_taken_0x14f2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B8u;
        // 0x14f2bc: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2b8) {
            ctx->pc = 0x14F3B4u;
            goto label_14f3b4;
        }
    }
    ctx->pc = 0x14F2C0u;
    // 0x14f2c0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14F2C0u;
    SET_GPR_U32(ctx, 31, 0x14F2C8u);
    ctx->pc = 0x14F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2C0u;
    // 0x14f2c4: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14F2C0u, 0x14F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2C8u;
label_14f2c8:
    // 0x14f2c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f2cc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14F2CCu;
    SET_GPR_U32(ctx, 31, 0x14F2D4u);
    ctx->pc = 0x14F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2CCu;
    // 0x14f2d0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14F2CCu, 0x14F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2D4u;
label_14f2d4:
    // 0x14f2d4: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x14f2d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F2D8u;
    {
        const bool branch_taken_0x14f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D8u;
        // 0x14f2dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2d8) {
            ctx->pc = 0x14F2E8u;
            goto label_14f2e8;
        }
    }
    ctx->pc = 0x14F2E0u;
    // 0x14f2e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E0u;
        // 0x14f2e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F2FCu;
            goto label_14f2fc;
        }
    }
    ctx->pc = 0x14F2E8u;
label_14f2e8:
    // 0x14f2e8: 0x90430232  lbu         $v1, 0x232($v0)
    ctx->pc = 0x14f2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
    // 0x14f2ec: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x14f2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14f2f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f2f4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x14f2f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x14f2f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f2fc:
    // 0x14f2fc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f300: 0xc066e08  jal         func_19B820
    ctx->pc = 0x14F300u;
    SET_GPR_U32(ctx, 31, 0x14F308u);
    ctx->pc = 0x14F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F300u;
    // 0x14f304: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x14F300u, 0x14F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F308u;
label_14f308:
    // 0x14f308: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f30c: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x14F30Cu;
    SET_GPR_U32(ctx, 31, 0x14F314u);
    ctx->pc = 0x14F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F30Cu;
    // 0x14f310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x14F30Cu, 0x14F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F314u;
label_14f314:
    // 0x14f314: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x14f318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f31c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f320: 0xc066e14  jal         func_19B850
    ctx->pc = 0x14F320u;
    SET_GPR_U32(ctx, 31, 0x14F328u);
    ctx->pc = 0x14F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F320u;
    // 0x14f324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x14F320u, 0x14F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F328u;
label_14f328:
    // 0x14f328: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f32c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14F32Cu;
    SET_GPR_U32(ctx, 31, 0x14F334u);
    ctx->pc = 0x14F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F32Cu;
    // 0x14f330: 0x26050160  addiu       $a1, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14F32Cu, 0x14F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F334u;
label_14f334:
    // 0x14f334: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x14f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f338: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f33c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f340: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14f340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f344: 0xc066e02  jal         func_19B808
    ctx->pc = 0x14F344u;
    SET_GPR_U32(ctx, 31, 0x14F34Cu);
    ctx->pc = 0x14F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F344u;
    // 0x14f348: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x14F344u, 0x14F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F34Cu;
label_14f34c:
    // 0x14f34c: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x14f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f350: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x14f350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14f354: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x14f354u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x14f358: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14f358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f35c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14f360: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f364: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x14f364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f368: 0xc043274  jal         func_10C9D0
    ctx->pc = 0x14F368u;
    SET_GPR_U32(ctx, 31, 0x14F370u);
    ctx->pc = 0x14F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F368u;
    // 0x14f36c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x14F368u, 0x14F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F370u;
label_14f370:
    // 0x14f370: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F370u;
        // 0x14f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F3ACu;
            goto label_14f3ac;
        }
    }
    ctx->pc = 0x14F378u;
    // 0x14f378: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f37c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f380: 0xc066e08  jal         func_19B820
    ctx->pc = 0x14F380u;
    SET_GPR_U32(ctx, 31, 0x14F388u);
    ctx->pc = 0x14F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F380u;
    // 0x14f384: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x14F380u, 0x14F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F388u;
label_14f388:
    // 0x14f388: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f38c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f394: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x14f398: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f39c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f3a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f3a4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x14f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x14f3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f3ac:
    // 0x14f3ac: 0xc0511f0  jal         func_1447C0
    ctx->pc = 0x14F3ACu;
    SET_GPR_U32(ctx, 31, 0x14F3B4u);
    ctx->pc = 0x1447C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1447C0u, 0x14F3ACu, 0x14F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3B4u;
label_14f3b4:
    // 0x14f3b4: 0x8e050200  lw          $a1, 0x200($s0)
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x14f3b8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x14F3B8u;
    {
        const bool branch_taken_0x14f3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3b8) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3C0u;
    // 0x14f3c0: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x14f3c4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x14f3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x14f3c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F3C8u;
    {
        const bool branch_taken_0x14f3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3c8) {
            ctx->pc = 0x14F3D8u;
            goto label_14f3d8;
        }
    }
    ctx->pc = 0x14F3D0u;
    // 0x14f3d0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14F3D0u;
    {
        const bool branch_taken_0x14f3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3d0) {
            ctx->pc = 0x14F404u;
            goto label_14f404;
        }
    }
    ctx->pc = 0x14F3D8u;
label_14f3d8:
    // 0x14f3d8: 0x84a4003c  lh          $a0, 0x3C($a1)
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x14f3dc: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x14f3e0: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14F3E0u;
    {
        const bool branch_taken_0x14f3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e0) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3E8u;
    // 0x14f3e8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14F3E8u;
    {
        const bool branch_taken_0x14f3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f3e8) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3F0u;
    // 0x14f3f0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x14f3f4: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3F4u;
        // 0x14f3f8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3FCu;
    // 0x14f3fc: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F3FCu;
    {
        const bool branch_taken_0x14f3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f3fc) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F404u;
label_14f404:
    // 0x14f404: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x14f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f408: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x14f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x14f40c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x14f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f410: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x14f410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x14f414: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x14f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f418: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x14f418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x14f41c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x14f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f420: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x14f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x14f424: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x14f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f428: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x14f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x14f42c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f430: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x14f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x14f434: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x14f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f438: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x14f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x14f43c: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x14f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f440: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x14f440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x14f444: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x14f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f448: 0xe4a00150  swc1        $f0, 0x150($a1)
    ctx->pc = 0x14f448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
    // 0x14f44c: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x14f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f450: 0xe4a00154  swc1        $f0, 0x154($a1)
    ctx->pc = 0x14f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 340), bits); }
    // 0x14f454: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x14f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f458: 0xe4a00158  swc1        $f0, 0x158($a1)
    ctx->pc = 0x14f458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 344), bits); }
    // 0x14f45c: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x14f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f460: 0xe4a0015c  swc1        $f0, 0x15C($a1)
    ctx->pc = 0x14f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 348), bits); }
label_14f464:
    // 0x14f464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14f468u;
}
