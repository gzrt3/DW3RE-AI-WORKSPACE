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

// Function: FUN_001b14a8
// Address: 0x1b14a8 - 0x1b1558
void FUN_001b14a8_0x1b14a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b14a8_0x1b14a8");
#endif

    switch (ctx->pc) {
        case 0x1b14e4u: goto label_1b14e4;
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1544u: goto label_1b1544;
        default: break;
    }

    ctx->pc = 0x1b14a8u;

    // 0x1b14a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b14ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b14acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b14b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b14b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b14b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b14b8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b14b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
    // 0x1b14bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b14c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b14c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b14c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B14C8u;
    {
        const bool branch_taken_0x1b14c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C8u;
        // 0x1b14cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c8) {
            ctx->pc = 0x1B14D8u;
            goto label_1b14d8;
        }
    }
    ctx->pc = 0x1B14D0u;
    // 0x1b14d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B14D0u;
    {
        const bool branch_taken_0x1b14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D0u;
        // 0x1b14d4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14d0) {
            ctx->pc = 0x1B1548u;
            goto label_1b1548;
        }
    }
    ctx->pc = 0x1B14D8u;
label_1b14d8:
    // 0x1b14d8: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b14d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
    // 0x1b14dc: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B14DCu;
    SET_GPR_U32(ctx, 31, 0x1B14E4u);
    ctx->pc = 0x1B14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14DCu;
    // 0x1b14e0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B14DCu, 0x1B14E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14E4u;
label_1b14e4:
    // 0x1b14e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B14E4u;
    {
        const bool branch_taken_0x1b14e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14e4) {
            ctx->pc = 0x1B14F4u;
            goto label_1b14f4;
        }
    }
    ctx->pc = 0x1B14ECu;
    // 0x1b14ec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B14ECu;
    {
        const bool branch_taken_0x1b14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14ec) {
            ctx->pc = 0x1B1548u;
            goto label_1b1548;
        }
    }
    ctx->pc = 0x1B14F4u;
label_1b14f4:
    // 0x1b14f4: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b14f8: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
    // 0x1b14fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1500: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b1504: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1508: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b150c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1514: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1518: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b151c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B151Cu;
    SET_GPR_U32(ctx, 31, 0x1B1524u);
    ctx->pc = 0x1B1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B151Cu;
    // 0x1b1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B151Cu, 0x1B1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1524u;
label_1b1524:
    // 0x1b1524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1528: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B153Cu;
            goto label_1b153c;
        }
    }
    ctx->pc = 0x1B1530u;
    // 0x1b1530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1534u;
    {
        const bool branch_taken_0x1b1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1534) {
            ctx->pc = 0x1B1544u;
            goto label_1b1544;
        }
    }
    ctx->pc = 0x1B153Cu;
label_1b153c:
    // 0x1b153c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B153Cu;
    SET_GPR_U32(ctx, 31, 0x1B1544u);
    ctx->pc = 0x1B1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B153Cu;
    // 0x1b1540: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B153Cu, 0x1B1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1544u;
label_1b1544:
    // 0x1b1544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1548:
    // 0x1b1548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b154c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b154cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1550: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1554: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b1558u;
}
