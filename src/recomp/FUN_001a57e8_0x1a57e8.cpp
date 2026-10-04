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

// Function: FUN_001a57e8
// Address: 0x1a57e8 - 0x1a5878
void FUN_001a57e8_0x1a57e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a57e8_0x1a57e8");
#endif

    switch (ctx->pc) {
        case 0x1a57fcu: goto label_1a57fc;
        case 0x1a5810u: goto label_1a5810;
        case 0x1a586cu: goto label_1a586c;
        default: break;
    }

    ctx->pc = 0x1a57e8u;

    // 0x1a57e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a57e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a57ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a57f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a57f4: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1a57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x1a57f8: 0xc  syscall     0
    ctx->pc = 0x1a57f8u;
    ctx->pc = 0x1A57FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a57fc:
    // 0x1a57fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a57fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5800: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5800u;
    {
        const bool branch_taken_0x1a5800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5800u;
        // 0x1a5804: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5800) {
            ctx->pc = 0x1A5818u;
            goto label_1a5818;
        }
    }
    ctx->pc = 0x1A5808u;
    // 0x1a5808: 0xc0691e8  jal         func_1A47A0
    ctx->pc = 0x1A5808u;
    SET_GPR_U32(ctx, 31, 0x1A5810u);
    ctx->pc = 0x1A47A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47A0u, 0x1A5808u, 0x1A5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5810u;
label_1a5810:
    // 0x1a5810: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5810u;
    {
        const bool branch_taken_0x1a5810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5810u;
        // 0x1a5814: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5810) {
            ctx->pc = 0x1A5874u;
            goto label_1a5874;
        }
    }
    ctx->pc = 0x1A5818u;
label_1a5818:
    // 0x1a5818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5818u;
    {
        const bool branch_taken_0x1a5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5818) {
            ctx->pc = 0x1A582Cu;
            goto label_1a582c;
        }
    }
    ctx->pc = 0x1A5820u;
    // 0x1a5820: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
    // 0x1a5824: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5824u;
    {
        const bool branch_taken_0x1a5824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5824u;
        // 0x1a5828: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5824) {
            ctx->pc = 0x1A5834u;
            goto label_1a5834;
        }
    }
    ctx->pc = 0x1A582Cu;
label_1a582c:
    // 0x1a582c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A582Cu;
    {
        const bool branch_taken_0x1a582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A582Cu;
        // 0x1a5830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a582c) {
            ctx->pc = 0x1A5870u;
            goto label_1a5870;
        }
    }
    ctx->pc = 0x1A5834u;
label_1a5834:
    // 0x1a5834: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a5834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a5838: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
    // 0x1a583c: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370EC0u));
    // 0x1a5840: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a5844: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5848: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a5848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1a584c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a5850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a5854: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a5858: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a5858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a585c: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1a585cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a5860: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a5860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5864: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1A5864u;
    SET_GPR_U32(ctx, 31, 0x1A586Cu);
    ctx->pc = 0x1A5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5864u;
    // 0x1a5868: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A5864u, 0x1A586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A586Cu;
label_1a586c:
    // 0x1a586c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a586cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5870:
    // 0x1a5870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5874:
    // 0x1a5874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5878u;
}
