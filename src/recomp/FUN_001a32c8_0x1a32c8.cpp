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

// Function: FUN_001a32c8
// Address: 0x1a32c8 - 0x1a333c
void FUN_001a32c8_0x1a32c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a32c8_0x1a32c8");
#endif

    switch (ctx->pc) {
        case 0x1a32f0u: goto label_1a32f0;
        case 0x1a3318u: goto label_1a3318;
        case 0x1a3330u: goto label_1a3330;
        default: break;
    }

    ctx->pc = 0x1a32c8u;

    // 0x1a32c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a32c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a32cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a32ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a32d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a32d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a32d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32d8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a32dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A32DCu;
    {
        const bool branch_taken_0x1a32dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32DCu;
        // 0x1a32e0: 0x8e060118  lw          $a2, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32dc) {
            ctx->pc = 0x1A32F8u;
            goto label_1a32f8;
        }
    }
    ctx->pc = 0x1A32E4u;
    // 0x1a32e4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a32e8: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A32E8u;
    SET_GPR_U32(ctx, 31, 0x1A32F0u);
    ctx->pc = 0x1A32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32E8u;
    // 0x1a32ec: 0x24a5a378  addiu       $a1, $a1, -0x5C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A32E8u, 0x1A32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32F0u;
label_1a32f0:
    // 0x1a32f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A32F0u;
    {
        const bool branch_taken_0x1a32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32F0u;
        // 0x1a32f4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32f0) {
            ctx->pc = 0x1A3334u;
            goto label_1a3334;
        }
    }
    ctx->pc = 0x1A32F8u;
label_1a32f8:
    // 0x1a32f8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a32fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3300: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3300u;
    {
        const bool branch_taken_0x1a3300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3300u;
        // 0x1a3304: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3300) {
            ctx->pc = 0x1A3320u;
            goto label_1a3320;
        }
    }
    ctx->pc = 0x1A3308u;
    // 0x1a3308: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x1a3308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1a330c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1a330cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a3310: 0xc0682c0  jal         func_1A0B00
    ctx->pc = 0x1A3310u;
    SET_GPR_U32(ctx, 31, 0x1A3318u);
    ctx->pc = 0x1A3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3310u;
    // 0x1a3314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B00u, 0x1A3310u, 0x1A3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3318u;
label_1a3318:
    // 0x1a3318: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3318u;
    {
        const bool branch_taken_0x1a3318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3318u;
        // 0x1a331c: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3318) {
            ctx->pc = 0x1A3334u;
            goto label_1a3334;
        }
    }
    ctx->pc = 0x1A3320u;
label_1a3320:
    // 0x1a3320: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x1a3320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1a3324: 0x8e0601dc  lw          $a2, 0x1DC($s0)
    ctx->pc = 0x1a3324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x1a3328: 0xc068304  jal         func_1A0C10
    ctx->pc = 0x1A3328u;
    SET_GPR_U32(ctx, 31, 0x1A3330u);
    ctx->pc = 0x1A332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3328u;
    // 0x1a332c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C10u, 0x1A3328u, 0x1A3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3330u;
label_1a3330:
    // 0x1a3330: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1a3330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_1a3334:
    // 0x1a3334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a333cu;
}
