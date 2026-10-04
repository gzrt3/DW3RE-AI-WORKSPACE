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

// Function: entry_001d104c
// Address: 0x1d104c - 0x1d107c
void entry_001d104c_0x1d104c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d104c_0x1d104c");
#endif

    switch (ctx->pc) {
        case 0x1d1064u: goto label_1d1064;
        default: break;
    }

    ctx->pc = 0x1d104cu;

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
}
