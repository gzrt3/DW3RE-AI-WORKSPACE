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

// Function: FUN_00148720
// Address: 0x148720 - 0x1487ac
void FUN_00148720_0x148720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148720_0x148720");
#endif

    switch (ctx->pc) {
        case 0x148744u: goto label_148744;
        case 0x14874cu: goto label_14874c;
        case 0x148770u: goto label_148770;
        case 0x148788u: goto label_148788;
        case 0x148790u: goto label_148790;
        case 0x148798u: goto label_148798;
        case 0x1487a0u: goto label_1487a0;
        case 0x1487a8u: goto label_1487a8;
        default: break;
    }

    ctx->pc = 0x148720u;

    // 0x148720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x148724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14872c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148730: 0x8f848594  lw          $a0, -0x7A6C($gp)
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x148734: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148734u;
    {
        const bool branch_taken_0x148734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x148734) {
            ctx->pc = 0x148744u;
            goto label_148744;
        }
    }
    ctx->pc = 0x14873Cu;
    // 0x14873c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x14873Cu;
    SET_GPR_U32(ctx, 31, 0x148744u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x14873Cu, 0x148744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148744u;
label_148744:
    // 0x148744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x148744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14874c:
    // 0x14874c: 0x0  nop
    ctx->pc = 0x14874cu;
    // NOP
    // 0x148750: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x148754: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x148758: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14875c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148760: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148760u;
    {
        const bool branch_taken_0x148760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x148760) {
            ctx->pc = 0x148770u;
            goto label_148770;
        }
    }
    ctx->pc = 0x148768u;
    // 0x148768: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x148768u;
    SET_GPR_U32(ctx, 31, 0x148770u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x148768u, 0x148770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148770u;
label_148770:
    // 0x148770: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148774: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x148774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x148778: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x148778u;
    {
        const bool branch_taken_0x148778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148778u;
        // 0x14877c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148778) {
            ctx->pc = 0x14874Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14874c;
        }
    }
    ctx->pc = 0x148780u;
    // 0x148780: 0xc04faf8  jal         func_13EBE0
    ctx->pc = 0x148780u;
    SET_GPR_U32(ctx, 31, 0x148788u);
    ctx->pc = 0x13EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EBE0u, 0x148780u, 0x148788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148788u;
label_148788:
    // 0x148788: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x148788u;
    SET_GPR_U32(ctx, 31, 0x148790u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x148788u, 0x148790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148790u;
label_148790:
    // 0x148790: 0xc04f524  jal         func_13D490
    ctx->pc = 0x148790u;
    SET_GPR_U32(ctx, 31, 0x148798u);
    ctx->pc = 0x13D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D490u, 0x148790u, 0x148798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148798u;
label_148798:
    // 0x148798: 0xc041d60  jal         func_107580
    ctx->pc = 0x148798u;
    SET_GPR_U32(ctx, 31, 0x1487A0u);
    ctx->pc = 0x107580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107580u, 0x148798u, 0x1487A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487A0u;
label_1487a0:
    // 0x1487a0: 0xc04f3e0  jal         func_13CF80
    ctx->pc = 0x1487A0u;
    SET_GPR_U32(ctx, 31, 0x1487A8u);
    ctx->pc = 0x13CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CF80u, 0x1487A0u, 0x1487A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487A8u;
label_1487a8:
    // 0x1487a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1487a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1487acu;
}
