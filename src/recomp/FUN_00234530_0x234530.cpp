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

// Function: FUN_00234530
// Address: 0x234530 - 0x2345a4
void FUN_00234530_0x234530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234530_0x234530");
#endif

    switch (ctx->pc) {
        case 0x234558u: goto label_234558;
        case 0x234568u: goto label_234568;
        case 0x234580u: goto label_234580;
        default: break;
    }

    ctx->pc = 0x234530u;

    // 0x234530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234534: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23453c: 0x2451ac70  addiu       $s1, $v0, -0x5390
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945904));
    // 0x234540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234548: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x58AC70u));
    // 0x23454c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23454Cu;
    {
        const bool branch_taken_0x23454c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23454Cu;
        // 0x234550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23454c) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234554u;
    // 0x234554: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x234554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_234558:
    // 0x234558: 0x5444000b  bnel        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x234558u;
    {
        const bool branch_taken_0x234558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x234558) {
            ctx->pc = 0x23455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234558u;
            // 0x23455c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234588u;
            goto label_234588;
        }
    }
    ctx->pc = 0x234560u;
    // 0x234560: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x234560u;
    SET_GPR_U32(ctx, 31, 0x234568u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x234560u, 0x234568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234568u;
label_234568:
    // 0x234568: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x234568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23456c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x234570: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x234570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x234574: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x234574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x234578: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x234578u;
    SET_GPR_U32(ctx, 31, 0x234580u);
    ctx->pc = 0x23457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234578u;
    // 0x23457c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x234578u, 0x234580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234580u;
label_234580:
    // 0x234580: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234580u;
    {
        const bool branch_taken_0x234580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234580u;
        // 0x234584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234580) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234588u;
label_234588:
    // 0x234588: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23458c: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x23458Cu;
    {
        const bool branch_taken_0x23458c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23458c) {
            ctx->pc = 0x234590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23458Cu;
            // 0x234590: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234558;
        }
    }
    ctx->pc = 0x234594u;
    // 0x234594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234598:
    // 0x234598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23459c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23459cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2345a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2345a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2345a4u;
}
