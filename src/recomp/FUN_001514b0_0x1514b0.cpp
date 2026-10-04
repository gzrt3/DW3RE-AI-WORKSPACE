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

// Function: FUN_001514b0
// Address: 0x1514b0 - 0x15152c
void FUN_001514b0_0x1514b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001514b0_0x1514b0");
#endif

    switch (ctx->pc) {
        case 0x1514f4u: goto label_1514f4;
        case 0x151518u: goto label_151518;
        default: break;
    }

    ctx->pc = 0x1514b0u;

    // 0x1514b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1514b4: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x1514b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1514b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1514bc: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x1514bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x1514c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1514c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1514c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1514c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1514c8: 0xaf838128  sw          $v1, -0x7ED8($gp)
    ctx->pc = 0x1514c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934824), GPR_U32(ctx, 3));
    // 0x1514cc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1514d0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1514d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1514d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1514D4u;
    {
        const bool branch_taken_0x1514d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1514D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514D4u;
        // 0x1514d8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514d4) {
            ctx->pc = 0x151528u;
            goto label_151528;
        }
    }
    ctx->pc = 0x1514DCu;
    // 0x1514dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1514dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1514e0: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1514e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x1514e4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1514E4u;
    {
        const bool branch_taken_0x1514e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1514e4) {
            ctx->pc = 0x151528u;
            goto label_151528;
        }
    }
    ctx->pc = 0x1514ECu;
    // 0x1514ec: 0x8f908128  lw          $s0, -0x7ED8($gp)
    ctx->pc = 0x1514ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x1514f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1514f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1514f4:
    // 0x1514f4: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1514f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1514f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1514F8u;
    {
        const bool branch_taken_0x1514f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514f8) {
            ctx->pc = 0x151518u;
            goto label_151518;
        }
    }
    ctx->pc = 0x151500u;
    // 0x151500: 0x8604020a  lh          $a0, 0x20A($s0)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x151504: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151508: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151508u;
    {
        const bool branch_taken_0x151508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151508u;
        // 0x15150c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151508) {
            ctx->pc = 0x151518u;
            goto label_151518;
        }
    }
    ctx->pc = 0x151510u;
    // 0x151510: 0xc08c204  jal         func_230810
    ctx->pc = 0x151510u;
    SET_GPR_U32(ctx, 31, 0x151518u);
    ctx->pc = 0x230810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230810u, 0x151510u, 0x151518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151518u;
label_151518:
    // 0x151518: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15151c: 0x2a230028  slti        $v1, $s1, 0x28
    ctx->pc = 0x15151cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x151520: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x151520u;
    {
        const bool branch_taken_0x151520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151520u;
        // 0x151524: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151520) {
            ctx->pc = 0x1514F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1514f4;
        }
    }
    ctx->pc = 0x151528u;
label_151528:
    // 0x151528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x15152cu;
}
