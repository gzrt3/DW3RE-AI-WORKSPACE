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

// Function: FUN_00155ee0
// Address: 0x155ee0 - 0x155f0c
void FUN_00155ee0_0x155ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155ee0_0x155ee0");
#endif

    switch (ctx->pc) {
        case 0x155ef0u: goto label_155ef0;
        case 0x155f08u: goto label_155f08;
        default: break;
    }

    ctx->pc = 0x155ee0u;

    // 0x155ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155ee8: 0xc0557c8  jal         func_155F20
    ctx->pc = 0x155EE8u;
    SET_GPR_U32(ctx, 31, 0x155EF0u);
    ctx->pc = 0x155EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EE8u;
    // 0x155eec: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F20u, 0x155EE8u, 0x155EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155EF0u;
label_155ef0:
    // 0x155ef0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x155ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x155ef4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x155ef8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155EF8u;
    {
        const bool branch_taken_0x155ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ef8) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155F00u;
    // 0x155f00: 0xc0557c8  jal         func_155F20
    ctx->pc = 0x155F00u;
    SET_GPR_U32(ctx, 31, 0x155F08u);
    ctx->pc = 0x155F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F00u;
    // 0x155f04: 0x8f8480d4  lw          $a0, -0x7F2C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F20u, 0x155F00u, 0x155F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F08u;
label_155f08:
    // 0x155f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x155f0cu;
}
