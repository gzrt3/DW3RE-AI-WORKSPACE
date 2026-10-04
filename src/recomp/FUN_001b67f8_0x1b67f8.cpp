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

// Function: FUN_001b67f8
// Address: 0x1b67f8 - 0x1b6d58
void FUN_001b67f8_0x1b67f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b67f8_0x1b67f8");
#endif

    ctx->pc = 0x1b67f8u;

    // 0x1b67f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b67fc: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1b67fcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b6800: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1b6800u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b6804: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1b6804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b6808: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1b6808u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1b680c: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x1b680cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b6810: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1b6810u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1b6814: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1B6814u;
    {
        const bool branch_taken_0x1b6814 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6814u;
        // 0x1b6818: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6814) {
            ctx->pc = 0x1B6AD8u;
            goto label_1b6ad8;
        }
    }
    ctx->pc = 0x1B681Cu;
    // 0x1b681c: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1b681cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6820: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B6820u;
    {
        const bool branch_taken_0x1b6820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6820u;
        // 0x1b6824: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6820) {
            ctx->pc = 0x1B68A0u;
            goto label_1b68a0;
        }
    }
    ctx->pc = 0x1B6828u;
    // 0x1b6828: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b6828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b682c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B682Cu;
    {
        const bool branch_taken_0x1b682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B682Cu;
        // 0x1b6830: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b682c) {
            ctx->pc = 0x1B6848u;
            goto label_1b6848;
        }
    }
    ctx->pc = 0x1B6834u;
    // 0x1b6834: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b6834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b6838: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b683c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B683Cu;
    {
        const bool branch_taken_0x1b683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B683Cu;
        // 0x1b6840: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b683c) {
            ctx->pc = 0x1B685Cu;
            goto label_1b685c;
        }
    }
    ctx->pc = 0x1B6844u;
    // 0x1b6844: 0x0  nop
    ctx->pc = 0x1b6844u;
    // NOP
label_1b6848:
    // 0x1b6848: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b6848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b684c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b6850: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b6854: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b6854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6858: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6858u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b685c:
    // 0x1b685c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b6860: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6864: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b6868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b686c: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b686cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
    // 0x1b6870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b6874: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b6874u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6878: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6894u;
            goto label_1b6894;
        }
    }
    ctx->pc = 0x1B6880u;
    // 0x1b6880: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6884: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1b6884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b6888: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b688c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6890: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b6890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b6894:
    // 0x1b6894: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1b6894u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b6898: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1B6898u;
    {
        const bool branch_taken_0x1b6898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6898u;
        // 0x1b689c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6898) {
            ctx->pc = 0x1B6A00u;
            goto label_1b6a00;
        }
    }
    ctx->pc = 0x1B68A0u;
label_1b68a0:
    // 0x1b68a0: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B68A0u;
    {
        const bool branch_taken_0x1b68a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68A0u;
        // 0x1b68a4: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68a0) {
            ctx->pc = 0x1B68C8u;
            goto label_1b68c8;
        }
    }
    ctx->pc = 0x1B68A8u;
    // 0x1b68a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b68ac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B68B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68ACu;
            // 0x1b68b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68B4u;
            goto label_1b68b4;
        }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1b68b4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b68b8: 0x1012  mflo        $v0
    ctx->pc = 0x1b68b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b68bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b68bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b68c4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b68c8:
    // 0x1b68c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B68C8u;
    {
        const bool branch_taken_0x1b68c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68C8u;
        // 0x1b68cc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68c8) {
            ctx->pc = 0x1B68E0u;
            goto label_1b68e0;
        }
    }
    ctx->pc = 0x1B68D0u;
    // 0x1b68d0: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b68d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b68d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b68d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B68D8u;
    {
        const bool branch_taken_0x1b68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68D8u;
        // 0x1b68dc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68d8) {
            ctx->pc = 0x1B68F4u;
            goto label_1b68f4;
        }
    }
    ctx->pc = 0x1B68E0u;
label_1b68e0:
    // 0x1b68e0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b68e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b68e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b68e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b68ec: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b68ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b68f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b68f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b68f4:
    // 0x1b68f4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b68f8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b68f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b68fc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b6900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6904: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b6904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
    // 0x1b6908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b690c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b690cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6910: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6910u;
    {
        const bool branch_taken_0x1b6910 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6910u;
        // 0x1b6914: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6910) {
            ctx->pc = 0x1B6928u;
            goto label_1b6928;
        }
    }
    ctx->pc = 0x1B6918u;
    // 0x1b6918: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1b691c: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b691cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b6920: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B6920u;
    {
        const bool branch_taken_0x1b6920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6920u;
        // 0x1b6924: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6920) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B6928u;
label_1b6928:
    // 0x1b6928: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b692c: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6930: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6934: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6938: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b6938u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b693c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6940: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b6944: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b6944u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b6948: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b694c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1b6950: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1b6950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6954: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6954u;
    {
        const bool branch_taken_0x1b6954 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6954) {
            ctx->pc = 0x1B6958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6954u;
            // 0x1b6958: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B695Cu;
            goto label_1b695c;
        }
    }
    ctx->pc = 0x1B695Cu;
label_1b695c:
    // 0x1b695c: 0x1012  mflo        $v0
    ctx->pc = 0x1b695cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6960: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6960u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6964: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1b6964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6968: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b696c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6970: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6974: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6974u;
    {
        const bool branch_taken_0x1b6974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6974u;
        // 0x1b6978: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6974) {
            ctx->pc = 0x1B69A0u;
            goto label_1b69a0;
        }
    }
    ctx->pc = 0x1B697Cu;
    // 0x1b697c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1b697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b6980: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1b6980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6984: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6984u;
    {
        const bool branch_taken_0x1b6984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6984) {
            ctx->pc = 0x1B6988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6984u;
            // 0x1b6988: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B69A4u;
            goto label_1b69a4;
        }
    }
    ctx->pc = 0x1B698Cu;
    // 0x1b698c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6990: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1b6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b6994: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b6998: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b6998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1b699c: 0x0  nop
    ctx->pc = 0x1b699cu;
    // NOP
label_1b69a0:
    // 0x1b69a0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1b69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1b69a4:
    // 0x1b69a4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b69a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b69a8: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1b69a8u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1b69ac: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B69ACu;
    {
        const bool branch_taken_0x1b69ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69ac) {
            ctx->pc = 0x1B69B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B69ACu;
            // 0x1b69b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B69B4u;
            goto label_1b69b4;
        }
    }
    ctx->pc = 0x1B69B4u;
label_1b69b4:
    // 0x1b69b4: 0x1012  mflo        $v0
    ctx->pc = 0x1b69b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b69b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b69bc: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1b69bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b69c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b69c4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b69c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b69c8: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b69c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b69cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69CCu;
        // 0x1b69d0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69D4u;
    // 0x1b69d4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b69d8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b69d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b69dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B69DCu;
    {
        const bool branch_taken_0x1b69dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69DCu;
        // 0x1b69e0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69dc) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69E4u;
    // 0x1b69e4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b69e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b69e8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b69ec: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b69ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b69f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b69f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1b69f4: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1b69f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1b69f8:
    // 0x1b69f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b69f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69fc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a00:
    // 0x1b6a00: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b6a00u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1b6a04: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1b6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1b6a08: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6A08u;
    {
        const bool branch_taken_0x1b6a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a08) {
            ctx->pc = 0x1B6A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A08u;
            // 0x1b6a0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A10u;
            goto label_1b6a10;
        }
    }
    ctx->pc = 0x1B6A10u;
label_1b6a10:
    // 0x1b6a10: 0x1012  mflo        $v0
    ctx->pc = 0x1b6a10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6a14: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6a14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6a18: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b6a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6a1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6a20: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6a24: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6a28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6A28u;
    {
        const bool branch_taken_0x1b6a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a28) {
            ctx->pc = 0x1B6A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A28u;
            // 0x1b6a2c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A30u;
    // 0x1b6a30: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b6a34: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6a38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6A38u;
    {
        const bool branch_taken_0x1b6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a38) {
            ctx->pc = 0x1B6A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A38u;
            // 0x1b6a3c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A40u;
    // 0x1b6a40: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6a44: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1b6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b6a48: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b6a4c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1b6a4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b6a50: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6a54:
    // 0x1b6a54: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1b6a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1b6a58: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1b6a58u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1b6a5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6A5Cu;
    {
        const bool branch_taken_0x1b6a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a5c) {
            ctx->pc = 0x1B6A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A5Cu;
            // 0x1b6a60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A64u;
            goto label_1b6a64;
        }
    }
    ctx->pc = 0x1B6A64u;
label_1b6a64:
    // 0x1b6a64: 0x1012  mflo        $v0
    ctx->pc = 0x1b6a64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6a68: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6a6c: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b6a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6a70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6a74: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6a78: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b6a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6a7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6A7Cu;
    {
        const bool branch_taken_0x1b6a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a7c) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A84u;
    // 0x1b6a84: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b6a88: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b6a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6a8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6A8Cu;
    {
        const bool branch_taken_0x1b6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A8Cu;
        // 0x1b6a90: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a8c) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A94u;
    // 0x1b6a94: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b6a98: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b6a9c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6a9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b6aa0:
    // 0x1b6aa0: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
    ctx->pc = 0x1B6AA0u;
    {
        const bool branch_taken_0x1b6aa0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AA0u;
        // 0x1b6aa4: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aa0) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6AA8u;
    // 0x1b6aa8: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6aac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6ab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6ab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6ab8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6ab8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6abc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6ac0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6ac4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6ac8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6ac8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6acc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1B6ACCu;
    {
        const bool branch_taken_0x1b6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ACCu;
        // 0x1b6ad0: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6acc) {
            ctx->pc = 0x1B6D50u;
            goto label_1b6d50;
        }
    }
    ctx->pc = 0x1B6AD4u;
    // 0x1b6ad4: 0x0  nop
    ctx->pc = 0x1b6ad4u;
    // NOP
label_1b6ad8:
    // 0x1b6ad8: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b6ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6adc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B6ADCu;
    {
        const bool branch_taken_0x1b6adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ADCu;
        // 0x1b6ae0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6adc) {
            ctx->pc = 0x1B6B18u;
            goto label_1b6b18;
        }
    }
    ctx->pc = 0x1B6AE4u;
    // 0x1b6ae4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6ae8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6aec: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1b6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1b6af0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6af4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6af4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6af8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6afc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b6b00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6b04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6b08: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6b08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6b0c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6b0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6b10: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1B6B10u;
    {
        const bool branch_taken_0x1b6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B10u;
        // 0x1b6b14: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b10) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6B18u;
label_1b6b18:
    // 0x1b6b18: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b6b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6b1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B38u;
            goto label_1b6b38;
        }
    }
    ctx->pc = 0x1B6B24u;
    // 0x1b6b24: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b6b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b6b28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6B2Cu;
    {
        const bool branch_taken_0x1b6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B2Cu;
        // 0x1b6b30: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b2c) {
            ctx->pc = 0x1B6B4Cu;
            goto label_1b6b4c;
        }
    }
    ctx->pc = 0x1B6B34u;
    // 0x1b6b34: 0x0  nop
    ctx->pc = 0x1b6b34u;
    // NOP
label_1b6b38:
    // 0x1b6b38: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b6b3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b6b40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b6b44: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b6b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6b48: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6b48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b6b4c:
    // 0x1b6b4c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b6b50: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6b54: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b6b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6b5c: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
    // 0x1b6b60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b6b64: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b6b64u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6b68: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B6B68u;
    {
        const bool branch_taken_0x1b6b68 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B68u;
        // 0x1b6b6c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b68) {
            ctx->pc = 0x1B6BD0u;
            goto label_1b6bd0;
        }
    }
    ctx->pc = 0x1B6B70u;
    // 0x1b6b70: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1b6b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1b6b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B74u;
    {
        const bool branch_taken_0x1b6b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B74u;
        // 0x1b6b78: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b74) {
            ctx->pc = 0x1B6B88u;
            goto label_1b6b88;
        }
    }
    ctx->pc = 0x1B6B7Cu;
    // 0x1b6b7c: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1b6b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6b80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6B80u;
    {
        const bool branch_taken_0x1b6b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B80u;
        // 0x1b6b84: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b80) {
            ctx->pc = 0x1B6B98u;
            goto label_1b6b98;
        }
    }
    ctx->pc = 0x1B6B88u;
label_1b6b88:
    // 0x1b6b88: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1b6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1b6b8c: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1b6b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6b90: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1b6b90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b94: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1b6b94u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b6b98:
    // 0x1b6b98: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
    ctx->pc = 0x1B6B98u;
    {
        const bool branch_taken_0x1b6b98 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B98u;
        // 0x1b6b9c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b98) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6BA0u;
    // 0x1b6ba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6ba4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6ba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6bac: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6bacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6bb0: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6bb4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b6bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b6bb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6bbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6bc0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6bc4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1B6BC4u;
    {
        const bool branch_taken_0x1b6bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC4u;
        // 0x1b6bc8: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bc4) {
            ctx->pc = 0x1B6D50u;
            goto label_1b6d50;
        }
    }
    ctx->pc = 0x1B6BCCu;
    // 0x1b6bcc: 0x0  nop
    ctx->pc = 0x1b6bccu;
    // NOP
label_1b6bd0:
    // 0x1b6bd0: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6bd4: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6bd8: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1b6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6bdc: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1b6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6be0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6be0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6be4: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b6be8: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6bec: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b6becu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6bf0: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1b6bf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1b6bf4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1b6bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1b6bf8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1b6bf8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b6bfc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b6c00: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1b6c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1b6c04: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6C04u;
    {
        const bool branch_taken_0x1b6c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c04) {
            ctx->pc = 0x1B6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C04u;
            // 0x1b6c08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C0Cu;
            goto label_1b6c0c;
        }
    }
    ctx->pc = 0x1B6C0Cu;
label_1b6c0c:
    // 0x1b6c0c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6c10: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6c10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6c14: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1b6c14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6c1c: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1b6c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6c20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6c24: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6c28: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B6C28u;
    {
        const bool branch_taken_0x1b6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c28) {
            ctx->pc = 0x1B6C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C28u;
            // 0x1b6c2c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C5Cu;
            goto label_1b6c5c;
        }
    }
    ctx->pc = 0x1B6C30u;
    // 0x1b6c30: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b6c34: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b6c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6c38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6C38u;
    {
        const bool branch_taken_0x1b6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C38u;
        // 0x1b6c3c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c38) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B6C40u;
    // 0x1b6c40: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6c44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6C44u;
    {
        const bool branch_taken_0x1b6c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c44) {
            ctx->pc = 0x1B6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C44u;
            // 0x1b6c48: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C5Cu;
            goto label_1b6c5c;
        }
    }
    ctx->pc = 0x1B6C4Cu;
    // 0x1b6c4c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1b6c50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b6c54: 0x0  nop
    ctx->pc = 0x1b6c54u;
    // NOP
label_1b6c58:
    // 0x1b6c58: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1b6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6c5c:
    // 0x1b6c5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6C5Cu;
    {
        const bool branch_taken_0x1b6c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c5c) {
            ctx->pc = 0x1B6C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C5Cu;
            // 0x1b6c60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C64u;
            goto label_1b6c64;
        }
    }
    ctx->pc = 0x1B6C64u;
label_1b6c64:
    // 0x1b6c64: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b6c64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b6c68: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b6c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b6c6c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6c70: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6c70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6c74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b6c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6c7c: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1b6c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6c80: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6c84: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6c88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6C88u;
    {
        const bool branch_taken_0x1b6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c88) {
            ctx->pc = 0x1B6C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C88u;
            // 0x1b6c8c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6C90u;
    // 0x1b6c90: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1b6c94: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1b6c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6c98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6C98u;
    {
        const bool branch_taken_0x1b6c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C98u;
        // 0x1b6c9c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c98) {
            ctx->pc = 0x1B6CB4u;
            goto label_1b6cb4;
        }
    }
    ctx->pc = 0x1B6CA0u;
    // 0x1b6ca0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6CA4u;
    {
        const bool branch_taken_0x1b6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ca4) {
            ctx->pc = 0x1B6CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CA4u;
            // 0x1b6ca8: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6CACu;
    // 0x1b6cac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b6cb0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1b6cb4:
    // 0x1b6cb4: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6cb8:
    // 0x1b6cb8: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1b6cbc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1b6cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1b6cc0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1b6cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cc4: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1b6cc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b6cc8: 0x3010  mfhi        $a2
    ctx->pc = 0x1b6cc8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1b6ccc: 0x4012  mflo        $t0
    ctx->pc = 0x1b6cccu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1b6cd0: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1b6cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b6cd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6CD4u;
    {
        const bool branch_taken_0x1b6cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CD4u;
        // 0x1b6cd8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cd4) {
            ctx->pc = 0x1B6CF0u;
            goto label_1b6cf0;
        }
    }
    ctx->pc = 0x1B6CDCu;
    // 0x1b6cdc: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6CDCu;
    {
        const bool branch_taken_0x1b6cdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CDCu;
        // 0x1b6ce0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cdc) {
            ctx->pc = 0x1B6D00u;
            goto label_1b6d00;
        }
    }
    ctx->pc = 0x1B6CE4u;
    // 0x1b6ce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6CE4u;
    {
        const bool branch_taken_0x1b6ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE4u;
        // 0x1b6ce8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ce4) {
            ctx->pc = 0x1B6D00u;
            goto label_1b6d00;
        }
    }
    ctx->pc = 0x1B6CECu;
    // 0x1b6cec: 0x0  nop
    ctx->pc = 0x1b6cecu;
    // NOP
label_1b6cf0:
    // 0x1b6cf0: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1b6cf4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1b6cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6cf8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b6cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cfc: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1b6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b6d00:
    // 0x1b6d00: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6D00u;
    {
        const bool branch_taken_0x1b6d00 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D00u;
        // 0x1b6d04: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d00) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6D08u;
    // 0x1b6d08: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b6d0c: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1b6d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b6d10: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b6d14: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6d18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6d1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6d20: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6d24: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6d24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6d28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b6d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b6d2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6d30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b6d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6d38: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1b6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6d3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6d40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6d44: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6d44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6d48: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1b6d48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1b6d4c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1b6d4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_1b6d50:
    // 0x1b6d50: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x1b6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
label_1b6d54:
    // 0x1b6d54: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1b6d54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b6d58u;
}
