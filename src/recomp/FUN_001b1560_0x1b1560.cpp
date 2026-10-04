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

// Function: FUN_001b1560
// Address: 0x1b1560 - 0x1b1630
void FUN_001b1560_0x1b1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1560_0x1b1560");
#endif

    switch (ctx->pc) {
        case 0x1b15acu: goto label_1b15ac;
        case 0x1b15f4u: goto label_1b15f4;
        case 0x1b1614u: goto label_1b1614;
        default: break;
    }

    ctx->pc = 0x1b1560u;

    // 0x1b1560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b1564: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1568: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b156c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b1570: 0x24536200  addiu       $s3, $v0, 0x6200
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b1574: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b1578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b157c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1580: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b1580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1584: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b1588: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b158c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b158cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1590u;
    {
        const bool branch_taken_0x1b1590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1590u;
        // 0x1b1594: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1590) {
            ctx->pc = 0x1B15A0u;
            goto label_1b15a0;
        }
    }
    ctx->pc = 0x1B1598u;
    // 0x1b1598: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B1598u;
    {
        const bool branch_taken_0x1b1598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1598) {
            ctx->pc = 0x1B1618u;
            goto label_1b1618;
        }
    }
    ctx->pc = 0x1B15A0u;
label_1b15a0:
    // 0x1b15a0: 0x3c140029  lui         $s4, 0x29
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)41 << 16));
    // 0x1b15a4: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B15A4u;
    SET_GPR_U32(ctx, 31, 0x1B15ACu);
    ctx->pc = 0x1B15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15A4u;
    // 0x1b15a8: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B15A4u, 0x1B15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15ACu;
label_1b15ac:
    // 0x1b15ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B15ACu;
    {
        const bool branch_taken_0x1b15ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ACu;
        // 0x1b15b0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15ac) {
            ctx->pc = 0x1B15BCu;
            goto label_1b15bc;
        }
    }
    ctx->pc = 0x1B15B4u;
    // 0x1b15b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B15B4u;
    {
        const bool branch_taken_0x1b15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B4u;
        // 0x1b15b8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b4) {
            ctx->pc = 0x1B1618u;
            goto label_1b1618;
        }
    }
    ctx->pc = 0x1B15BCu;
label_1b15bc:
    // 0x1b15bc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b15c0: 0x24476280  addiu       $a3, $v0, 0x6280
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x1b15c4: 0xac526280  sw          $s2, 0x6280($v0)
    ctx->pc = 0x1b15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25216), GPR_U32(ctx, 18));
    // 0x1b15c8: 0xacf00010  sw          $s0, 0x10($a3)
    ctx->pc = 0x1b15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 16));
    // 0x1b15cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15d0: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x1b15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
    // 0x1b15d4: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b15d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b15dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b15e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b15e4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b15e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b15e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b15ec: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B15ECu;
    SET_GPR_U32(ctx, 31, 0x1B15F4u);
    ctx->pc = 0x1B15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15ECu;
    // 0x1b15f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B15ECu, 0x1B15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15F4u;
label_1b15f4:
    // 0x1b15f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b15f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15f8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B15F8u;
    {
        const bool branch_taken_0x1b15f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15F8u;
        // 0x1b15fc: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15f8) {
            ctx->pc = 0x1B160Cu;
            goto label_1b160c;
        }
    }
    ctx->pc = 0x1B1600u;
    // 0x1b1600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1604u;
    {
        const bool branch_taken_0x1b1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1604u;
        // 0x1b1608: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1604) {
            ctx->pc = 0x1B1614u;
            goto label_1b1614;
        }
    }
    ctx->pc = 0x1B160Cu;
label_1b160c:
    // 0x1b160c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B160Cu;
    SET_GPR_U32(ctx, 31, 0x1B1614u);
    ctx->pc = 0x1B1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B160Cu;
    // 0x1b1610: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B160Cu, 0x1B1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1614u;
label_1b1614:
    // 0x1b1614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1618:
    // 0x1b1618: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b1618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b161c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b161cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1620: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1624: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1628: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b162c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b162cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b1630u;
}
