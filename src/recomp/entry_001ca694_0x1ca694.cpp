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

// Function: entry_001ca694
// Address: 0x1ca694 - 0x1ca7e8
void entry_001ca694_0x1ca694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca694_0x1ca694");
#endif

    switch (ctx->pc) {
        case 0x1ca6a0u: goto label_1ca6a0;
        case 0x1ca718u: goto label_1ca718;
        case 0x1ca748u: goto label_1ca748;
        case 0x1ca76cu: goto label_1ca76c;
        case 0x1ca790u: goto label_1ca790;
        case 0x1ca7e0u: goto label_1ca7e0;
        default: break;
    }

    ctx->pc = 0x1ca694u;

    // 0x1ca694: 0x8e250238  lw          $a1, 0x238($s1)
    ctx->pc = 0x1ca694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1ca698: 0xc0564d0  jal         func_159340
    ctx->pc = 0x1CA698u;
    SET_GPR_U32(ctx, 31, 0x1CA6A0u);
    ctx->pc = 0x1CA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA698u;
    // 0x1ca69c: 0x38e40001  xori        $a0, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159340u, 0x1CA698u, 0x1CA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6A0u;
label_1ca6a0:
    // 0x1ca6a0: 0x86250232  lh          $a1, 0x232($s1)
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x1ca6a4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1ca6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1ca6a8: 0x3466851f  ori         $a2, $v1, 0x851F
    ctx->pc = 0x1ca6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1ca6ac: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1ca6b0: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1ca6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ca6b4: 0x0  nop
    ctx->pc = 0x1ca6b4u;
    // NOP
    // 0x1ca6b8: 0x0  nop
    ctx->pc = 0x1ca6b8u;
    // NOP
    // 0x1ca6bc: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca6bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ca6c0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1ca6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1ca6c4: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1ca6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ca6c8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1ca6c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1ca6cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ca6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ca6d0: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1ca6d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca6d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ca6d8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1ca6d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1ca6dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca6e0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1ca6e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ca6e4: 0x14200070  bnez        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x1CA6E4u;
    {
        const bool branch_taken_0x1ca6e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6E4u;
        // 0x1ca6e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6e4) {
            ctx->pc = 0x1CA8A8u;
            return;
        }
    }
    ctx->pc = 0x1CA6ECu;
    // 0x1ca6ec: 0xa2230223  sb          $v1, 0x223($s1)
    ctx->pc = 0x1ca6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 547), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca6f0: 0x86230226  lh          $v1, 0x226($s1)
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1ca6f4: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x1CA6F4u;
    {
        const bool branch_taken_0x1ca6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca6f4) {
            ctx->pc = 0x1CA888u;
            return;
        }
    }
    ctx->pc = 0x1CA6FCu;
    // 0x1ca6fc: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x1ca6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ca700: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ca704: 0x92060035  lbu         $a2, 0x35($s0)
    ctx->pc = 0x1ca704u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1ca708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca70c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca710: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA710u;
    SET_GPR_U32(ctx, 31, 0x1CA718u);
    ctx->pc = 0x1CA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA710u;
    // 0x1ca714: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA710u, 0x1CA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA718u;
label_1ca718:
    // 0x1ca718: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca71c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca720: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1ca720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1ca724: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA724u;
    {
        const bool branch_taken_0x1ca724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca724) {
            ctx->pc = 0x1CA750u;
            goto label_1ca750;
        }
    }
    ctx->pc = 0x1CA72Cu;
    // 0x1ca72c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca730: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ca734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca740: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA740u;
    SET_GPR_U32(ctx, 31, 0x1CA748u);
    ctx->pc = 0x1CA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA740u;
    // 0x1ca744: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA740u, 0x1CA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA748u;
label_1ca748:
    // 0x1ca748: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA748u;
    {
        const bool branch_taken_0x1ca748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA748u;
        // 0x1ca74c: 0x92230224  lbu         $v1, 0x224($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca748) {
            ctx->pc = 0x1CA770u;
            goto label_1ca770;
        }
    }
    ctx->pc = 0x1CA750u;
label_1ca750:
    // 0x1ca750: 0x9486000a  lhu         $a2, 0xA($a0)
    ctx->pc = 0x1ca750u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1ca754: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca75c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca75cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca764: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA764u;
    SET_GPR_U32(ctx, 31, 0x1CA76Cu);
    ctx->pc = 0x1CA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA764u;
    // 0x1ca768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA764u, 0x1CA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA76Cu;
label_1ca76c:
    // 0x1ca76c: 0x92230224  lbu         $v1, 0x224($s1)
    ctx->pc = 0x1ca76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_1ca770:
    // 0x1ca770: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CA770u;
    {
        const bool branch_taken_0x1ca770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca770) {
            ctx->pc = 0x1CA888u;
            return;
        }
    }
    ctx->pc = 0x1CA778u;
    // 0x1ca778: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x1ca778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1ca77c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1ca77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ca780: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA780u;
    {
        const bool branch_taken_0x1ca780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA780u;
        // 0x1ca784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca780) {
            ctx->pc = 0x1CA7E8u;
            return;
        }
    }
    ctx->pc = 0x1CA788u;
    // 0x1ca788: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CA788u;
    SET_GPR_U32(ctx, 31, 0x1CA790u);
    ctx->pc = 0x1CA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA788u;
    // 0x1ca78c: 0xa2220224  sb          $v0, 0x224($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CA788u, 0x1CA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA790u;
label_1ca790:
    // 0x1ca790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca794: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1ca794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca79c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ca79cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca7a0: 0x0  nop
    ctx->pc = 0x1ca7a0u;
    // NOP
    // 0x1ca7a4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ca7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca7a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ca7ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7bc: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1ca7bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1ca7c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ca7c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca7c8: 0x0  nop
    ctx->pc = 0x1ca7c8u;
    // NOP
    // 0x1ca7cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca7ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ca7d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca7d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ca7d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca7d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ca7d8: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA7D8u;
    SET_GPR_U32(ctx, 31, 0x1CA7E0u);
    ctx->pc = 0x1CA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7D8u;
    // 0x1ca7dc: 0x2445002f  addiu       $a1, $v0, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA7D8u, 0x1CA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7E0u;
label_1ca7e0:
    // 0x1ca7e0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1CA7E0u;
    {
        const bool branch_taken_0x1ca7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E0u;
        // 0x1ca7e4: 0x86240226  lh          $a0, 0x226($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7e0) {
            ctx->pc = 0x1CA88Cu;
            return;
        }
    }
    ctx->pc = 0x1CA7E8u;
}
