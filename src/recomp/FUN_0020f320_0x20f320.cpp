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

// Function: FUN_0020f320
// Address: 0x20f320 - 0x20f394
void FUN_0020f320_0x20f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020f320_0x20f320");
#endif

    switch (ctx->pc) {
        case 0x20f338u: goto label_20f338;
        case 0x20f378u: goto label_20f378;
        case 0x20f380u: goto label_20f380;
        case 0x20f390u: goto label_20f390;
        default: break;
    }

    ctx->pc = 0x20f320u;

    // 0x20f320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20f328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f32c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20f32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f330: 0xc084000  jal         func_210000
    ctx->pc = 0x20F330u;
    SET_GPR_U32(ctx, 31, 0x20F338u);
    ctx->pc = 0x20F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F330u;
    // 0x20f334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210000u, 0x20F330u, 0x20F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F338u;
label_20f338:
    // 0x20f338: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20f33c: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x20F33Cu;
    {
        const bool branch_taken_0x20f33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x20F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F33Cu;
        // 0x20f340: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f33c) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F344u;
    // 0x20f344: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20F344u;
    {
        const bool branch_taken_0x20f344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20f344) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F34Cu;
    // 0x20f34c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f350: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20F350u;
    {
        const bool branch_taken_0x20f350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x20F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F350u;
        // 0x20f354: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f350) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F358u;
    // 0x20f358: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F358u;
    {
        const bool branch_taken_0x20f358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20f358) {
            ctx->pc = 0x20F370u;
            goto label_20f370;
        }
    }
    ctx->pc = 0x20F360u;
    // 0x20f360: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F360u;
    {
        const bool branch_taken_0x20f360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f360) {
            ctx->pc = 0x20F370u;
            goto label_20f370;
        }
    }
    ctx->pc = 0x20F368u;
    // 0x20f368: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20F368u;
    {
        const bool branch_taken_0x20f368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F368u;
        // 0x20f36c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f368) {
            ctx->pc = 0x20F394u;
            return;
        }
    }
    ctx->pc = 0x20F370u;
label_20f370:
    // 0x20f370: 0xc0902ec  jal         func_240BB0
    ctx->pc = 0x20F370u;
    SET_GPR_U32(ctx, 31, 0x20F378u);
    ctx->pc = 0x240BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB0u, 0x20F370u, 0x20F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F378u;
label_20f378:
    // 0x20f378: 0xc055da0  jal         func_157680
    ctx->pc = 0x20F378u;
    SET_GPR_U32(ctx, 31, 0x20F380u);
    ctx->pc = 0x157680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157680u, 0x20F378u, 0x20F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F380u;
label_20f380:
    // 0x20f380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20F380u;
    {
        const bool branch_taken_0x20f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f380) {
            ctx->pc = 0x20F390u;
            goto label_20f390;
        }
    }
    ctx->pc = 0x20F388u;
label_20f388:
    // 0x20f388: 0xc083688  jal         func_20DA20
    ctx->pc = 0x20F388u;
    SET_GPR_U32(ctx, 31, 0x20F390u);
    ctx->pc = 0x20DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA20u, 0x20F388u, 0x20F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F390u;
label_20f390:
    // 0x20f390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x20f394u;
}
