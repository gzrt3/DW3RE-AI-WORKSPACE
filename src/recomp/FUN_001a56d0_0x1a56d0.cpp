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

// Function: FUN_001a56d0
// Address: 0x1a56d0 - 0x1a575c
void FUN_001a56d0_0x1a56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a56d0_0x1a56d0");
#endif

    switch (ctx->pc) {
        case 0x1a56e4u: goto label_1a56e4;
        case 0x1a56f8u: goto label_1a56f8;
        case 0x1a5750u: goto label_1a5750;
        default: break;
    }

    ctx->pc = 0x1a56d0u;

    // 0x1a56d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a56d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a56d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a56d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a56dc: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1a56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x1a56e0: 0xc  syscall     0
    ctx->pc = 0x1a56e0u;
    ctx->pc = 0x1A56E4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a56e4:
    // 0x1a56e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a56e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56e8: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A56E8u;
    {
        const bool branch_taken_0x1a56e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E8u;
        // 0x1a56ec: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56e8) {
            ctx->pc = 0x1A5700u;
            goto label_1a5700;
        }
    }
    ctx->pc = 0x1A56F0u;
    // 0x1a56f0: 0xc0691d8  jal         func_1A4760
    ctx->pc = 0x1A56F0u;
    SET_GPR_U32(ctx, 31, 0x1A56F8u);
    ctx->pc = 0x1A4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4760u, 0x1A56F0u, 0x1A56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56F8u;
label_1a56f8:
    // 0x1a56f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A56F8u;
    {
        const bool branch_taken_0x1a56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F8u;
        // 0x1a56fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56f8) {
            ctx->pc = 0x1A5758u;
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A5700u;
label_1a5700:
    // 0x1a5700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A5714u;
            goto label_1a5714;
        }
    }
    ctx->pc = 0x1A5708u;
    // 0x1a5708: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
    // 0x1a570c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A571Cu;
            goto label_1a571c;
        }
    }
    ctx->pc = 0x1A5714u;
label_1a5714:
    // 0x1a5714: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A5714u;
    {
        const bool branch_taken_0x1a5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5714u;
        // 0x1a5718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5714) {
            ctx->pc = 0x1A5754u;
            goto label_1a5754;
        }
    }
    ctx->pc = 0x1A571Cu;
label_1a571c:
    // 0x1a571c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a5720: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
    // 0x1a5724: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370EC0u));
    // 0x1a5728: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a572c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1a5730: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a5734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a5738: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a573c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a573cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a5740: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a5740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5744: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1a5744u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5748: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1A5748u;
    SET_GPR_U32(ctx, 31, 0x1A5750u);
    ctx->pc = 0x1A574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5748u;
    // 0x1a574c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A5748u, 0x1A5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5750u;
label_1a5750:
    // 0x1a5750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5754:
    // 0x1a5754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5758:
    // 0x1a5758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a575cu;
}
