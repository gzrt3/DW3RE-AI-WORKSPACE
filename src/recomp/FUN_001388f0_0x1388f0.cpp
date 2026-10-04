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

// Function: FUN_001388f0
// Address: 0x1388f0 - 0x138b38
void FUN_001388f0_0x1388f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001388f0_0x1388f0");
#endif

    switch (ctx->pc) {
        case 0x13899cu: goto label_13899c;
        case 0x138a78u: goto label_138a78;
        case 0x138b34u: goto label_138b34;
        default: break;
    }

    ctx->pc = 0x1388f0u;

    // 0x1388f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1388f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1388f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1388f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1388f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1388f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1388fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1388fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138900: 0x8f838504  lw          $v1, -0x7AFC($gp)
    ctx->pc = 0x138900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935812)));
    // 0x138904: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x138904u;
    {
        const bool branch_taken_0x138904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138904u;
        // 0x138908: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138904) {
            ctx->pc = 0x138B34u;
            goto label_138b34;
        }
    }
    ctx->pc = 0x13890Cu;
    // 0x13890c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x13890cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x138910: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x138910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x138914: 0x24045460  addiu       $a0, $zero, 0x5460
    ctx->pc = 0x138914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21600));
    // 0x138918: 0x3c0a0031  lui         $t2, 0x31
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49 << 16));
    // 0x13891c: 0x8f888514  lw          $t0, -0x7AEC($gp)
    ctx->pc = 0x13891cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935828)));
    // 0x138920: 0x8f838508  lw          $v1, -0x7AF8($gp)
    ctx->pc = 0x138920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935816)));
    // 0x138924: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x138924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x138928: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x13892c: 0x8f868510  lw          $a2, -0x7AF0($gp)
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x138930: 0x8f82850c  lw          $v0, -0x7AF4($gp)
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935820)));
    // 0x138934: 0x254aadd0  addiu       $t2, $t2, -0x5230
    ctx->pc = 0x138934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946256));
    // 0x138938: 0xe45818  mult        $t3, $a3, $a0
    ctx->pc = 0x138938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x13893c: 0x3480a  movz        $t1, $zero, $v1
    ctx->pc = 0x13893cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x138940: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x138940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x138944: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x138944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x138948: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13894c: 0xa83823  subu        $a3, $a1, $t0
    ctx->pc = 0x13894cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x138950: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x138954: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x138954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x138958: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x138958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13895c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x13895cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x138960: 0x0  nop
    ctx->pc = 0x138960u;
    // NOP
    // 0x138964: 0x0  nop
    ctx->pc = 0x138964u;
    // NOP
    // 0x138968: 0x4012  mflo        $t0
    ctx->pc = 0x138968u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x13896c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13896Cu;
    {
        const bool branch_taken_0x13896c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13896Cu;
        // 0x138970: 0x14b2821  addu        $a1, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13896c) {
            ctx->pc = 0x138A50u;
            goto label_138a50;
        }
    }
    ctx->pc = 0x138974u;
    // 0x138974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138978: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x138978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13897c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13897cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138980: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x138980u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138984: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x138988: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x138988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x13898c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x138990: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x138994: 0x340effff  ori         $t6, $zero, 0xFFFF
    ctx->pc = 0x138994u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x138998: 0x34109400  ori         $s0, $zero, 0x9400
    ctx->pc = 0x138998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_13899c:
    // 0x13899c: 0xaa6821  addu        $t5, $a1, $t2
    ctx->pc = 0x13899cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1389a0: 0x4b8821  addu        $s1, $v0, $t3
    ctx->pc = 0x1389a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1389a4: 0xa1a90060  sb          $t1, 0x60($t5)
    ctx->pc = 0x1389a4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 96), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389a8: 0x25997900  addiu       $t9, $t4, 0x7900
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 12), 30976));
    // 0x1389ac: 0xa1a90061  sb          $t1, 0x61($t5)
    ctx->pc = 0x1389acu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 97), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1389b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1389b4: 0xa1a90062  sb          $t1, 0x62($t5)
    ctx->pc = 0x1389b4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 98), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389b8: 0x28ef01c0  slti        $t7, $a3, 0x1C0
    ctx->pc = 0x1389b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)448) ? 1 : 0);
    // 0x1389bc: 0xa1a00063  sb          $zero, 0x63($t5)
    ctx->pc = 0x1389bcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 99), (uint8_t)GPR_U32(ctx, 0));
    // 0x1389c0: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x1389c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x1389c4: 0xada60064  sw          $a2, 0x64($t5)
    ctx->pc = 0x1389c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 6));
    // 0x1389c8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1389c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1389cc: 0xa1a90070  sb          $t1, 0x70($t5)
    ctx->pc = 0x1389ccu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 112), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389d0: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x1389d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x1389d4: 0xa1a90071  sb          $t1, 0x71($t5)
    ctx->pc = 0x1389d4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 113), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389d8: 0xa1a90072  sb          $t1, 0x72($t5)
    ctx->pc = 0x1389d8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 114), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389dc: 0xa1a30073  sb          $v1, 0x73($t5)
    ctx->pc = 0x1389dcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x1389e0: 0xada60074  sw          $a2, 0x74($t5)
    ctx->pc = 0x1389e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 116), GPR_U32(ctx, 6));
    // 0x1389e4: 0xa1a90080  sb          $t1, 0x80($t5)
    ctx->pc = 0x1389e4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 128), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389e8: 0xa1a90081  sb          $t1, 0x81($t5)
    ctx->pc = 0x1389e8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 129), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389ec: 0xa1a90082  sb          $t1, 0x82($t5)
    ctx->pc = 0x1389ecu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 130), (uint8_t)GPR_U32(ctx, 9));
    // 0x1389f0: 0xa1a30083  sb          $v1, 0x83($t5)
    ctx->pc = 0x1389f0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1389f4: 0xada60084  sw          $a2, 0x84($t5)
    ctx->pc = 0x1389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 132), GPR_U32(ctx, 6));
    // 0x1389f8: 0x86380000  lh          $t8, 0x0($s1)
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1389fc: 0x118c021  addu        $t8, $t0, $t8
    ctx->pc = 0x1389fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x138a00: 0x2718fee0  addiu       $t8, $t8, -0x120
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967008));
    // 0x138a04: 0x18c100  sll         $t8, $t8, 4
    ctx->pc = 0x138a04u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x138a08: 0x27186c00  addiu       $t8, $t8, 0x6C00
    ctx->pc = 0x138a08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 27648));
    // 0x138a0c: 0xa5b80068  sh          $t8, 0x68($t5)
    ctx->pc = 0x138a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 104), (uint16_t)GPR_U32(ctx, 24));
    // 0x138a10: 0xa5b9006a  sh          $t9, 0x6A($t5)
    ctx->pc = 0x138a10u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 106), (uint16_t)GPR_U32(ctx, 25));
    // 0x138a14: 0xadae006c  sw          $t6, 0x6C($t5)
    ctx->pc = 0x138a14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 108), GPR_U32(ctx, 14));
    // 0x138a18: 0x86380000  lh          $t8, 0x0($s1)
    ctx->pc = 0x138a18u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138a1c: 0x118c021  addu        $t8, $t0, $t8
    ctx->pc = 0x138a1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x138a20: 0x2718ff40  addiu       $t8, $t8, -0xC0
    ctx->pc = 0x138a20u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967104));
    // 0x138a24: 0x18c100  sll         $t8, $t8, 4
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x138a28: 0x27186c00  addiu       $t8, $t8, 0x6C00
    ctx->pc = 0x138a28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 27648));
    // 0x138a2c: 0xa5b80078  sh          $t8, 0x78($t5)
    ctx->pc = 0x138a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 120), (uint16_t)GPR_U32(ctx, 24));
    // 0x138a30: 0xa5b9007a  sh          $t9, 0x7A($t5)
    ctx->pc = 0x138a30u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 122), (uint16_t)GPR_U32(ctx, 25));
    // 0x138a34: 0xadae007c  sw          $t6, 0x7C($t5)
    ctx->pc = 0x138a34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 14));
    // 0x138a38: 0xa5b00088  sh          $s0, 0x88($t5)
    ctx->pc = 0x138a38u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 136), (uint16_t)GPR_U32(ctx, 16));
    // 0x138a3c: 0xa5b9008a  sh          $t9, 0x8A($t5)
    ctx->pc = 0x138a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 138), (uint16_t)GPR_U32(ctx, 25));
    // 0x138a40: 0x15e0ffd6  bnez        $t7, . + 4 + (-0x2A << 2)
    ctx->pc = 0x138A40u;
    {
        const bool branch_taken_0x138a40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x138A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A40u;
        // 0x138a44: 0xadae008c  sw          $t6, 0x8C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 140), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a40) {
            ctx->pc = 0x13899Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13899c;
        }
    }
    ctx->pc = 0x138A48u;
    // 0x138a48: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x138A48u;
    {
        const bool branch_taken_0x138a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a48) {
            ctx->pc = 0x138B20u;
            goto label_138b20;
        }
    }
    ctx->pc = 0x138A50u;
label_138a50:
    // 0x138a50: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x138a50u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x138a58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x138a5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a60: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x138a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x138a64: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x138a68: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x138a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x138a6c: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x138a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x138a70: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x138a70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x138a74: 0x24186bf0  addiu       $t8, $zero, 0x6BF0
    ctx->pc = 0x138a74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 27632));
label_138a78:
    // 0x138a78: 0xa76021  addu        $t4, $a1, $a3
    ctx->pc = 0x138a78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x138a7c: 0x4a8821  addu        $s1, $v0, $t2
    ctx->pc = 0x138a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x138a80: 0xa1890060  sb          $t1, 0x60($t4)
    ctx->pc = 0x138a80u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 96), (uint8_t)GPR_U32(ctx, 9));
    // 0x138a84: 0x25707900  addiu       $s0, $t3, 0x7900
    ctx->pc = 0x138a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x138a88: 0xa1890061  sb          $t1, 0x61($t4)
    ctx->pc = 0x138a88u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 97), (uint8_t)GPR_U32(ctx, 9));
    // 0x138a8c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x138a8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x138a90: 0xa1890062  sb          $t1, 0x62($t4)
    ctx->pc = 0x138a90u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 98), (uint8_t)GPR_U32(ctx, 9));
    // 0x138a94: 0x29cf01c0  slti        $t7, $t6, 0x1C0
    ctx->pc = 0x138a94u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)448) ? 1 : 0);
    // 0x138a98: 0xa1800063  sb          $zero, 0x63($t4)
    ctx->pc = 0x138a98u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 99), (uint8_t)GPR_U32(ctx, 0));
    // 0x138a9c: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x138a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x138aa0: 0xad860064  sw          $a2, 0x64($t4)
    ctx->pc = 0x138aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 100), GPR_U32(ctx, 6));
    // 0x138aa4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x138aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x138aa8: 0xa1890070  sb          $t1, 0x70($t4)
    ctx->pc = 0x138aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 112), (uint8_t)GPR_U32(ctx, 9));
    // 0x138aac: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x138aacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x138ab0: 0xa1890071  sb          $t1, 0x71($t4)
    ctx->pc = 0x138ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 113), (uint8_t)GPR_U32(ctx, 9));
    // 0x138ab4: 0xa1890072  sb          $t1, 0x72($t4)
    ctx->pc = 0x138ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 114), (uint8_t)GPR_U32(ctx, 9));
    // 0x138ab8: 0xa1830073  sb          $v1, 0x73($t4)
    ctx->pc = 0x138ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x138abc: 0xad860074  sw          $a2, 0x74($t4)
    ctx->pc = 0x138abcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 116), GPR_U32(ctx, 6));
    // 0x138ac0: 0xa1890080  sb          $t1, 0x80($t4)
    ctx->pc = 0x138ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 128), (uint8_t)GPR_U32(ctx, 9));
    // 0x138ac4: 0xa1890081  sb          $t1, 0x81($t4)
    ctx->pc = 0x138ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 129), (uint8_t)GPR_U32(ctx, 9));
    // 0x138ac8: 0xa1890082  sb          $t1, 0x82($t4)
    ctx->pc = 0x138ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 130), (uint8_t)GPR_U32(ctx, 9));
    // 0x138acc: 0xa1830083  sb          $v1, 0x83($t4)
    ctx->pc = 0x138accu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x138ad0: 0xad860084  sw          $a2, 0x84($t4)
    ctx->pc = 0x138ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 132), GPR_U32(ctx, 6));
    // 0x138ad4: 0x86390000  lh          $t9, 0x0($s1)
    ctx->pc = 0x138ad4u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138ad8: 0x119c823  subu        $t9, $t0, $t9
    ctx->pc = 0x138ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x138adc: 0x19c900  sll         $t9, $t9, 4
    ctx->pc = 0x138adcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x138ae0: 0x27396c00  addiu       $t9, $t9, 0x6C00
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 27648));
    // 0x138ae4: 0xa5990068  sh          $t9, 0x68($t4)
    ctx->pc = 0x138ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 104), (uint16_t)GPR_U32(ctx, 25));
    // 0x138ae8: 0xa590006a  sh          $s0, 0x6A($t4)
    ctx->pc = 0x138ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 106), (uint16_t)GPR_U32(ctx, 16));
    // 0x138aec: 0xad8d006c  sw          $t5, 0x6C($t4)
    ctx->pc = 0x138aecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 108), GPR_U32(ctx, 13));
    // 0x138af0: 0x86390000  lh          $t9, 0x0($s1)
    ctx->pc = 0x138af0u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138af4: 0x119c823  subu        $t9, $t0, $t9
    ctx->pc = 0x138af4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x138af8: 0x2739ffa0  addiu       $t9, $t9, -0x60
    ctx->pc = 0x138af8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967200));
    // 0x138afc: 0x19c900  sll         $t9, $t9, 4
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x138b00: 0x27396c00  addiu       $t9, $t9, 0x6C00
    ctx->pc = 0x138b00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 27648));
    // 0x138b04: 0xa5990078  sh          $t9, 0x78($t4)
    ctx->pc = 0x138b04u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 120), (uint16_t)GPR_U32(ctx, 25));
    // 0x138b08: 0xa590007a  sh          $s0, 0x7A($t4)
    ctx->pc = 0x138b08u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 122), (uint16_t)GPR_U32(ctx, 16));
    // 0x138b0c: 0xad8d007c  sw          $t5, 0x7C($t4)
    ctx->pc = 0x138b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 124), GPR_U32(ctx, 13));
    // 0x138b10: 0xa5980088  sh          $t8, 0x88($t4)
    ctx->pc = 0x138b10u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 136), (uint16_t)GPR_U32(ctx, 24));
    // 0x138b14: 0xa590008a  sh          $s0, 0x8A($t4)
    ctx->pc = 0x138b14u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 138), (uint16_t)GPR_U32(ctx, 16));
    // 0x138b18: 0x15e0ffd7  bnez        $t7, . + 4 + (-0x29 << 2)
    ctx->pc = 0x138B18u;
    {
        const bool branch_taken_0x138b18 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x138B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B18u;
        // 0x138b1c: 0xad8d008c  sw          $t5, 0x8C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 140), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b18) {
            ctx->pc = 0x138A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138a78;
        }
    }
    ctx->pc = 0x138B20u;
label_138b20:
    // 0x138b20: 0x24060546  addiu       $a2, $zero, 0x546
    ctx->pc = 0x138b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
    // 0x138b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b2c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x138B2Cu;
    SET_GPR_U32(ctx, 31, 0x138B34u);
    ctx->pc = 0x138B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B2Cu;
    // 0x138b30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x138B2Cu, 0x138B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B34u;
label_138b34:
    // 0x138b34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x138b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x138b38u;
}
