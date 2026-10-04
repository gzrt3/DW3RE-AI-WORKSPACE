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

// Function: FUN_001ec6b0
// Address: 0x1ec6b0 - 0x1ec6e0
void FUN_001ec6b0_0x1ec6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec6b0_0x1ec6b0");
#endif

    switch (ctx->pc) {
        case 0x1ec6dcu: goto label_1ec6dc;
        default: break;
    }

    ctx->pc = 0x1ec6b0u;

    // 0x1ec6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec6b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC6B4u;
    {
        const bool branch_taken_0x1ec6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6B4u;
        // 0x1ec6b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6b4) {
            ctx->pc = 0x1EC6C8u;
            goto label_1ec6c8;
        }
    }
    ctx->pc = 0x1EC6BCu;
    // 0x1ec6bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC6C0u;
    {
        const bool branch_taken_0x1ec6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6C0u;
        // 0x1ec6c4: 0xaf838f20  sw          $v1, -0x70E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6c0) {
            ctx->pc = 0x1EC6CCu;
            goto label_1ec6cc;
        }
    }
    ctx->pc = 0x1EC6C8u;
label_1ec6c8:
    // 0x1ec6c8: 0xaf808f20  sw          $zero, -0x70E0($gp)
    ctx->pc = 0x1ec6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938400), GPR_U32(ctx, 0));
label_1ec6cc:
    // 0x1ec6cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC6CCu;
    {
        const bool branch_taken_0x1ec6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6CCu;
        // 0x1ec6d0: 0xaf808f24  sw          $zero, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6cc) {
            ctx->pc = 0x1EC6DCu;
            goto label_1ec6dc;
        }
    }
    ctx->pc = 0x1EC6D4u;
    // 0x1ec6d4: 0xc07b238  jal         func_1EC8E0
    ctx->pc = 0x1EC6D4u;
    SET_GPR_U32(ctx, 31, 0x1EC6DCu);
    ctx->pc = 0x1EC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8E0u, 0x1EC6D4u, 0x1EC6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6DCu;
label_1ec6dc:
    // 0x1ec6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ec6e0u;
}
