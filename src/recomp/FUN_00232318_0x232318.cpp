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

// Function: FUN_00232318
// Address: 0x232318 - 0x23237c
void FUN_00232318_0x232318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232318_0x232318");
#endif

    switch (ctx->pc) {
        case 0x232350u: goto label_232350;
        case 0x23235cu: goto label_23235c;
        case 0x232360u: goto label_232360;
        case 0x232368u: goto label_232368;
        default: break;
    }

    ctx->pc = 0x232318u;

    // 0x232318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23231c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23231cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232320: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x232320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x232324: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232328: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x232328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23232c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23232cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232330: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x232330u;
    {
        const bool branch_taken_0x232330 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x232334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232330u;
        // 0x232334: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232330) {
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x232338u;
    // 0x232338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23233c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x232340: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x232340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x232344: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x232344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x232348: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x232348u;
    SET_GPR_U32(ctx, 31, 0x232350u);
    ctx->pc = 0x23234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232348u;
    // 0x23234c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x232348u, 0x232350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232350u;
label_232350:
    // 0x232350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232354: 0xc0692f8  jal         func_1A4BE0
    ctx->pc = 0x232354u;
    SET_GPR_U32(ctx, 31, 0x23235Cu);
    ctx->pc = 0x232358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232354u;
    // 0x232358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BE0u, 0x232354u, 0x23235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23235Cu;
label_23235c:
    // 0x23235c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23235cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232360:
    // 0x232360: 0xc0692f0  jal         func_1A4BC0
    ctx->pc = 0x232360u;
    SET_GPR_U32(ctx, 31, 0x232368u);
    ctx->pc = 0x232364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232360u;
    // 0x232364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BC0u, 0x232360u, 0x232368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232368u;
label_232368:
    // 0x232368: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x232368u;
    {
        const bool branch_taken_0x232368 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232368u;
        // 0x23236c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232368) {
            ctx->pc = 0x232360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232360;
        }
    }
    ctx->pc = 0x232370u;
label_232370:
    // 0x232370: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x232370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232374: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x232374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x23237cu;
}
