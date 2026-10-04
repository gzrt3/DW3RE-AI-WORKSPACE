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

// Function: FUN_001b17e0
// Address: 0x1b17e0 - 0x1b194c
void FUN_001b17e0_0x1b17e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b17e0_0x1b17e0");
#endif

    switch (ctx->pc) {
        case 0x1b1830u: goto label_1b1830;
        case 0x1b18b0u: goto label_1b18b0;
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b190cu: goto label_1b190c;
        case 0x1b192cu: goto label_1b192c;
        default: break;
    }

    ctx->pc = 0x1b17e0u;

    // 0x1b17e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b17e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b17e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b17e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b17ec: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b17ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b17f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b17f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b17f4: 0x26826200  addiu       $v0, $s4, 0x6200
    ctx->pc = 0x1b17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25088));
    // 0x1b17f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b17fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b17fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1800: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b1804: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1808: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b180c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b1810: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1814: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1814u;
    {
        const bool branch_taken_0x1b1814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1814u;
        // 0x1b1818: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1814) {
            ctx->pc = 0x1B1824u;
            goto label_1b1824;
        }
    }
    ctx->pc = 0x1B181Cu;
    // 0x1b181c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1B181Cu;
    {
        const bool branch_taken_0x1b181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B181Cu;
        // 0x1b1820: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b181c) {
            ctx->pc = 0x1B1930u;
            goto label_1b1930;
        }
    }
    ctx->pc = 0x1B1824u;
label_1b1824:
    // 0x1b1824: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b1828: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1828u;
    SET_GPR_U32(ctx, 31, 0x1B1830u);
    ctx->pc = 0x1B182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1828u;
    // 0x1b182c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1828u, 0x1B1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1830u;
label_1b1830:
    // 0x1b1830: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1830u;
        // 0x1b1834: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B1840u;
            goto label_1b1840;
        }
    }
    ctx->pc = 0x1B1838u;
    // 0x1b1838: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1B1838u;
    {
        const bool branch_taken_0x1b1838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1838u;
        // 0x1b183c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1838) {
            ctx->pc = 0x1B1930u;
            goto label_1b1930;
        }
    }
    ctx->pc = 0x1B1840u;
label_1b1840:
    // 0x1b1840: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1b1844: 0x26666280  addiu       $a2, $s3, 0x6280
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
    // 0x1b1848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1848u;
    {
        const bool branch_taken_0x1b1848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1848u;
        // 0x1b184c: 0xae726280  sw          $s2, 0x6280($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 25216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1848) {
            ctx->pc = 0x1B1860u;
            goto label_1b1860;
        }
    }
    ctx->pc = 0x1B1850u;
    // 0x1b1850: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x1b1850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x1b1854: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1b1854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1b1858: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1858u;
        // 0x1b185c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B188Cu;
            goto label_1b188c;
        }
    }
    ctx->pc = 0x1B1860u;
label_1b1860:
    // 0x1b1860: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b1864: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b1868: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1b1868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1b186c: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x1b186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1b1870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b1874: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b1874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b1878: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1b1878u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b187c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1b187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b1880: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1b1880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1b1884: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1b1884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x1b1888: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1b1888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_1b188c:
    // 0x1b188c: 0x26626280  addiu       $v0, $s3, 0x6280
    ctx->pc = 0x1b188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
    // 0x1b1890: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b1890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1894: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b1898: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1898u;
    {
        const bool branch_taken_0x1b1898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1898u;
        // 0x1b189c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1898) {
            ctx->pc = 0x1B18D8u;
            goto label_1b18d8;
        }
    }
    ctx->pc = 0x1B18A0u;
    // 0x1b18a0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b18a4: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1b18a8: 0x24e46280  addiu       $a0, $a3, 0x6280
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b18ac: 0x0  nop
    ctx->pc = 0x1b18acu;
    // NOP
label_1b18b0:
    // 0x1b18b0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b18b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b18b4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1b18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b18b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b18bc: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x1b18bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b18c0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1b18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b18c4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1b18c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b18c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B18C8u;
    {
        const bool branch_taken_0x1b18c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18C8u;
        // 0x1b18cc: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18c8) {
            ctx->pc = 0x1B18B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b18b0;
        }
    }
    ctx->pc = 0x1B18D0u;
    // 0x1b18d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B18D0u;
    {
        const bool branch_taken_0x1b18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b18d0) {
            ctx->pc = 0x1B18DCu;
            goto label_1b18dc;
        }
    }
    ctx->pc = 0x1B18D8u;
label_1b18d8:
    // 0x1b18d8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b18d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b18dc:
    // 0x1b18dc: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1B18DCu;
    SET_GPR_U32(ctx, 31, 0x1B18E4u);
    ctx->pc = 0x1B18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18DCu;
    // 0x1b18e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1B18DCu, 0x1B18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18E4u;
label_1b18e4:
    // 0x1b18e4: 0x260977c0  addiu       $t1, $s0, 0x77C0
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 30656));
    // 0x1b18e8: 0x26846200  addiu       $a0, $s4, 0x6200
    ctx->pc = 0x1b18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25088));
    // 0x1b18ec: 0x26676280  addiu       $a3, $s3, 0x6280
    ctx->pc = 0x1b18ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
    // 0x1b18f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b18f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b18f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18fc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1900: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1904: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1904u;
    SET_GPR_U32(ctx, 31, 0x1B190Cu);
    ctx->pc = 0x1B1908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1904u;
    // 0x1b1908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1904u, 0x1B190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B190Cu;
label_1b190c:
    // 0x1b190c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1910: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1910u;
    {
        const bool branch_taken_0x1b1910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1910u;
        // 0x1b1914: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1910) {
            ctx->pc = 0x1B1924u;
            goto label_1b1924;
        }
    }
    ctx->pc = 0x1B1918u;
    // 0x1b1918: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b191c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B1924u;
label_1b1924:
    // 0x1b1924: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1924u;
    SET_GPR_U32(ctx, 31, 0x1B192Cu);
    ctx->pc = 0x1B1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1924u;
    // 0x1b1928: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1924u, 0x1B192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B192Cu;
label_1b192c:
    // 0x1b192c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1930:
    // 0x1b1930: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b1930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1934: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1938: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b193c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b193cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1940: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1944: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1948: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b194cu;
}
