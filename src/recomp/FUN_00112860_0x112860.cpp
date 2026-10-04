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

// Function: FUN_00112860
// Address: 0x112860 - 0x11293c
void FUN_00112860_0x112860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112860_0x112860");
#endif

    switch (ctx->pc) {
        case 0x11287cu: goto label_11287c;
        case 0x112884u: goto label_112884;
        case 0x1128b4u: goto label_1128b4;
        case 0x1128ccu: goto label_1128cc;
        case 0x1128d8u: goto label_1128d8;
        case 0x1128ecu: goto label_1128ec;
        case 0x112904u: goto label_112904;
        case 0x11291cu: goto label_11291c;
        case 0x112938u: goto label_112938;
        default: break;
    }

    ctx->pc = 0x112860u;

    // 0x112860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x112864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x112864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x112868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11286c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112870: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112874: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x112874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x112878: 0x26103c00  addiu       $s0, $s0, 0x3C00
    ctx->pc = 0x112878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15360));
label_11287c:
    // 0x11287c: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x11287Cu;
    SET_GPR_U32(ctx, 31, 0x112884u);
    ctx->pc = 0x112880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11287Cu;
    // 0x112880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x11287Cu, 0x112884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112884u;
label_112884:
    // 0x112884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x112888: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x11288c: 0x2a22001a  slti        $v0, $s1, 0x1A
    ctx->pc = 0x11288cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x112890: 0x0  nop
    ctx->pc = 0x112890u;
    // NOP
    // 0x112894: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112894u;
    {
        const bool branch_taken_0x112894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112894) {
            ctx->pc = 0x11287Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11287c;
        }
    }
    ctx->pc = 0x11289Cu;
    // 0x11289c: 0x8f8484e4  lw          $a0, -0x7B1C($gp)
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x1128a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1128a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128A4u;
    {
        const bool branch_taken_0x1128a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128a4) {
            ctx->pc = 0x1128B4u;
            goto label_1128b4;
        }
    }
    ctx->pc = 0x1128ACu;
    // 0x1128ac: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128ACu;
    SET_GPR_U32(ctx, 31, 0x1128B4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128ACu, 0x1128B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128B4u;
label_1128b4:
    // 0x1128b4: 0x8f8484e8  lw          $a0, -0x7B18($gp)
    ctx->pc = 0x1128b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935784)));
    // 0x1128b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1128b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1128bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128BCu;
    {
        const bool branch_taken_0x1128bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128bc) {
            ctx->pc = 0x1128CCu;
            goto label_1128cc;
        }
    }
    ctx->pc = 0x1128C4u;
    // 0x1128c4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128C4u;
    SET_GPR_U32(ctx, 31, 0x1128CCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128C4u, 0x1128CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128CCu;
label_1128cc:
    // 0x1128cc: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1128d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1128d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128d4: 0x26103ac0  addiu       $s0, $s0, 0x3AC0
    ctx->pc = 0x1128d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15040));
label_1128d8:
    // 0x1128d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1128dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128DCu;
    {
        const bool branch_taken_0x1128dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128dc) {
            ctx->pc = 0x1128ECu;
            goto label_1128ec;
        }
    }
    ctx->pc = 0x1128E4u;
    // 0x1128e4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128E4u;
    SET_GPR_U32(ctx, 31, 0x1128ECu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128E4u, 0x1128ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128ECu;
label_1128ec:
    // 0x1128ec: 0x0  nop
    ctx->pc = 0x1128ecu;
    // NOP
    // 0x1128f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1128f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128F4u;
    {
        const bool branch_taken_0x1128f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128f4) {
            ctx->pc = 0x112904u;
            goto label_112904;
        }
    }
    ctx->pc = 0x1128FCu;
    // 0x1128fc: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128FCu;
    SET_GPR_U32(ctx, 31, 0x112904u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128FCu, 0x112904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112904u;
label_112904:
    // 0x112904: 0x0  nop
    ctx->pc = 0x112904u;
    // NOP
    // 0x112908: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x112908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11290c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11290Cu;
    {
        const bool branch_taken_0x11290c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11290c) {
            ctx->pc = 0x11291Cu;
            goto label_11291c;
        }
    }
    ctx->pc = 0x112914u;
    // 0x112914: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112914u;
    SET_GPR_U32(ctx, 31, 0x11291Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112914u, 0x11291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11291Cu;
label_11291c:
    // 0x11291c: 0x0  nop
    ctx->pc = 0x11291cu;
    // NOP
    // 0x112920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x112924: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x112924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x112928: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x112928u;
    {
        const bool branch_taken_0x112928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112928u;
        // 0x11292c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112928) {
            ctx->pc = 0x1128D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1128d8;
        }
    }
    ctx->pc = 0x112930u;
    // 0x112930: 0xc06559c  jal         func_195670
    ctx->pc = 0x112930u;
    SET_GPR_U32(ctx, 31, 0x112938u);
    ctx->pc = 0x195670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195670u, 0x112930u, 0x112938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112938u;
label_112938:
    // 0x112938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11293cu;
}
