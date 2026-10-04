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

// Function: FUN_002372a0
// Address: 0x2372a0 - 0x2374c4
void FUN_002372a0_0x2372a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002372a0_0x2372a0");
#endif

    switch (ctx->pc) {
        case 0x237330u: goto label_237330;
        case 0x2373a8u: goto label_2373a8;
        case 0x2373dcu: goto label_2373dc;
        case 0x2373f8u: goto label_2373f8;
        case 0x23742cu: goto label_23742c;
        case 0x237478u: goto label_237478;
        default: break;
    }

    ctx->pc = 0x2372a0u;

    // 0x2372a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2372a4: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2372a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2372a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2372ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2372acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2372b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2372b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2372b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2372b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2372b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2372bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2372bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2372c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2372c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2372c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2372c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2372c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2372c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2372cc: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x2372ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2372d0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2372d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2372d4: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2372d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2372d8: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2372D8u;
    {
        const bool branch_taken_0x2372d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D8u;
        // 0x2372dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d8) {
            ctx->pc = 0x2374A4u;
            goto label_2374a4;
        }
    }
    ctx->pc = 0x2372E0u;
    // 0x2372e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2372e4: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x2372e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x2372e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2372ec: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x2372f0: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2372f4: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2372f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2372f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2372fc: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2372fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237300: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x237304: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x237304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23730c: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x23730cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x237310: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x237310u;
    {
        const bool branch_taken_0x237310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237310) {
            ctx->pc = 0x237314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237310u;
            // 0x237314: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x237318u;
label_237318:
    // 0x237318: 0xa812  mflo        $s5
    ctx->pc = 0x237318u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x23731c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x23731cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237320: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x237320u;
    {
        const bool branch_taken_0x237320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237320u;
        // 0x237324: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237320) {
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x237328u;
    // 0x237328: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x237328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23732c: 0x0  nop
    ctx->pc = 0x23732cu;
    // NOP
label_237330:
    // 0x237330: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x237334: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x237338: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x23733c: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x23733cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x237340: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x237340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x237344: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x237344u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x237348: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x237348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23734c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x23734cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x237350: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x237350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x237354: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x237354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x237358: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x237358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23735c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x237360: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x237360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237364: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x237368: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x237368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x23736c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x237370: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x237370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x237374: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x237374u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x237378: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23737c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x23737cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x237380: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x237384: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x237384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x237388: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x237388u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x23738c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23738cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x237390: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x237390u;
    {
        const bool branch_taken_0x237390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237390u;
        // 0x237394: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237390) {
            ctx->pc = 0x237330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237330;
        }
    }
    ctx->pc = 0x237398u;
    // 0x237398: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237398u;
    {
        const bool branch_taken_0x237398 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x237398) {
            ctx->pc = 0x23739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237398u;
            // 0x23739c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373D4u;
            goto label_2373d4;
        }
    }
    ctx->pc = 0x2373A0u;
    // 0x2373a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2373A0u;
    {
        const bool branch_taken_0x2373a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A0u;
        // 0x2373a4: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373a0) {
            ctx->pc = 0x2373ACu;
            goto label_2373ac;
        }
    }
    ctx->pc = 0x2373A8u;
label_2373a8:
    // 0x2373a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2373ac:
    // 0x2373ac: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x2373acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2373b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2373B0u;
    {
        const bool branch_taken_0x2373b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373b0) {
            ctx->pc = 0x2373B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373B0u;
            // 0x2373b4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x2373B8u;
    // 0x2373b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2373bc: 0x0  nop
    ctx->pc = 0x2373bcu;
    // NOP
    // 0x2373c0: 0x0  nop
    ctx->pc = 0x2373c0u;
    // NOP
    // 0x2373c4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2373C4u;
    {
        const bool branch_taken_0x2373c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373c4) {
            ctx->pc = 0x2373C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373C4u;
            // 0x2373c8: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2373a8;
        }
    }
    ctx->pc = 0x2373CCu;
    // 0x2373cc: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2373ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2373d0:
    // 0x2373d0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2373d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2373d4:
    // 0x2373d4: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x2373D4u;
    SET_GPR_U32(ctx, 31, 0x2373DCu);
    ctx->pc = 0x2373D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373D4u;
    // 0x2373d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x2373D4u, 0x2373DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373DCu;
label_2373dc:
    // 0x2373dc: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2373DCu;
    {
        const bool branch_taken_0x2373dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373dc) {
            ctx->pc = 0x2374A0u;
            goto label_2374a0;
        }
    }
    ctx->pc = 0x2373E4u;
    // 0x2373e4: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2373e8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2373ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373f0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2373f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373f4: 0x0  nop
    ctx->pc = 0x2373f4u;
    // NOP
label_2373f8:
    // 0x2373f8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2373fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2373fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x237400: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x237404: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x237404u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x237408: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x237408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23740c: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x23740cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x237410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237414: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x237414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x237418: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x237418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23741c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x237420: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x237420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x237424: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x237424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x237428: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x237428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_23742c:
    // 0x23742c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x237430: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x237430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x237434: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x237438: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23743c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x23743cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x237440: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x237440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x237444: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x237448: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x237448u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x23744c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x237450: 0x10e0ffe9  beqz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x237450u;
    {
        const bool branch_taken_0x237450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237450u;
        // 0x237454: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237450) {
            ctx->pc = 0x2373F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2373f8;
        }
    }
    ctx->pc = 0x237458u;
    // 0x237458: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23745c: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x23745cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x237460: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x237464: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x237464u;
    {
        const bool branch_taken_0x237464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237464u;
        // 0x237468: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237464) {
            ctx->pc = 0x2374A4u;
            goto label_2374a4;
        }
    }
    ctx->pc = 0x23746Cu;
    // 0x23746c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23746Cu;
    {
        const bool branch_taken_0x23746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23746Cu;
        // 0x237470: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23746c) {
            ctx->pc = 0x23747Cu;
            goto label_23747c;
        }
    }
    ctx->pc = 0x237474u;
    // 0x237474: 0x0  nop
    ctx->pc = 0x237474u;
    // NOP
label_237478:
    // 0x237478: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x237478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_23747c:
    // 0x23747c: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x23747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x237480: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237480u;
    {
        const bool branch_taken_0x237480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237480) {
            ctx->pc = 0x237484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237480u;
            // 0x237484: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2374A0u;
            goto label_2374a0;
        }
    }
    ctx->pc = 0x237488u;
    // 0x237488: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x237488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23748c: 0x0  nop
    ctx->pc = 0x23748cu;
    // NOP
    // 0x237490: 0x0  nop
    ctx->pc = 0x237490u;
    // NOP
    // 0x237494: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x237494u;
    {
        const bool branch_taken_0x237494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237494) {
            ctx->pc = 0x237498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237494u;
            // 0x237498: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237478;
        }
    }
    ctx->pc = 0x23749Cu;
    // 0x23749c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x23749cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2374a0:
    // 0x2374a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2374a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2374a4:
    // 0x2374a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2374a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2374a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2374a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2374ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2374acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2374b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2374b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2374b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2374b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2374b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2374b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2374bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2374bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2374c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2374c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x2374c4u;
}
