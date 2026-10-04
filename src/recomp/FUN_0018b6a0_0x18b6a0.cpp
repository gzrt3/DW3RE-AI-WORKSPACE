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

// Function: FUN_0018b6a0
// Address: 0x18b6a0 - 0x18b8bc
void FUN_0018b6a0_0x18b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b6a0_0x18b6a0");
#endif

    switch (ctx->pc) {
        case 0x18b6ecu: goto label_18b6ec;
        case 0x18b710u: goto label_18b710;
        case 0x18b738u: goto label_18b738;
        case 0x18b754u: goto label_18b754;
        case 0x18b79cu: goto label_18b79c;
        case 0x18b7c0u: goto label_18b7c0;
        case 0x18b808u: goto label_18b808;
        case 0x18b838u: goto label_18b838;
        case 0x18b888u: goto label_18b888;
        case 0x18b898u: goto label_18b898;
        case 0x18b8a8u: goto label_18b8a8;
        case 0x18b8b8u: goto label_18b8b8;
        default: break;
    }

    ctx->pc = 0x18b6a0u;

    // 0x18b6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b6a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b6b0: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x18b6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x18b6b4: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x18B6B4u;
    {
        const bool branch_taken_0x18b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6B4u;
        // 0x18b6b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6b4) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B6BCu;
    // 0x18b6bc: 0x92240240  lbu         $a0, 0x240($s1)
    ctx->pc = 0x18b6bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x18b6c0: 0x30830070  andi        $v1, $a0, 0x70
    ctx->pc = 0x18b6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x18b6c4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x18B6C4u;
    {
        const bool branch_taken_0x18b6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C4u;
        // 0x18b6c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c4) {
            ctx->pc = 0x18B740u;
            goto label_18b740;
        }
    }
    ctx->pc = 0x18B6CCu;
    // 0x18b6cc: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x18b6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x18b6d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B6D0u;
    {
        const bool branch_taken_0x18b6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6D0u;
        // 0x18b6d4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6d0) {
            ctx->pc = 0x18B6F4u;
            goto label_18b6f4;
        }
    }
    ctx->pc = 0x18B6D8u;
    // 0x18b6d8: 0x38820010  xori        $v0, $a0, 0x10
    ctx->pc = 0x18b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x18b6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b6e4: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B6E4u;
    SET_GPR_U32(ctx, 31, 0x18B6ECu);
    ctx->pc = 0x18B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6E4u;
    // 0x18b6e8: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B6E4u, 0x18B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6ECu;
label_18b6ec:
    // 0x18b6ec: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x18B6ECu;
    {
        const bool branch_taken_0x18b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6ECu;
        // 0x18b6f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6ec) {
            ctx->pc = 0x18B8BCu;
            return;
        }
    }
    ctx->pc = 0x18B6F4u;
label_18b6f4:
    // 0x18b6f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B6F4u;
    {
        const bool branch_taken_0x18b6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6f4) {
            ctx->pc = 0x18B718u;
            goto label_18b718;
        }
    }
    ctx->pc = 0x18B6FCu;
    // 0x18b6fc: 0x38820020  xori        $v0, $a0, 0x20
    ctx->pc = 0x18b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)32);
    // 0x18b700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b704: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b708: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B708u;
    SET_GPR_U32(ctx, 31, 0x18B710u);
    ctx->pc = 0x18B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B708u;
    // 0x18b70c: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B708u, 0x18B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B710u;
label_18b710:
    // 0x18b710: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x18B710u;
    {
        const bool branch_taken_0x18b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b710) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B718u;
label_18b718:
    // 0x18b718: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x18b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x18b71c: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x18B71Cu;
    {
        const bool branch_taken_0x18b71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b71c) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B724u;
    // 0x18b724: 0x38820040  xori        $v0, $a0, 0x40
    ctx->pc = 0x18b724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)64);
    // 0x18b728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b72c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b730: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B730u;
    SET_GPR_U32(ctx, 31, 0x18B738u);
    ctx->pc = 0x18B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B730u;
    // 0x18b734: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B730u, 0x18B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B738u;
label_18b738:
    // 0x18b738: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x18B738u;
    {
        const bool branch_taken_0x18b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b738) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B740u;
label_18b740:
    // 0x18b740: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x18b740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x18b744: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B744u;
    {
        const bool branch_taken_0x18b744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b744) {
            ctx->pc = 0x18B7A0u;
            goto label_18b7a0;
        }
    }
    ctx->pc = 0x18B74Cu;
    // 0x18b74c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x18B74Cu;
    SET_GPR_U32(ctx, 31, 0x18B754u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x18B74Cu, 0x18B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B754u;
label_18b754:
    // 0x18b754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b758: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x18b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x18b75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b760: 0x0  nop
    ctx->pc = 0x18b760u;
    // NOP
    // 0x18b764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b768: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18b76c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
    // 0x18b778: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b778u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18b77c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b780: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18b784: 0x0  nop
    ctx->pc = 0x18b784u;
    // NOP
    // 0x18b788: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x18b788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18b78c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B78Cu;
    {
        const bool branch_taken_0x18b78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B78Cu;
        // 0x18b790: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b78c) {
            ctx->pc = 0x18B7A0u;
            goto label_18b7a0;
        }
    }
    ctx->pc = 0x18B794u;
    // 0x18b794: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B794u;
    SET_GPR_U32(ctx, 31, 0x18B79Cu);
    ctx->pc = 0x18B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B794u;
    // 0x18b798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B794u, 0x18B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B79Cu;
label_18b79c:
    // 0x18b79c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b7a0:
    // 0x18b7a0: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18B7A0u;
    {
        const bool branch_taken_0x18b7a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b7a0) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B7A8u;
    // 0x18b7a8: 0x92230240  lbu         $v1, 0x240($s1)
    ctx->pc = 0x18b7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x18b7ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18b7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18b7b0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B7B0u;
    {
        const bool branch_taken_0x18b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7b0) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B7B8u;
    // 0x18b7b8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x18B7B8u;
    SET_GPR_U32(ctx, 31, 0x18B7C0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x18B7B8u, 0x18B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7C0u;
label_18b7c0:
    // 0x18b7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b7c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x18b7c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b7cc: 0x0  nop
    ctx->pc = 0x18b7ccu;
    // NOP
    // 0x18b7d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b7d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18b7d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b7e0: 0x0  nop
    ctx->pc = 0x18b7e0u;
    // NOP
    // 0x18b7e4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b7e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18b7e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b7e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b7ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18b7f0: 0x0  nop
    ctx->pc = 0x18b7f0u;
    // NOP
    // 0x18b7f4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x18b7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x18b7f8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B7F8u;
    {
        const bool branch_taken_0x18b7f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F8u;
        // 0x18b7fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7f8) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B800u;
    // 0x18b800: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B800u;
    SET_GPR_U32(ctx, 31, 0x18B808u);
    ctx->pc = 0x18B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B800u;
    // 0x18b804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B800u, 0x18B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B808u;
label_18b808:
    // 0x18b808: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b80c:
    // 0x18b80c: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x18B80Cu;
    {
        const bool branch_taken_0x18b80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b80c) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B814u;
    // 0x18b814: 0x92230240  lbu         $v1, 0x240($s1)
    ctx->pc = 0x18b814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x18b818: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18b81c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18B81Cu;
    {
        const bool branch_taken_0x18b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B81Cu;
        // 0x18b820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b81c) {
            ctx->pc = 0x18B8B0u;
            goto label_18b8b0;
        }
    }
    ctx->pc = 0x18B824u;
    // 0x18b824: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x18b828: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B828u;
        // 0x18b82c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B8A0u;
            goto label_18b8a0;
        }
    }
    ctx->pc = 0x18B830u;
    // 0x18b830: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x18B830u;
    SET_GPR_U32(ctx, 31, 0x18B838u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x18B830u, 0x18B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B838u;
label_18b838:
    // 0x18b838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b83c: 0x0  nop
    ctx->pc = 0x18b83cu;
    // NOP
    // 0x18b840: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b844: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18b848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
    // 0x18b850: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b854: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18b858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b85c: 0x0  nop
    ctx->pc = 0x18b85cu;
    // NOP
    // 0x18b860: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b860u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18b864: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b868: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18b86c: 0x0  nop
    ctx->pc = 0x18b86cu;
    // NOP
    // 0x18b870: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x18b870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x18b874: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B874u;
    {
        const bool branch_taken_0x18b874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B874u;
        // 0x18b878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b874) {
            ctx->pc = 0x18B890u;
            goto label_18b890;
        }
    }
    ctx->pc = 0x18B87Cu;
    // 0x18b87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b880: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B880u;
    SET_GPR_U32(ctx, 31, 0x18B888u);
    ctx->pc = 0x18B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B880u;
    // 0x18b884: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B880u, 0x18B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B888u;
label_18b888:
    // 0x18b888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18B888u;
    {
        const bool branch_taken_0x18b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b888) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B890u;
label_18b890:
    // 0x18b890: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B890u;
    SET_GPR_U32(ctx, 31, 0x18B898u);
    ctx->pc = 0x18B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B890u;
    // 0x18b894: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B890u, 0x18B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B898u;
label_18b898:
    // 0x18b898: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B898u;
    {
        const bool branch_taken_0x18b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b898) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B8A0u;
label_18b8a0:
    // 0x18b8a0: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B8A0u;
    SET_GPR_U32(ctx, 31, 0x18B8A8u);
    ctx->pc = 0x18B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8A0u;
    // 0x18b8a4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B8A0u, 0x18B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8A8u;
label_18b8a8:
    // 0x18b8a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8A8u;
    {
        const bool branch_taken_0x18b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8a8) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B8B0u;
label_18b8b0:
    // 0x18b8b0: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B8B0u;
    SET_GPR_U32(ctx, 31, 0x18B8B8u);
    ctx->pc = 0x18B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8B0u;
    // 0x18b8b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B8B0u, 0x18B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8B8u;
label_18b8b8:
    // 0x18b8b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x18b8bcu;
}
