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

// Function: FUN_00198998
// Address: 0x198998 - 0x198b74
void FUN_00198998_0x198998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198998_0x198998");
#endif

    switch (ctx->pc) {
        case 0x198a28u: goto label_198a28;
        case 0x198a5cu: goto label_198a5c;
        default: break;
    }

    ctx->pc = 0x198998u;

    // 0x198998: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19899c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19899cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1989a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1989a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1989a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1989a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1989a8: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1989ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1989acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1989b0: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x1989b4: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x1989b4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1989b8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1989bc: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x1989bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x1989c0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1989c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1989c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1989c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1989c8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1989c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1989cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1989ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1989d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1989d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1989d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1989d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1989d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1989dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1989e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1989e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1989e4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1989e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1989ec: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1989f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1989f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1989f4: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1989f8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1989fc: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x1989fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x198a00: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x198a04: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x198a08: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x198a08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x198a0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x198a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x198a10: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x198A10u;
    {
        const bool branch_taken_0x198a10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A10u;
        // 0x198a14: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a10) {
            ctx->pc = 0x198A4Cu;
            goto label_198a4c;
        }
    }
    ctx->pc = 0x198A18u;
    // 0x198a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a20: 0xc066234  jal         func_1988D0
    ctx->pc = 0x198A20u;
    SET_GPR_U32(ctx, 31, 0x198A28u);
    ctx->pc = 0x198A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A20u;
    // 0x198a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x198A20u, 0x198A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A28u;
label_198a28:
    // 0x198a28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198a2c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x198a30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198a34: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x198a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198a3c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198a40: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x198a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x198a44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x198A44u;
    {
        const bool branch_taken_0x198a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a44) {
            ctx->pc = 0x198A70u;
            goto label_198a70;
        }
    }
    ctx->pc = 0x198A4Cu;
label_198a4c:
    // 0x198a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a54: 0xc066234  jal         func_1988D0
    ctx->pc = 0x198A54u;
    SET_GPR_U32(ctx, 31, 0x198A5Cu);
    ctx->pc = 0x198A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A54u;
    // 0x198a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x198A54u, 0x198A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A5Cu;
label_198a5c:
    // 0x198a5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198a60: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x198a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198a68: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x198a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198a70:
    // 0x198a70: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x198a70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x198a74: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x198a78: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x198a7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198a80: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x198a84: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x198a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x198a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x198a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x198a90: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x198a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x198a94: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x198a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x198a98: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x198a9c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x198aa0: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x198aa4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x198aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x198aa8: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x198aa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x198aac: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x198ab0: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x198ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x198ab4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x198ab8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x198ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x198abc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198ac0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x198ac4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x198ac8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x198acc: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x198accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x198ad0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x198ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x198ad4: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x198ad8: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x198adc: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x198ae0: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x198ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x198ae4: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x198ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x198ae8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x198ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x198aec: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x198aecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x198af0: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x198af0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x198af4: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x198af4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x198af8: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x198afc: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x198afcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x198b00: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x198b00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x198b04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198B04u;
    {
        const bool branch_taken_0x198b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B04u;
        // 0x198b08: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b04) {
            ctx->pc = 0x198B18u;
            goto label_198b18;
        }
    }
    ctx->pc = 0x198B0Cu;
    // 0x198b0c: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x198b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198B10u;
    {
        const bool branch_taken_0x198b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b10) {
            ctx->pc = 0x198B24u;
            goto label_198b24;
        }
    }
    ctx->pc = 0x198B18u;
label_198b18:
    // 0x198b18: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x198b1c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_198b24:
    // 0x198b24: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x198b24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x198b28: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x198b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x198b2c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x198B2Cu;
    {
        const bool branch_taken_0x198b2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B2Cu;
        // 0x198b30: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b2c) {
            ctx->pc = 0x198B48u;
            goto label_198b48;
        }
    }
    ctx->pc = 0x198B34u;
    // 0x198b34: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x198b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x198b38: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x198b3c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x198b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198B40u;
    {
        const bool branch_taken_0x198b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B40u;
        // 0x198b44: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b40) {
            ctx->pc = 0x198B4Cu;
            goto label_198b4c;
        }
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x198b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_198b4c:
    // 0x198b4c: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x198b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x198b50: 0xf  sync
    ctx->pc = 0x198b50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x198b54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198b58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198b5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x198b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198b60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x198b60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198b68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198b6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x198b74u;
}
