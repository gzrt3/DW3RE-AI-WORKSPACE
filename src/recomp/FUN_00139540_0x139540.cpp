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

// Function: FUN_00139540
// Address: 0x139540 - 0x13963c
void FUN_00139540_0x139540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139540_0x139540");
#endif

    switch (ctx->pc) {
        case 0x139558u: goto label_139558;
        case 0x139580u: goto label_139580;
        case 0x1395bcu: goto label_1395bc;
        case 0x1395e4u: goto label_1395e4;
        default: break;
    }

    ctx->pc = 0x139540u;

    // 0x139540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x139544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13954c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13954cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139550: 0xc06462c  jal         func_1918B0
    ctx->pc = 0x139550u;
    SET_GPR_U32(ctx, 31, 0x139558u);
    ctx->pc = 0x139554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139550u;
    // 0x139554: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x139550u, 0x139558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139558u;
label_139558:
    // 0x139558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13955c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x13955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x139560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139568: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x13956c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139570: 0x0  nop
    ctx->pc = 0x139570u;
    // NOP
    // 0x139574: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x139574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x139578: 0xc064624  jal         func_191890
    ctx->pc = 0x139578u;
    SET_GPR_U32(ctx, 31, 0x139580u);
    ctx->pc = 0x13957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139578u;
    // 0x13957c: 0xe42005b0  swc1        $f0, 0x5B0($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1456), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x139578u, 0x139580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139580u;
label_139580:
    // 0x139580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139584: 0x3c034322  lui         $v1, 0x4322
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17186 << 16));
    // 0x139588: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x13958c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139594: 0xac2005b8  sw          $zero, 0x5B8($at)
    ctx->pc = 0x139594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2505B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2505B8u, _value); } while (0);
    // 0x139598: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x139598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x13959c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x13959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1395a0: 0xac2205bc  sw          $v0, 0x5BC($at)
    ctx->pc = 0x1395a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2505BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2505BCu, _value); } while (0);
    // 0x1395a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1395a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1395a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1395ac: 0x0  nop
    ctx->pc = 0x1395acu;
    // NOP
    // 0x1395b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1395b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1395b4: 0xc06462c  jal         func_1918B0
    ctx->pc = 0x1395B4u;
    SET_GPR_U32(ctx, 31, 0x1395BCu);
    ctx->pc = 0x1395B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395B4u;
    // 0x1395b8: 0xe42005b4  swc1        $f0, 0x5B4($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1460), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1395B4u, 0x1395BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395BCu;
label_1395bc:
    // 0x1395bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1395bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1395c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1395c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1395c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1395c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1395c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1395cc: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x1395ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x1395d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1395d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395d4: 0x0  nop
    ctx->pc = 0x1395d4u;
    // NOP
    // 0x1395d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1395d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1395dc: 0xc064624  jal         func_191890
    ctx->pc = 0x1395DCu;
    SET_GPR_U32(ctx, 31, 0x1395E4u);
    ctx->pc = 0x1395E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395DCu;
    // 0x1395e0: 0xe42005c0  swc1        $f0, 0x5C0($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1472), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x1395DCu, 0x1395E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395E4u;
label_1395e4:
    // 0x1395e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1395e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395e8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1395ec: 0xac2005c8  sw          $zero, 0x5C8($at)
    ctx->pc = 0x1395ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2505C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2505C8u, _value); } while (0);
    // 0x1395f0: 0x3c054322  lui         $a1, 0x4322
    ctx->pc = 0x1395f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17186 << 16));
    // 0x1395f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1395f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1395f8: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x1395f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x1395fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1395fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x139600: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x139604: 0xac2205cc  sw          $v0, 0x5CC($at)
    ctx->pc = 0x139604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2505CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2505CCu, _value); } while (0);
    // 0x139608: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x139608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13960c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x13960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x139610: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x139614: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x139614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x139618: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x139618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x13961c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13961cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139620: 0x0  nop
    ctx->pc = 0x139620u;
    // NOP
    // 0x139624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139628: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13962c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x13962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x139630: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x139630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139634: 0xc066e26  jal         func_19B898
    ctx->pc = 0x139634u;
    SET_GPR_U32(ctx, 31, 0x13963Cu);
    ctx->pc = 0x139638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139634u;
    // 0x139638: 0xe42005c4  swc1        $f0, 0x5C4($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1476), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x139634u, 0x13963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13963Cu;
}
