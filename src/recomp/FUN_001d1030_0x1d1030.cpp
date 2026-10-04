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

// Function: FUN_001d1030
// Address: 0x1d1030 - 0x1d1094
void FUN_001d1030_0x1d1030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1030_0x1d1030");
#endif

    switch (ctx->pc) {
        case 0x1d104cu: goto label_1d104c;
        case 0x1d1064u: goto label_1d1064;
        case 0x1d1090u: goto label_1d1090;
        default: break;
    }

    ctx->pc = 0x1d1030u;

    // 0x1d1030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d103c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D103Cu;
    {
        const bool branch_taken_0x1d103c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D103Cu;
        // 0x1d1040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d103c) {
            ctx->pc = 0x1D107Cu;
            goto label_1d107c;
        }
    }
    ctx->pc = 0x1D1044u;
    // 0x1d1044: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d104c:
    // 0x1d104c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1d1050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1054: 0x2442c980  addiu       $v0, $v0, -0x3680
    ctx->pc = 0x1d1054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x1d1058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d105c: 0xc07442c  jal         func_1D10B0
    ctx->pc = 0x1D105Cu;
    SET_GPR_U32(ctx, 31, 0x1D1064u);
    ctx->pc = 0x1D1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D105Cu;
    // 0x1d1060: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D10B0u, 0x1D105Cu, 0x1D1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1064u;
label_1d1064:
    // 0x1d1064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1068: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d1068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d106c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D106Cu;
    {
        const bool branch_taken_0x1d106c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D106Cu;
        // 0x1d1070: 0x26312230  addiu       $s1, $s1, 0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d106c) {
            ctx->pc = 0x1D104Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d104c;
        }
    }
    ctx->pc = 0x1D1074u;
    // 0x1d1074: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1074u;
    {
        const bool branch_taken_0x1d1074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1074u;
        // 0x1d1078: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1074) {
            ctx->pc = 0x1D1094u;
            return;
        }
    }
    ctx->pc = 0x1D107Cu;
label_1d107c:
    // 0x1d107c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1d1080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1084: 0x2484c980  addiu       $a0, $a0, -0x3680
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953344));
    // 0x1d1088: 0xc07442c  jal         func_1D10B0
    ctx->pc = 0x1D1088u;
    SET_GPR_U32(ctx, 31, 0x1D1090u);
    ctx->pc = 0x1D108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1088u;
    // 0x1d108c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D10B0u, 0x1D1088u, 0x1D1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1090u;
label_1d1090:
    // 0x1d1090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d1094u;
}
