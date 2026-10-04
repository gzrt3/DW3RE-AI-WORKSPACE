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

// Function: FUN_001372a0
// Address: 0x1372a0 - 0x1373e8
void FUN_001372a0_0x1372a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001372a0_0x1372a0");
#endif

    switch (ctx->pc) {
        case 0x137388u: goto label_137388;
        case 0x1373acu: goto label_1373ac;
        case 0x1373c4u: goto label_1373c4;
        case 0x1373ccu: goto label_1373cc;
        case 0x1373d4u: goto label_1373d4;
        case 0x1373dcu: goto label_1373dc;
        case 0x1373e4u: goto label_1373e4;
        default: break;
    }

    ctx->pc = 0x1372a0u;

    // 0x1372a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1372a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1372a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1372a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1372ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1372acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1372b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1372b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1372b4: 0x8c24a3d0  lw          $a0, -0x5C30($at)
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3D0u));
    // 0x1372b8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1372B8u;
    {
        const bool branch_taken_0x1372b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1372BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372B8u;
        // 0x1372bc: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372b8) {
            ctx->pc = 0x1372D4u;
            goto label_1372d4;
        }
    }
    ctx->pc = 0x1372C0u;
    // 0x1372c0: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
    // 0x1372c4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1372c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1372c8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1372c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1372cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1372CCu;
    {
        const bool branch_taken_0x1372cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372CCu;
        // 0x1372d0: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372cc) {
            ctx->pc = 0x1373E4u;
            goto label_1373e4;
        }
    }
    ctx->pc = 0x1372D4u;
label_1372d4:
    // 0x1372d4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1372d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1372d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1372D8u;
    {
        const bool branch_taken_0x1372d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372D8u;
        // 0x1372dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372d8) {
            ctx->pc = 0x1372ECu;
            goto label_1372ec;
        }
    }
    ctx->pc = 0x1372E0u;
    // 0x1372e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1372e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1372e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1372E4u;
    {
        const bool branch_taken_0x1372e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372E4u;
        // 0x1372e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372e4) {
            ctx->pc = 0x137304u;
            goto label_137304;
        }
    }
    ctx->pc = 0x1372ECu;
label_1372ec:
    // 0x1372ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1372ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1372f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1372f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1372f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1372f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1372f8: 0x0  nop
    ctx->pc = 0x1372f8u;
    // NOP
    // 0x1372fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1372fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x137300: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x137300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_137304:
    // 0x137304: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137308: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x13730c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x13730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x137310: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137310u;
    {
        const bool branch_taken_0x137310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137310) {
            ctx->pc = 0x13732Cu;
            goto label_13732c;
        }
    }
    ctx->pc = 0x137318u;
    // 0x137318: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13731c: 0x9422a3e6  lhu         $v0, -0x5C1A($at)
    ctx->pc = 0x13731cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x30A3E6u));
    // 0x137320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137324: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137328: 0xa422a3e6  sh          $v0, -0x5C1A($at)
    ctx->pc = 0x137328u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E6u, _value); } while (0);
label_13732c:
    // 0x13732c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137330: 0x9422a3e6  lhu         $v0, -0x5C1A($at)
    ctx->pc = 0x137330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x30A3E6u));
    // 0x137334: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137334u;
    {
        const bool branch_taken_0x137334 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x137338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137334u;
        // 0x137338: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137334) {
            ctx->pc = 0x137348u;
            goto label_137348;
        }
    }
    ctx->pc = 0x13733Cu;
    // 0x13733c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137340u;
    {
        const bool branch_taken_0x137340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137340u;
        // 0x137344: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137340) {
            ctx->pc = 0x137360u;
            goto label_137360;
        }
    }
    ctx->pc = 0x137348u;
label_137348:
    // 0x137348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x137348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13734c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x137350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137354: 0x0  nop
    ctx->pc = 0x137354u;
    // NOP
    // 0x137358: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x137358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x13735c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x13735cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_137360:
    // 0x137360: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x137360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137364: 0x0  nop
    ctx->pc = 0x137364u;
    // NOP
    // 0x137368: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x137368u;
    {
        const bool branch_taken_0x137368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137368u;
        // 0x13736c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137368) {
            ctx->pc = 0x137380u;
            goto label_137380;
        }
    }
    ctx->pc = 0x137370u;
    // 0x137370: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x137374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137378: 0x0  nop
    ctx->pc = 0x137378u;
    // NOP
    // 0x13737c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x13737cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_137380:
    // 0x137380: 0xc04dd00  jal         func_137400
    ctx->pc = 0x137380u;
    SET_GPR_U32(ctx, 31, 0x137388u);
    ctx->pc = 0x137400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137400u, 0x137380u, 0x137388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137388u;
label_137388:
    // 0x137388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13738c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x137390: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x137390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x137394: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x137394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x137398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13739c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x13739cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1373a0: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x1373a4: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x1373A4u;
    SET_GPR_U32(ctx, 31, 0x1373ACu);
    ctx->pc = 0x1373A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373A4u;
    // 0x1373a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1373A4u, 0x1373ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373ACu;
label_1373ac:
    // 0x1373ac: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1373acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1373b0: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x1373b4: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x1373b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x1373b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1373b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373bc: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x1373BCu;
    SET_GPR_U32(ctx, 31, 0x1373C4u);
    ctx->pc = 0x1373C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373BCu;
    // 0x1373c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1373BCu, 0x1373C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373C4u;
label_1373c4:
    // 0x1373c4: 0xc064580  jal         func_191600
    ctx->pc = 0x1373C4u;
    SET_GPR_U32(ctx, 31, 0x1373CCu);
    ctx->pc = 0x1373C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373C4u;
    // 0x1373c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191600u, 0x1373C4u, 0x1373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373CCu;
label_1373cc:
    // 0x1373cc: 0xc064534  jal         func_1914D0
    ctx->pc = 0x1373CCu;
    SET_GPR_U32(ctx, 31, 0x1373D4u);
    ctx->pc = 0x1373D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373CCu;
    // 0x1373d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914D0u, 0x1373CCu, 0x1373D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373D4u;
label_1373d4:
    // 0x1373d4: 0xc064528  jal         func_1914A0
    ctx->pc = 0x1373D4u;
    SET_GPR_U32(ctx, 31, 0x1373DCu);
    ctx->pc = 0x1373D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373D4u;
    // 0x1373d8: 0xc7ac00c8  lwc1        $f12, 0xC8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914A0u, 0x1373D4u, 0x1373DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373DCu;
label_1373dc:
    // 0x1373dc: 0xc064524  jal         func_191490
    ctx->pc = 0x1373DCu;
    SET_GPR_U32(ctx, 31, 0x1373E4u);
    ctx->pc = 0x1373E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373DCu;
    // 0x1373e0: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191490u, 0x1373DCu, 0x1373E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373E4u;
label_1373e4:
    // 0x1373e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1373e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1373e8u;
}
