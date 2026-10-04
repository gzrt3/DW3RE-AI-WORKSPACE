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

// Function: FUN_0019a078
// Address: 0x19a078 - 0x19a250
void FUN_0019a078_0x19a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a078_0x19a078");
#endif

    switch (ctx->pc) {
        case 0x19a104u: goto label_19a104;
        case 0x19a138u: goto label_19a138;
        default: break;
    }

    ctx->pc = 0x19a078u;

    // 0x19a078: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19a07c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x19a080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a084: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19a084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x19a088: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19a08c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x19a08cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x19a090: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x19a094: 0x63583  sra         $a2, $a2, 22
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x19a098: 0x3282000f  andi        $v0, $s4, 0xF
    ctx->pc = 0x19a098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x19a09c: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x19a09cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x19a0a0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x19a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x19a0a4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x19a0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x19a0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a0ac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19a0acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x19a0b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19a0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19a0bc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19a0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x19a0c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a0c4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x19a0c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19a0cc: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x19a0ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x19a0d0: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x19a0d4: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x19a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x19a0d8: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x19a0d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x19a0dc: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x19a0dcu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x19a0e0: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x19a0e0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x19a0e4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x19a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x19a0e8: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x19a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x19a0ec: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x19A0ECu;
    {
        const bool branch_taken_0x19a0ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0ECu;
        // 0x19a0f0: 0xfe030018  sd          $v1, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0ec) {
            ctx->pc = 0x19A128u;
            goto label_19a128;
        }
    }
    ctx->pc = 0x19A0F4u;
    // 0x19a0f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0fc: 0xc066234  jal         func_1988D0
    ctx->pc = 0x19A0FCu;
    SET_GPR_U32(ctx, 31, 0x19A104u);
    ctx->pc = 0x19A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0FCu;
    // 0x19a100: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x19A0FCu, 0x19A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A104u;
label_19a104:
    // 0x19a104: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a108: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x19a108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x19a10c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a10cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a110: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x19a110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x19a114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19a118: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19a11c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x19a11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x19a120: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19A120u;
    {
        const bool branch_taken_0x19a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A120u;
        // 0x19a124: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a120) {
            ctx->pc = 0x19A14Cu;
            goto label_19a14c;
        }
    }
    ctx->pc = 0x19A128u;
label_19a128:
    // 0x19a128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a130: 0xc066234  jal         func_1988D0
    ctx->pc = 0x19A130u;
    SET_GPR_U32(ctx, 31, 0x19A138u);
    ctx->pc = 0x19A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A130u;
    // 0x19a134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x19A130u, 0x19A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A138u;
label_19a138:
    // 0x19a138: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a13c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x19a13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x19a140: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a144: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x19a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x19a148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19a14c:
    // 0x19a14c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x19a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x19a150: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x19a154: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x19a154u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x19a158: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a15c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19a160: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19a160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19a164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19a168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19a16c: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x19a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x19a170: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x19a170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x19a174: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x19a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x19a178: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a17c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19a180: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x19a180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x19a184: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x19a184u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19a188: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x19a188u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19a18c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19a190: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19a194: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x19a194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x19a198: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a19c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x19a19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x19a1a0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19a1a4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x19a1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x19a1a8: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x19a1a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x19a1ac: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19a1b0: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x19a1b4: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x19a1b8: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x19a1bc: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x19a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x19a1c0: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x19a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x19a1c4: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x19a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x19a1c8: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x19a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x19a1cc: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x19a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x19a1d0: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x19a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x19a1d4: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x19a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x19a1d8: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x19a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x19a1dc: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x19a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x19a1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A1E0u;
    {
        const bool branch_taken_0x19a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E0u;
        // 0x19a1e4: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1e0) {
            ctx->pc = 0x19A1F4u;
            goto label_19a1f4;
        }
    }
    ctx->pc = 0x19A1E8u;
    // 0x19a1e8: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19a1ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A1ECu;
    {
        const bool branch_taken_0x19a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1ECu;
        // 0x19a1f0: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1ec) {
            ctx->pc = 0x19A200u;
            goto label_19a200;
        }
    }
    ctx->pc = 0x19A1F4u;
label_19a1f4:
    // 0x19a1f4: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19a1f8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19a1fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19a200:
    // 0x19a200: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x19a200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x19a204: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x19a208: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A208u;
    {
        const bool branch_taken_0x19a208 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A208u;
        // 0x19a20c: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a208) {
            ctx->pc = 0x19A224u;
            goto label_19a224;
        }
    }
    ctx->pc = 0x19A210u;
    // 0x19a210: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x19a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x19a214: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19a218: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x19a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x19a21c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A21Cu;
    {
        const bool branch_taken_0x19a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A21Cu;
        // 0x19a220: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a21c) {
            ctx->pc = 0x19A228u;
            goto label_19a228;
        }
    }
    ctx->pc = 0x19A224u;
label_19a224:
    // 0x19a224: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_19a228:
    // 0x19a228: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x19a228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x19a22c: 0xf  sync
    ctx->pc = 0x19a22cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x19a230: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19a230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a234: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19a238: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19a238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a23c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19a23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a240: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19a240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a244: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a248: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19a248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19a250u;
}
