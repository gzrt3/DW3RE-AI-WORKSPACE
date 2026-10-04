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

// Function: entry_001a3740
// Address: 0x1a3740 - 0x1a39e8
void entry_001a3740_0x1a3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3740_0x1a3740");
#endif

    switch (ctx->pc) {
        case 0x1a3868u: goto label_1a3868;
        case 0x1a387cu: goto label_1a387c;
        case 0x1a3894u: goto label_1a3894;
        case 0x1a38acu: goto label_1a38ac;
        case 0x1a38fcu: goto label_1a38fc;
        case 0x1a390cu: goto label_1a390c;
        case 0x1a391cu: goto label_1a391c;
        case 0x1a392cu: goto label_1a392c;
        case 0x1a393cu: goto label_1a393c;
        case 0x1a394cu: goto label_1a394c;
        case 0x1a395cu: goto label_1a395c;
        case 0x1a396cu: goto label_1a396c;
        case 0x1a397cu: goto label_1a397c;
        default: break;
    }

    ctx->pc = 0x1a3740u;

    // 0x1a3740: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a3744: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3748: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1a3748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1a374c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x1a374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x1a3750: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1a3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1a3754: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x1a3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x1a3758: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1a3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1a375c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x1a375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x1a3760: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1a3760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1a3764: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1a3764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1a3768: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1a376c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1a376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1a3770: 0x8cbe0040  lw          $fp, 0x40($a1)
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1a3774: 0x8fc60848  lw          $a2, 0x848($fp)
    ctx->pc = 0x1a3774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2120)));
    // 0x1a3778: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3778u;
    {
        const bool branch_taken_0x1a3778 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3778) {
            ctx->pc = 0x1A377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3778u;
            // 0x1a377c: 0x8fc20124  lw          $v0, 0x124($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A37A8u;
            goto label_1a37a8;
        }
    }
    ctx->pc = 0x1A3780u;
    // 0x1a3780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3784: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3788: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a378c: 0xafc30174  sw          $v1, 0x174($fp)
    ctx->pc = 0x1a378cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 372), GPR_U32(ctx, 3));
    // 0x1a3790: 0xafc2017c  sw          $v0, 0x17C($fp)
    ctx->pc = 0x1a3790u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 380), GPR_U32(ctx, 2));
    // 0x1a3794: 0xafc40144  sw          $a0, 0x144($fp)
    ctx->pc = 0x1a3794u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 4));
    // 0x1a3798: 0xafc2013c  sw          $v0, 0x13C($fp)
    ctx->pc = 0x1a3798u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 316), GPR_U32(ctx, 2));
    // 0x1a379c: 0xafc20140  sw          $v0, 0x140($fp)
    ctx->pc = 0x1a379cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 320), GPR_U32(ctx, 2));
    // 0x1a37a0: 0xafc20188  sw          $v0, 0x188($fp)
    ctx->pc = 0x1a37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 2));
    // 0x1a37a4: 0x8fc20124  lw          $v0, 0x124($fp)
    ctx->pc = 0x1a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
label_1a37a8:
    // 0x1a37a8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1a37ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1a37b0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A37B0u;
    {
        const bool branch_taken_0x1a37b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37B0u;
        // 0x1a37b4: 0xafc2012c  sw          $v0, 0x12C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37b0) {
            ctx->pc = 0x1A37D4u;
            goto label_1a37d4;
        }
    }
    ctx->pc = 0x1A37B8u;
    // 0x1a37b8: 0x8fc2013c  lw          $v0, 0x13C($fp)
    ctx->pc = 0x1a37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 316)));
    // 0x1a37bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A37BCu;
    {
        const bool branch_taken_0x1a37bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37BCu;
        // 0x1a37c0: 0x8fc20128  lw          $v0, 0x128($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37bc) {
            ctx->pc = 0x1A37D8u;
            goto label_1a37d8;
        }
    }
    ctx->pc = 0x1A37C4u;
    // 0x1a37c4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1a37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1a37c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1a37c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1a37cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A37CCu;
    {
        const bool branch_taken_0x1a37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37CCu;
        // 0x1a37d0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37cc) {
            ctx->pc = 0x1A37E0u;
            goto label_1a37e0;
        }
    }
    ctx->pc = 0x1A37D4u;
label_1a37d4:
    // 0x1a37d4: 0x8fc20128  lw          $v0, 0x128($fp)
    ctx->pc = 0x1a37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
label_1a37d8:
    // 0x1a37d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1a37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1a37dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a37e0:
    // 0x1a37e0: 0xafc20130  sw          $v0, 0x130($fp)
    ctx->pc = 0x1a37e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 2));
    // 0x1a37e4: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1a37e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a37e8: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x1a37ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a37f0: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a37f4: 0x16e30004  bne         $s7, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A37F4u;
    {
        const bool branch_taken_0x1a37f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37F4u;
        // 0x1a37f8: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37f4) {
            ctx->pc = 0x1A3808u;
            goto label_1a3808;
        }
    }
    ctx->pc = 0x1A37FCu;
    // 0x1a37fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a3800: 0x12c2006d  beq         $s6, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1A3800u;
    {
        const bool branch_taken_0x1a3800 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3800u;
        // 0x1a3804: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3800) {
            ctx->pc = 0x1A39B8u;
            goto label_1a39b8;
        }
    }
    ctx->pc = 0x1A3808u;
label_1a3808:
    // 0x1a3808: 0xacb60004  sw          $s6, 0x4($a1)
    ctx->pc = 0x1a3808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 22));
    // 0x1a380c: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x1a380cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a3810: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x1a3810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
    // 0x1a3814: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x1a3814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1a3818: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1a381c: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x1a381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x1a3820: 0x27c20320  addiu       $v0, $fp, 0x320
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 800));
    // 0x1a3824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3828: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1a3828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1a382c: 0x27d301e8  addiu       $s3, $fp, 0x1E8
    ctx->pc = 0x1a382cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 488));
    // 0x1a3830: 0x27c20388  addiu       $v0, $fp, 0x388
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 904));
    // 0x1a3834: 0x2f08018  mult        $s0, $s7, $s0
    ctx->pc = 0x1a3834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1a3838: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a3838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1a383c: 0x27d40250  addiu       $s4, $fp, 0x250
    ctx->pc = 0x1a383cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 592));
    // 0x1a3840: 0x27c203f0  addiu       $v0, $fp, 0x3F0
    ctx->pc = 0x1a3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1008));
    // 0x1a3844: 0x27d502b8  addiu       $s5, $fp, 0x2B8
    ctx->pc = 0x1a3844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
    // 0x1a3848: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1a3848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1a384c: 0x169043  sra         $s2, $s6, 1
    ctx->pc = 0x1a384cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1a3850: 0x27c20458  addiu       $v0, $fp, 0x458
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1112));
    // 0x1a3854: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x1a3854u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x1a3858: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1a3858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1a385c: 0x27c204c0  addiu       $v0, $fp, 0x4C0
    ctx->pc = 0x1a385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1216));
    // 0x1a3860: 0xc068b62  jal         func_1A2D88
    ctx->pc = 0x1A3860u;
    SET_GPR_U32(ctx, 31, 0x1A3868u);
    ctx->pc = 0x1A3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3860u;
    // 0x1a3864: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D88u, 0x1A3860u, 0x1A3868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3868u;
label_1a3868:
    // 0x1a3868: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a386c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3874: 0xc068b66  jal         func_1A2D98
    ctx->pc = 0x1A3874u;
    SET_GPR_U32(ctx, 31, 0x1A387Cu);
    ctx->pc = 0x1A3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3874u;
    // 0x1a3878: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D98u, 0x1A3874u, 0x1A387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A387Cu;
label_1a387c:
    // 0x1a387c: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x1a387cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x1a3880: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a388c: 0xc068b66  jal         func_1A2D98
    ctx->pc = 0x1A388Cu;
    SET_GPR_U32(ctx, 31, 0x1A3894u);
    ctx->pc = 0x1A3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A388Cu;
    // 0x1a3890: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D98u, 0x1A388Cu, 0x1A3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3894u;
label_1a3894:
    // 0x1a3894: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x1a3894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x1a3898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a389c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a389cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38a4: 0xc068b66  jal         func_1A2D98
    ctx->pc = 0x1A38A4u;
    SET_GPR_U32(ctx, 31, 0x1A38ACu);
    ctx->pc = 0x1A38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38A4u;
    // 0x1a38a8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D98u, 0x1A38A4u, 0x1A38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38ACu;
label_1a38ac:
    // 0x1a38ac: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x1a38acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1a38b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38b4: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x1a38b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a38b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a38b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38bc: 0x8faa003c  lw          $t2, 0x3C($sp)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a38c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a38c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38c4: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x1a38c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a38c8: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x1a38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x1a38cc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1a38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1a38d0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1a38d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a38d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a38d8: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x1a38dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1a38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1a38e0: 0x8fc30100  lw          $v1, 0x100($fp)
    ctx->pc = 0x1a38e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x1a38e4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a38e8: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x1a38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x1a38ec: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x1a38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x1a38f0: 0xafb60028  sw          $s6, 0x28($sp)
    ctx->pc = 0x1a38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 22));
    // 0x1a38f4: 0xc068e7a  jal         func_1A39E8
    ctx->pc = 0x1A38F4u;
    SET_GPR_U32(ctx, 31, 0x1A38FCu);
    ctx->pc = 0x1A38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38F4u;
    // 0x1a38f8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A39E8u, 0x1A38F4u, 0x1A38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38FCu;
label_1a38fc:
    // 0x1a38fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3900: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3904: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3904u;
    SET_GPR_U32(ctx, 31, 0x1A390Cu);
    ctx->pc = 0x1A3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3904u;
    // 0x1a3908: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3904u, 0x1A390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A390Cu;
label_1a390c:
    // 0x1a390c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3910: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3914: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3914u;
    SET_GPR_U32(ctx, 31, 0x1A391Cu);
    ctx->pc = 0x1A3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3914u;
    // 0x1a3918: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3914u, 0x1A391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A391Cu;
label_1a391c:
    // 0x1a391c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3920: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3924: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3924u;
    SET_GPR_U32(ctx, 31, 0x1A392Cu);
    ctx->pc = 0x1A3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3924u;
    // 0x1a3928: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3924u, 0x1A392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A392Cu;
label_1a392c:
    // 0x1a392c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3930: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3934: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3934u;
    SET_GPR_U32(ctx, 31, 0x1A393Cu);
    ctx->pc = 0x1A3938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3934u;
    // 0x1a3938: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3934u, 0x1A393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A393Cu;
label_1a393c:
    // 0x1a393c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1a393cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1a3940: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3944: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3944u;
    SET_GPR_U32(ctx, 31, 0x1A394Cu);
    ctx->pc = 0x1A3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3944u;
    // 0x1a3948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3944u, 0x1A394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A394Cu;
label_1a394c:
    // 0x1a394c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3950: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3954: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3954u;
    SET_GPR_U32(ctx, 31, 0x1A395Cu);
    ctx->pc = 0x1A3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3954u;
    // 0x1a3958: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3954u, 0x1A395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A395Cu;
label_1a395c:
    // 0x1a395c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1a395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a3960: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3964: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3964u;
    SET_GPR_U32(ctx, 31, 0x1A396Cu);
    ctx->pc = 0x1A3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3964u;
    // 0x1a3968: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3964u, 0x1A396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A396Cu;
label_1a396c:
    // 0x1a396c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3970: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3974: 0xc068d7e  jal         func_1A35F8
    ctx->pc = 0x1A3974u;
    SET_GPR_U32(ctx, 31, 0x1A397Cu);
    ctx->pc = 0x1A3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3974u;
    // 0x1a3978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A3974u, 0x1A397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A397Cu;
label_1a397c:
    // 0x1a397c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3980: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3984: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1a3988: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1a3988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a398c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1a398cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a3990: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1a3990u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a3994: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1a3994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a3998: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1a3998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a399c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1a399cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a39a0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1a39a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a39a4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1a39a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a39a8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1a39a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a39ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a39acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a39b0: 0x8068d7e  j           func_1A35F8
    ctx->pc = 0x1A39B0u;
    ctx->pc = 0x1A39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39B0u;
    // 0x1a39b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F8u, 0x1A39B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1A39B8u;
label_1a39b8:
    // 0x1a39b8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1a39b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a39bc: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1a39bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a39c0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1a39c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a39c4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1a39c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a39c8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1a39c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a39cc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1a39ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a39d0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1a39d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a39d4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1a39d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a39d8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1a39d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a39dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a39dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a39e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39E0u;
        // 0x1a39e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A39E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A39E8u;
}
