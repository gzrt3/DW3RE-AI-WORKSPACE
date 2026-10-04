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

// Function: entry_0019b4f0
// Address: 0x19b4f0 - 0x19b5e8
void entry_0019b4f0_0x19b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b4f0_0x19b4f0");
#endif

    switch (ctx->pc) {
        case 0x19b548u: goto label_19b548;
        case 0x19b590u: goto label_19b590;
        default: break;
    }

    ctx->pc = 0x19b4f0u;

label_19b4f0:
    // 0x19b4f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b4f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19b4f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19b4fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19b500: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19b504: 0x14e6fffa  bne         $a3, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4f0;
        }
    }
    ctx->pc = 0x19B50Cu;
    // 0x19b50c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19b510: 0x3e00008  jr          $ra
    ctx->pc = 0x19B510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B518u;
    // 0x19b518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b51c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19b520: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19b524: 0x3e00008  jr          $ra
    ctx->pc = 0x19B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B524u;
        // 0x19b528: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B52Cu;
    // 0x19b52c: 0x0  nop
    ctx->pc = 0x19b52cu;
    // NOP
    // 0x19b530: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x19B530u;
    {
        const bool branch_taken_0x19b530 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b530) {
            ctx->pc = 0x19B568u;
            goto label_19b568;
        }
    }
    ctx->pc = 0x19B538u;
    // 0x19b538: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x19b538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x19b53c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b540: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19b540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x19b544: 0x0  nop
    ctx->pc = 0x19b544u;
    // NOP
label_19b548:
    // 0x19b548: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b54c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19b54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19b550: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19b554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19b558: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19b55c: 0x14e6fffa  bne         $a3, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B55Cu;
    {
        const bool branch_taken_0x19b55c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x19b55c) {
            ctx->pc = 0x19B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b548;
        }
    }
    ctx->pc = 0x19B564u;
    // 0x19b564: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19b568:
    // 0x19b568: 0x3e00008  jr          $ra
    ctx->pc = 0x19B568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B570u;
    // 0x19b570: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x19b570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b578: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x19B578u;
    {
        const bool branch_taken_0x19b578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x24c8ffff  addiu       $t0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b578) {
            ctx->pc = 0x19B5DCu;
            goto label_19b5dc;
        }
    }
    ctx->pc = 0x19B580u;
    // 0x19b580: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x19b584: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x19b584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x19b588: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x19b588u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x19b58c: 0x0  nop
    ctx->pc = 0x19b58cu;
    // NOP
label_19b590:
    // 0x19b590: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19b594: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b598: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x19b598u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b59c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x19b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19b5a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19b5a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19b5a4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x19b5a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19b5ac: 0x4283f  dsra32      $a1, $a0, 0
    ctx->pc = 0x19b5acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19b5b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19b5b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19b5b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19b5b8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19b5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19b5c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19b5c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19b5c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19b5c8: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x19b5cc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x19b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x19b5d0: 0x1509ffef  bne         $t0, $t1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19B5D0u;
    {
        const bool branch_taken_0x19b5d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5D0u;
        // 0x19b5d4: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5d0) {
            ctx->pc = 0x19B590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b590;
        }
    }
    ctx->pc = 0x19B5D8u;
    // 0x19b5d8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x19b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
label_19b5dc:
    // 0x19b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B5E4u;
    // 0x19b5e4: 0x0  nop
    ctx->pc = 0x19b5e4u;
    // NOP
    ctx->pc = 0x19b5e8u;
}
