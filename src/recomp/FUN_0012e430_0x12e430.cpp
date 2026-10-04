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

// Function: FUN_0012e430
// Address: 0x12e430 - 0x12e520
void FUN_0012e430_0x12e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e430_0x12e430");
#endif

    switch (ctx->pc) {
        case 0x12e4acu: goto label_12e4ac;
        case 0x12e510u: goto label_12e510;
        default: break;
    }

    ctx->pc = 0x12e430u;

    // 0x12e430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12e434: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x12e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x12e438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12e438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12e43c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12e43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12e440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e444: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x12e444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x12e448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e44c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12e450: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x12e450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12e454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e458: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x12e458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x12e45c: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x12e45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x12e460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e464: 0x0  nop
    ctx->pc = 0x12e464u;
    // NOP
    // 0x12e468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e46c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12e46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12e470: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x12e470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x12e474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e478: 0x0  nop
    ctx->pc = 0x12e478u;
    // NOP
    // 0x12e47c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12e480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12e484: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12e484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12e488: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x12e488u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e48c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e490: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12e490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12e494: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12e494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e49c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12e49cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12e4a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12e4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12e4a4: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x12E4A4u;
    SET_GPR_U32(ctx, 31, 0x12E4ACu);
    ctx->pc = 0x12E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4A4u;
    // 0x12e4a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x12E4A4u, 0x12E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4ACu;
label_12e4ac:
    // 0x12e4ac: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x12e4b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x12e4b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12e4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12e4b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e4bc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x12e4c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12e4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12e4c8: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x12e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x12e4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e4d0: 0x0  nop
    ctx->pc = 0x12e4d0u;
    // NOP
    // 0x12e4d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e4d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12e4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12e4dc: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e4e4: 0x0  nop
    ctx->pc = 0x12e4e4u;
    // NOP
    // 0x12e4e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e4ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12e4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12e4f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x12e4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12e4f4: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12e4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e4fc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12e500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e504: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12e504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12e508: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x12E508u;
    SET_GPR_U32(ctx, 31, 0x12E510u);
    ctx->pc = 0x12E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E508u;
    // 0x12e50c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x12E508u, 0x12E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E510u;
label_12e510:
    // 0x12e510: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e514: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12e514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12e518: 0xc066e08  jal         func_19B820
    ctx->pc = 0x12E518u;
    SET_GPR_U32(ctx, 31, 0x12E520u);
    ctx->pc = 0x12E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E518u;
    // 0x12e51c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x12E518u, 0x12E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E520u;
}
