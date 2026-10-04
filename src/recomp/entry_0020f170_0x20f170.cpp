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

// Function: entry_0020f170
// Address: 0x20f170 - 0x20f200
void entry_0020f170_0x20f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f170_0x20f170");
#endif

    switch (ctx->pc) {
        case 0x20f188u: goto label_20f188;
        case 0x20f194u: goto label_20f194;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c8u: goto label_20f1c8;
        default: break;
    }

    ctx->pc = 0x20f170u;

    // 0x20f170: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x20f174: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
    // 0x20f178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f17c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f180: 0xc041738  jal         func_105CE0
    ctx->pc = 0x20F180u;
    SET_GPR_U32(ctx, 31, 0x20F188u);
    ctx->pc = 0x20F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F180u;
    // 0x20f184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F180u, 0x20F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F188u;
label_20f188:
    // 0x20f188: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20f18c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F18Cu;
    SET_GPR_U32(ctx, 31, 0x20F194u);
    ctx->pc = 0x20F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F18Cu;
    // 0x20f190: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F18Cu, 0x20F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F194u;
label_20f194:
    // 0x20f194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f198: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x20F198u;
    SET_GPR_U32(ctx, 31, 0x20F1A0u);
    ctx->pc = 0x20F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F198u;
    // 0x20f19c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F198u, 0x20F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1A0u;
label_20f1a0:
    // 0x20f1a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20f1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20f1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1a8: 0xc083c80  jal         func_20F200
    ctx->pc = 0x20F1A8u;
    SET_GPR_U32(ctx, 31, 0x20F1B0u);
    ctx->pc = 0x20F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1A8u;
    // 0x20f1ac: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F200u, 0x20F1A8u, 0x20F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1B0u;
label_20f1b0:
    // 0x20f1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1b4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F1B4u;
    SET_GPR_U32(ctx, 31, 0x20F1BCu);
    ctx->pc = 0x20F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1B4u;
    // 0x20f1b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F1B4u, 0x20F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1BCu;
label_20f1bc:
    // 0x20f1bc: 0x8f8591a0  lw          $a1, -0x6E60($gp)
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
    // 0x20f1c0: 0x0  nop
    ctx->pc = 0x20f1c0u;
    // NOP
    // 0x20f1c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_20f1c8:
    // 0x20f1c8: 0xfcb00040  sd          $s0, 0x40($a1)
    ctx->pc = 0x20f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 16));
    // 0x20f1cc: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x20f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x20f1d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F1D0u;
    {
        const bool branch_taken_0x20f1d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20f1d0) {
            ctx->pc = 0x20F1E0u;
            goto label_20f1e0;
        }
    }
    ctx->pc = 0x20F1D8u;
    // 0x20f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20F1D8u;
    {
        const bool branch_taken_0x20f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1d8) {
            ctx->pc = 0x20F1E8u;
            goto label_20f1e8;
        }
    }
    ctx->pc = 0x20F1E0u;
label_20f1e0:
    // 0x20f1e0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x20F1E0u;
    {
        const bool branch_taken_0x20f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1e0) {
            ctx->pc = 0x20F1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f1c8;
        }
    }
    ctx->pc = 0x20F1E8u;
label_20f1e8:
    // 0x20f1e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20F1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F1FCu;
    // 0x20f1fc: 0x0  nop
    ctx->pc = 0x20f1fcu;
    // NOP
    ctx->pc = 0x20f200u;
}
