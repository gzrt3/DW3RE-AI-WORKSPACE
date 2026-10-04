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

// Function: FUN_001cd210
// Address: 0x1cd210 - 0x1cd3f4
void FUN_001cd210_0x1cd210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd210_0x1cd210");
#endif

    switch (ctx->pc) {
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd260u: goto label_1cd260;
        case 0x1cd290u: goto label_1cd290;
        case 0x1cd2ccu: goto label_1cd2cc;
        case 0x1cd2dcu: goto label_1cd2dc;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd338u: goto label_1cd338;
        case 0x1cd36cu: goto label_1cd36c;
        case 0x1cd3dcu: goto label_1cd3dc;
        default: break;
    }

    ctx->pc = 0x1cd210u;

    // 0x1cd210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cd214: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cd218: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1cd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1cd21c: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x1cd21cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1cd220: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1cd220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1cd224: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1cd228: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x1cd228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1cd22c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd230: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD230u;
    {
        const bool branch_taken_0x1cd230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD230u;
        // 0x1cd234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd230) {
            ctx->pc = 0x1CD248u;
            goto label_1cd248;
        }
    }
    ctx->pc = 0x1CD238u;
    // 0x1cd238: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1CD238u;
    SET_GPR_U32(ctx, 31, 0x1CD240u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CD238u, 0x1CD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD240u;
label_1cd240:
    // 0x1cd240: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1CD240u;
    {
        const bool branch_taken_0x1cd240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD240u;
        // 0x1cd244: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd240) {
            ctx->pc = 0x1CD3F0u;
            goto label_1cd3f0;
        }
    }
    ctx->pc = 0x1CD248u;
label_1cd248:
    // 0x1cd248: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cd248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1cd24c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1cd24cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cd250: 0x14200063  bnez        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x1CD250u;
    {
        const bool branch_taken_0x1cd250 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd250) {
            ctx->pc = 0x1CD3E0u;
            goto label_1cd3e0;
        }
    }
    ctx->pc = 0x1CD258u;
    // 0x1cd258: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CD258u;
    SET_GPR_U32(ctx, 31, 0x1CD260u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CD258u, 0x1CD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD260u;
label_1cd260:
    // 0x1cd260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd264: 0x0  nop
    ctx->pc = 0x1cd264u;
    // NOP
    // 0x1cd268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd26c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1cd270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd274: 0x0  nop
    ctx->pc = 0x1cd274u;
    // NOP
    // 0x1cd278: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1cd278u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1cd27c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1cd280: 0x0  nop
    ctx->pc = 0x1cd280u;
    // NOP
    // 0x1cd284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd288: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CD288u;
    SET_GPR_U32(ctx, 31, 0x1CD290u);
    ctx->pc = 0x1CD28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD288u;
    // 0x1cd28c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CD288u, 0x1CD290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD290u;
label_1cd290:
    // 0x1cd290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd294: 0x0  nop
    ctx->pc = 0x1cd294u;
    // NOP
    // 0x1cd298: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cd298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cd29c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1cd2a0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cd2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cd2a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1cd2a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2b0: 0x0  nop
    ctx->pc = 0x1cd2b0u;
    // NOP
    // 0x1cd2b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd2b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1cd2b8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1cd2b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x1cd2bc: 0x0  nop
    ctx->pc = 0x1cd2bcu;
    // NOP
    // 0x1cd2c0: 0x0  nop
    ctx->pc = 0x1cd2c0u;
    // NOP
    // 0x1cd2c4: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x1CD2C4u;
    SET_GPR_U32(ctx, 31, 0x1CD2CCu);
    ctx->pc = 0x1CD2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2C4u;
    // 0x1cd2c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1CD2C4u, 0x1CD2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2CCu;
label_1cd2cc:
    // 0x1cd2cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cd2ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cd2d0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1cd2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1cd2d4: 0xc06d4c0  jal         func_1B5300
    ctx->pc = 0x1CD2D4u;
    SET_GPR_U32(ctx, 31, 0x1CD2DCu);
    ctx->pc = 0x1CD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2D4u;
    // 0x1cd2d8: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x1CD2D4u, 0x1CD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2DCu;
label_1cd2dc:
    // 0x1cd2dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1cd2e0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1cd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1cd2e4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cd2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1cd2e8: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x1CD2E8u;
    SET_GPR_U32(ctx, 31, 0x1CD2F0u);
    ctx->pc = 0x1CD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2E8u;
    // 0x1cd2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x1CD2E8u, 0x1CD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2F0u;
label_1cd2f0:
    // 0x1cd2f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1cd2f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1cd2f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cd2f8: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CD2F8u;
    SET_GPR_U32(ctx, 31, 0x1CD300u);
    ctx->pc = 0x1CD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2F8u;
    // 0x1cd2fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CD2F8u, 0x1CD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cd304: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1cd308: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CD308u;
    SET_GPR_U32(ctx, 31, 0x1CD310u);
    ctx->pc = 0x1CD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD308u;
    // 0x1cd30c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CD308u, 0x1CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1cd310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd314: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x1cd318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd31c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cd31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cd320: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1cd320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x1cd324: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1cd324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x1cd328: 0x24a57a70  addiu       $a1, $a1, 0x7A70
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31344));
    // 0x1cd32c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cd330: 0xc04f310  jal         func_13CC40
    ctx->pc = 0x1CD330u;
    SET_GPR_U32(ctx, 31, 0x1CD338u);
    ctx->pc = 0x1CD334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD330u;
    // 0x1cd334: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1CD330u, 0x1CD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD338u;
label_1cd338:
    // 0x1cd338: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1cd33c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1cd340: 0xc4217a74  lwc1        $f1, 0x7A74($at)
    ctx->pc = 0x1cd340u;
    { uint32_t bits = FAST_READ32(0x477A74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd344: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cd348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd34c: 0x24847a70  addiu       $a0, $a0, 0x7A70
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31344));
    // 0x1cd350: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cd350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd35c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cd360: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1cd364: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CD364u;
    SET_GPR_U32(ctx, 31, 0x1CD36Cu);
    ctx->pc = 0x1CD368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD364u;
    // 0x1cd368: 0xe4207a74  swc1        $f0, 0x7A74($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CD364u, 0x1CD36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD36Cu;
label_1cd36c:
    // 0x1cd36c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1cd370: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd378: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd37c: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x1cd380: 0x3c0a0047  lui         $t2, 0x47
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)71 << 16));
    // 0x1cd384: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cd388: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x1cd388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    // 0x1cd38c: 0x244290f0  addiu       $v0, $v0, -0x6F10
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
    // 0x1cd390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cd390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd394: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1cd394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1cd398: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cd39c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1cd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1cd3a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd3a4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1cd3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x1cd3a8: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1cd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1cd3ac: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1cd3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x1cd3b0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1cd3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3b4: 0xffac0028  sd          $t4, 0x28($sp)
    ctx->pc = 0x1cd3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 12));
    // 0x1cd3b8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cd3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3bc: 0xffac0030  sd          $t4, 0x30($sp)
    ctx->pc = 0x1cd3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 12));
    // 0x1cd3c0: 0x254a7a70  addiu       $t2, $t2, 0x7A70
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31344));
    // 0x1cd3c4: 0xffac0038  sd          $t4, 0x38($sp)
    ctx->pc = 0x1cd3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 12));
    // 0x1cd3c8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1cd3c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3cc: 0xffac0040  sd          $t4, 0x40($sp)
    ctx->pc = 0x1cd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 12));
    // 0x1cd3d0: 0xffac0048  sd          $t4, 0x48($sp)
    ctx->pc = 0x1cd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 12));
    // 0x1cd3d4: 0xc07374c  jal         func_1CDD30
    ctx->pc = 0x1CD3D4u;
    SET_GPR_U32(ctx, 31, 0x1CD3DCu);
    ctx->pc = 0x1CD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3D4u;
    // 0x1cd3d8: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD30u, 0x1CD3D4u, 0x1CD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3DCu;
label_1cd3dc:
    // 0x1cd3dc: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1cd3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1cd3e0:
    // 0x1cd3e0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1cd3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd3e8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1cd3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd3ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cd3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1cd3f0:
    // 0x1cd3f0: 0xc7b50064  lwc1        $f21, 0x64($sp)
    ctx->pc = 0x1cd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x1cd3f4u;
}
