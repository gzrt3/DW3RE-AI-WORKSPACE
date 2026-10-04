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

// Function: FUN_0012d310
// Address: 0x12d310 - 0x12d358
void FUN_0012d310_0x12d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d310_0x12d310");
#endif

    switch (ctx->pc) {
        case 0x12d340u: goto label_12d340;
        case 0x12d350u: goto label_12d350;
        default: break;
    }

    ctx->pc = 0x12d310u;

    // 0x12d310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d314: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12d314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12d318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d31c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d324: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x12d324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12d328: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D328u;
    {
        const bool branch_taken_0x12d328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D328u;
        // 0x12d32c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d328) {
            ctx->pc = 0x12D338u;
            goto label_12d338;
        }
    }
    ctx->pc = 0x12D330u;
    // 0x12d330: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D330u;
    {
        const bool branch_taken_0x12d330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d330) {
            ctx->pc = 0x12D348u;
            goto label_12d348;
        }
    }
    ctx->pc = 0x12D338u;
label_12d338:
    // 0x12d338: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12D338u;
    SET_GPR_U32(ctx, 31, 0x12D340u);
    ctx->pc = 0x12D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D338u;
    // 0x12d33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12D338u, 0x12D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D340u;
label_12d340:
    // 0x12d340: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12D340u;
    {
        const bool branch_taken_0x12d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D340u;
        // 0x12d344: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d340) {
            ctx->pc = 0x12D3C0u;
            return;
        }
    }
    ctx->pc = 0x12D348u;
label_12d348:
    // 0x12d348: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x12D348u;
    SET_GPR_U32(ctx, 31, 0x12D350u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x12D348u, 0x12D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D350u;
label_12d350:
    // 0x12d350: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x12D350u;
    SET_GPR_U32(ctx, 31, 0x12D358u);
    ctx->pc = 0x12D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D350u;
    // 0x12d354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x12D350u, 0x12D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D358u;
}
