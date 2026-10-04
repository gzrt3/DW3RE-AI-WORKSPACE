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

// Function: FUN_001cb5a0
// Address: 0x1cb5a0 - 0x1cb748
void FUN_001cb5a0_0x1cb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb5a0_0x1cb5a0");
#endif

    switch (ctx->pc) {
        case 0x1cb738u: goto label_1cb738;
        case 0x1cb744u: goto label_1cb744;
        default: break;
    }

    ctx->pc = 0x1cb5a0u;

    // 0x1cb5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb5a4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x1cb5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb5ac: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cb5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
    // 0x1cb5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb5b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb5b8: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1cb5b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1cb5bc: 0x90860038  lbu         $a2, 0x38($a0)
    ctx->pc = 0x1cb5bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1cb5c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb5c4: 0x39490001  xori        $t1, $t2, 0x1
    ctx->pc = 0x1cb5c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
    // 0x1cb5c8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cb5cc: 0x94200  sll         $t0, $t1, 8
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1cb5d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cb5d4: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1cb5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1cb5d8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb5dc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1cb5e0: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x1cb5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cb5e4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1cb5e8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1cb5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb5ec: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cb5f0: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x1cb5f4: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1CB5F4u;
    {
        const bool branch_taken_0x1cb5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5F4u;
        // 0x1cb5f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5f4) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB5FCu;
    // 0x1cb5fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb600: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1cb604: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1CB604u;
    {
        const bool branch_taken_0x1cb604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb604) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB60Cu;
    // 0x1cb60c: 0x9089003e  lbu         $t1, 0x3E($a0)
    ctx->pc = 0x1cb60cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x1cb610: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cb610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1cb614: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cb618: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1cb61c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1cb620: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x1cb624: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cb628: 0x90aa003e  lbu         $t2, 0x3E($a1)
    ctx->pc = 0x1cb628u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x1cb62c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cb630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb634: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1cb638: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1cb63c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1cb63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cb640: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1cb644: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x1cb644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x1cb648: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x1cb648u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1cb64c: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cb650: 0x1463004  sllv        $a2, $a2, $t2
    ctx->pc = 0x1cb650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 10) & 0x1F));
    // 0x1cb654: 0x8e090234  lw          $t1, 0x234($s0)
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1cb658: 0x1263824  and         $a3, $t1, $a2
    ctx->pc = 0x1cb658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x1cb65c: 0x14e00039  bnez        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CB65Cu;
    {
        const bool branch_taken_0x1cb65c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb65c) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB664u;
    // 0x1cb664: 0x92070222  lbu         $a3, 0x222($s0)
    ctx->pc = 0x1cb664u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1cb668: 0x14e00036  bnez        $a3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CB668u;
    {
        const bool branch_taken_0x1cb668 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb668) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB670u;
    // 0x1cb670: 0x90a80034  lbu         $t0, 0x34($a1)
    ctx->pc = 0x1cb670u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1cb674: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cb674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1cb678: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cb67c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1cb680: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cb684: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1cb684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1cb688: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1cb688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cb68c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cb690: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cb694: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1cb698: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cb69c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1cb6a0: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1cb6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cb6a4: 0x92230222  lbu         $v1, 0x222($s1)
    ctx->pc = 0x1cb6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x1cb6a8: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB6A8u;
    {
        const bool branch_taken_0x1cb6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6a8) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6B0u;
    // 0x1cb6b0: 0x1261825  or          $v1, $t1, $a2
    ctx->pc = 0x1cb6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1cb6b4: 0xae030234  sw          $v1, 0x234($s0)
    ctx->pc = 0x1cb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
    // 0x1cb6b8: 0x9203021f  lbu         $v1, 0x21F($s0)
    ctx->pc = 0x1cb6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 543)));
    // 0x1cb6bc: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CB6BCu;
    {
        const bool branch_taken_0x1cb6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6BCu;
        // 0x1cb6c0: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6bc) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6C4u;
    // 0x1cb6c4: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
    // 0x1cb6c8: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1cb6c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cb6cc: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB6CCu;
    {
        const bool branch_taken_0x1cb6cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6cc) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6D4u;
    // 0x1cb6d4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1cb6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6d8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1cb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1cb6dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1cb6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb6e0: 0x3446851f  ori         $a2, $v0, 0x851F
    ctx->pc = 0x1cb6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1cb6e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb6e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cb6f4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1cb6f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1cb6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cb6fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb700: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1cb700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cb704: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1cb708: 0x0  nop
    ctx->pc = 0x1cb708u;
    // NOP
    // 0x1cb70c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb70cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cb710: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cb710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cb714: 0x0  nop
    ctx->pc = 0x1cb714u;
    // NOP
    // 0x1cb718: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1cb718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cb71c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1cb720: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cb724: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1cb724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1cb728: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb728u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cb72c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1cb730: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CB730u;
    SET_GPR_U32(ctx, 31, 0x1CB738u);
    ctx->pc = 0x1CB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB730u;
    // 0x1cb734: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB730u, 0x1CB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB738u;
label_1cb738:
    // 0x1cb738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb73c: 0xc072e1c  jal         func_1CB870
    ctx->pc = 0x1CB73Cu;
    SET_GPR_U32(ctx, 31, 0x1CB744u);
    ctx->pc = 0x1CB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB73Cu;
    // 0x1cb740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB870u, 0x1CB73Cu, 0x1CB744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB744u;
label_1cb744:
    // 0x1cb744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cb748u;
}
