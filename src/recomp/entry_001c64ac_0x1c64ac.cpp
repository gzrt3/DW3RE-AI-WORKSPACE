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

// Function: entry_001c64ac
// Address: 0x1c64ac - 0x1c6600
void entry_001c64ac_0x1c64ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c64ac_0x1c64ac");
#endif

    switch (ctx->pc) {
        case 0x1c65ccu: goto label_1c65cc;
        default: break;
    }

    ctx->pc = 0x1c64acu;

    // 0x1c64ac: 0x0  nop
    ctx->pc = 0x1c64acu;
    // NOP
    // 0x1c64b0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c64b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c64b8: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x1c64b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x1c64bc: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x1c64bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c64c0: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c64c4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c64c8: 0xadaa0018  sw          $t2, 0x18($t5)
    ctx->pc = 0x1c64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
    // 0x1c64cc: 0xada2001c  sw          $v0, 0x1C($t5)
    ctx->pc = 0x1c64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 2));
    // 0x1c64d0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64d4: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c64d8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c64dc: 0xadaa0030  sw          $t2, 0x30($t5)
    ctx->pc = 0x1c64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 10));
    // 0x1c64e0: 0xada20034  sw          $v0, 0x34($t5)
    ctx->pc = 0x1c64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 2));
    // 0x1c64e4: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64e4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64e8: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c64ec: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c64f0: 0xadaa0048  sw          $t2, 0x48($t5)
    ctx->pc = 0x1c64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 10));
    // 0x1c64f4: 0xada2004c  sw          $v0, 0x4C($t5)
    ctx->pc = 0x1c64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 2));
    // 0x1c64f8: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64f8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64fc: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c6500: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c6500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c6504: 0xadaa0060  sw          $t2, 0x60($t5)
    ctx->pc = 0x1c6504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 10));
    // 0x1c6508: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1C6508u;
    {
        const bool branch_taken_0x1c6508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0xada20064  sw          $v0, 0x64($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6508) {
            ctx->pc = 0x1C63C0u;
            return;
        }
    }
    ctx->pc = 0x1C6510u;
    // 0x1c6510: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6514: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1c6518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
    // 0x1c6520: 0x460d0882  mul.s       $f2, $f1, $f13
    ctx->pc = 0x1c6520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1c6524: 0x460c08c2  mul.s       $f3, $f1, $f12
    ctx->pc = 0x1c6524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1c6528: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c6528u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1c652c: 0xe6010260  swc1        $f1, 0x260($s0)
    ctx->pc = 0x1c652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1c6530: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x1c6530u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
    // 0x1c6534: 0xe6040264  swc1        $f4, 0x264($s0)
    ctx->pc = 0x1c6534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x1c6538: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c6538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c653c: 0xe600026c  swc1        $f0, 0x26C($s0)
    ctx->pc = 0x1c653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 620), bits); }
    // 0x1c6540: 0xe6010270  swc1        $f1, 0x270($s0)
    ctx->pc = 0x1c6540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x1c6544: 0xe6020274  swc1        $f2, 0x274($s0)
    ctx->pc = 0x1c6544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x1c6548: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1c654c: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x1c654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
    // 0x1c6550: 0xe6030280  swc1        $f3, 0x280($s0)
    ctx->pc = 0x1c6550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x1c6554: 0xe6040284  swc1        $f4, 0x284($s0)
    ctx->pc = 0x1c6554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1c6558: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1c6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1c655c: 0xe600028c  swc1        $f0, 0x28C($s0)
    ctx->pc = 0x1c655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
    // 0x1c6560: 0xe6030290  swc1        $f3, 0x290($s0)
    ctx->pc = 0x1c6560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x1c6564: 0xe6020294  swc1        $f2, 0x294($s0)
    ctx->pc = 0x1c6564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1c6568: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c6568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c656c: 0xe600029c  swc1        $f0, 0x29C($s0)
    ctx->pc = 0x1c656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
    // 0x1c6570: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1c6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x1c6574: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1c6574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1c6578: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1c6578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x1c657c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1c657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x1c6580: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c6580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1c6584: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1c6584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1c6588: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1c6588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1c658c: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c658cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1c6590: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1c6590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x1c6594: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1c6594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x1c6598: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x1c6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x1c659c: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x1c659cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
    // 0x1c65a0: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x1c65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x1c65a4: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x1c65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x1c65a8: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1c65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1c65ac: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1c65acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1c65b0: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1c65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1c65b4: 0xe60002bc  swc1        $f0, 0x2BC($s0)
    ctx->pc = 0x1c65b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x1c65b8: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x1c65b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x1c65bc: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1c65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x1c65c0: 0xe60002c8  swc1        $f0, 0x2C8($s0)
    ctx->pc = 0x1c65c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    // 0x1c65c4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1C65C4u;
    SET_GPR_U32(ctx, 31, 0x1C65CCu);
    ctx->pc = 0x1C65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65C4u;
    // 0x1c65c8: 0xe60002cc  swc1        $f0, 0x2CC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C65C4u, 0x1C65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65CCu;
label_1c65cc:
    // 0x1c65cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c65ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c65d0: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c65d4: 0xa20402e4  sb          $a0, 0x2E4($s0)
    ctx->pc = 0x1c65d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c65d8: 0x24637960  addiu       $v1, $v1, 0x7960
    ctx->pc = 0x1c65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31072));
    // 0x1c65dc: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1c65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x1c65e0: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x1c65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x1c65e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c65e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c65e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c65e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c65ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C65ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65ECu;
        // 0x1c65f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C65ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C65F4u;
    // 0x1c65f4: 0x0  nop
    ctx->pc = 0x1c65f4u;
    // NOP
    // 0x1c65f8: 0x0  nop
    ctx->pc = 0x1c65f8u;
    // NOP
    // 0x1c65fc: 0x0  nop
    ctx->pc = 0x1c65fcu;
    // NOP
    ctx->pc = 0x1c6600u;
}
