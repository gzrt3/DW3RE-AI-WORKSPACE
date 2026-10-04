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

// Function: entry_00186138
// Address: 0x186138 - 0x1863e4
void entry_00186138_0x186138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186138_0x186138");
#endif

    switch (ctx->pc) {
        case 0x1861b0u: goto label_1861b0;
        case 0x1861dcu: goto label_1861dc;
        case 0x1861f8u: goto label_1861f8;
        case 0x1862dcu: goto label_1862dc;
        case 0x186364u: goto label_186364;
        default: break;
    }

    ctx->pc = 0x186138u;

    // 0x186138: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x186138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18613c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186140: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x186140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18614c: 0x0  nop
    ctx->pc = 0x18614cu;
    // NOP
    // 0x186150: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x186150u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x186154: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186158: 0x0  nop
    ctx->pc = 0x186158u;
    // NOP
    // 0x18615c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18615Cu;
    {
        const bool branch_taken_0x18615c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18615c) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x186164u;
    // 0x186164: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186168: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18616c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186170: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186170u;
    {
        const bool branch_taken_0x186170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186170u;
        // 0x186174: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186170) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186178u;
label_186178:
    // 0x186178: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18617c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186180: 0x0  nop
    ctx->pc = 0x186180u;
    // NOP
    // 0x186184: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186188: 0x0  nop
    ctx->pc = 0x186188u;
    // NOP
    // 0x18618c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18618Cu;
    {
        const bool branch_taken_0x18618c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18618c) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186194u;
    // 0x186194: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186198: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18619c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18619cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1861a0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1861A0u;
    {
        const bool branch_taken_0x1861a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861A0u;
        // 0x1861a4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861a0) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x1861A8u;
label_1861a8:
    // 0x1861a8: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1861A8u;
    SET_GPR_U32(ctx, 31, 0x1861B0u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1861A8u, 0x1861B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861B0u;
label_1861b0:
    // 0x1861b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1861b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1861b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1861b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1861b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1861bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1861bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1861c0: 0x0  nop
    ctx->pc = 0x1861c0u;
    // NOP
    // 0x1861c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1861c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1861c8: 0x0  nop
    ctx->pc = 0x1861c8u;
    // NOP
    // 0x1861cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1861CCu;
    {
        const bool branch_taken_0x1861cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861CCu;
        // 0x1861d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861cc) {
            ctx->pc = 0x1861E4u;
            goto label_1861e4;
        }
    }
    ctx->pc = 0x1861D4u;
    // 0x1861d4: 0xc0623cc  jal         func_188F30
    ctx->pc = 0x1861D4u;
    SET_GPR_U32(ctx, 31, 0x1861DCu);
    ctx->pc = 0x1861D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861D4u;
    // 0x1861d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F30u, 0x1861D4u, 0x1861DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861DCu;
label_1861dc:
    // 0x1861dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1861DCu;
    {
        const bool branch_taken_0x1861dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1861dc) {
            ctx->pc = 0x186200u;
            goto label_186200;
        }
    }
    ctx->pc = 0x1861E4u;
label_1861e4:
    // 0x1861e4: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1861e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1861e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861ec: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x1861ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
    // 0x1861f0: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1861F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861F0u;
    // 0x1861f4: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x1861F0u, 0x1861F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1861F8u;
    {
        const bool branch_taken_0x1861f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861f8) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x186200u;
label_186200:
    // 0x186200: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186204: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x186208: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x186208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18620c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18620cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186210: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186214: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18621c: 0x0  nop
    ctx->pc = 0x18621cu;
    // NOP
    // 0x186220: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x186220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x186224: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186228: 0x0  nop
    ctx->pc = 0x186228u;
    // NOP
    // 0x18622c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18622Cu;
    {
        const bool branch_taken_0x18622c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18622Cu;
        // 0x186230: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18622c) {
            ctx->pc = 0x186248u;
            goto label_186248;
        }
    }
    ctx->pc = 0x186234u;
    // 0x186234: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186238: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18623c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186240: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186240u;
    {
        const bool branch_taken_0x186240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186240u;
        // 0x186244: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186240) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186248u;
label_186248:
    // 0x186248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18624c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18624cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186250: 0x0  nop
    ctx->pc = 0x186250u;
    // NOP
    // 0x186254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186258: 0x0  nop
    ctx->pc = 0x186258u;
    // NOP
    // 0x18625c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18625Cu;
    {
        const bool branch_taken_0x18625c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18625c) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186264u;
    // 0x186264: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x186268: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18626c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18626cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186270: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186270u;
    {
        const bool branch_taken_0x186270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186270u;
        // 0x186274: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186270) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186278u;
label_186278:
    // 0x186278: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x186278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18627c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18627cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x186280: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186280u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x186284: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186284u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x186288: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x186288u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18628c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18628cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186290: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186290u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186294: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x186298: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x18629c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1862a0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1862a4: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1862a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1862a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1862acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1862b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1862b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1862b4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1862b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1862b8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1862b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862bc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1862bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1862c0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1862c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1862c4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1862c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1862c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1862cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1862ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1862d0: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x1862d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1862d4: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x1862D4u;
    SET_GPR_U32(ctx, 31, 0x1862DCu);
    ctx->pc = 0x1862D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862D4u;
    // 0x1862d8: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1862D4u, 0x1862DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862DCu;
label_1862dc:
    // 0x1862dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1862DCu;
    {
        const bool branch_taken_0x1862dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862dc) {
            ctx->pc = 0x1862ECu;
            goto label_1862ec;
        }
    }
    ctx->pc = 0x1862E4u;
    // 0x1862e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1862E4u;
    {
        const bool branch_taken_0x1862e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862E4u;
        // 0x1862e8: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862e4) {
            ctx->pc = 0x186368u;
            goto label_186368;
        }
    }
    ctx->pc = 0x1862ECu;
label_1862ec:
    // 0x1862ec: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1862ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1862f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1862f4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1862f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1862f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1862fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1862fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186300: 0x0  nop
    ctx->pc = 0x186300u;
    // NOP
    // 0x186304: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186304u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x186308: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18630c: 0x0  nop
    ctx->pc = 0x18630cu;
    // NOP
    // 0x186310: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186310u;
    {
        const bool branch_taken_0x186310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186310u;
        // 0x186314: 0xe7ac0088  swc1        $f12, 0x88($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186310) {
            ctx->pc = 0x18632Cu;
            goto label_18632c;
        }
    }
    ctx->pc = 0x186318u;
    // 0x186318: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18631c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186324: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186324u;
    {
        const bool branch_taken_0x186324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186324u;
        // 0x186328: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186324) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18632Cu;
label_18632c:
    // 0x18632c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x186330: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186338: 0x0  nop
    ctx->pc = 0x186338u;
    // NOP
    // 0x18633c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18633cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186340: 0x0  nop
    ctx->pc = 0x186340u;
    // NOP
    // 0x186344: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x186344u;
    {
        const bool branch_taken_0x186344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186344u;
        // 0x186348: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186344) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18634Cu;
    // 0x18634c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186354: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186354u;
    {
        const bool branch_taken_0x186354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186354u;
        // 0x186358: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186354) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18635Cu;
label_18635c:
    // 0x18635c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x18635Cu;
    SET_GPR_U32(ctx, 31, 0x186364u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x18635Cu, 0x186364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186364u;
label_186364:
    // 0x186364: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x186364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_186368:
    // 0x186368: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x186368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18636c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186370: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186378: 0x0  nop
    ctx->pc = 0x186378u;
    // NOP
    // 0x18637c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18637cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186380: 0x0  nop
    ctx->pc = 0x186380u;
    // NOP
    // 0x186384: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186384u;
    {
        const bool branch_taken_0x186384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186384) {
            ctx->pc = 0x1863A0u;
            goto label_1863a0;
        }
    }
    ctx->pc = 0x18638Cu;
    // 0x18638c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186390: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186394: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x186398: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x186398u;
    {
        const bool branch_taken_0x186398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186398) {
            ctx->pc = 0x1863D8u;
            goto label_1863d8;
        }
    }
    ctx->pc = 0x1863A0u;
label_1863a0:
    // 0x1863a0: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1863a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1863a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1863a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1863a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1863ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1863acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1863b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1863b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1863b4: 0x0  nop
    ctx->pc = 0x1863b4u;
    // NOP
    // 0x1863b8: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1863b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x1863bc: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x1863bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863c0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1863c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1863c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1863c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1863c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1863c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1863cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1863ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1863d0: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x1863D0u;
    {
        const bool branch_taken_0x1863d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D0u;
        // 0x1863d4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d0) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1863D8u;
label_1863d8:
    // 0x1863d8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1863d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1863dc: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x1863DCu;
    {
        const bool branch_taken_0x1863dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863DCu;
        // 0x1863e0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863dc) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1863E4u;
}
