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

// Function: FUN_00137f10
// Address: 0x137f10 - 0x137f38
void FUN_00137f10_0x137f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137f10_0x137f10");
#endif

    switch (ctx->pc) {
        case 0x137f34u: goto label_137f34;
        default: break;
    }

    ctx->pc = 0x137f10u;

    // 0x137f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137f14: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x137f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x137f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137f1c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137f20: 0x8c23a4a4  lw          $v1, -0x5B5C($at)
    ctx->pc = 0x137f20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A4A4u));
    // 0x137f24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137F24u;
    {
        const bool branch_taken_0x137f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F24u;
        // 0x137f28: 0x2484a4a0  addiu       $a0, $a0, -0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f24) {
            ctx->pc = 0x137F34u;
            goto label_137f34;
        }
    }
    ctx->pc = 0x137F2Cu;
    // 0x137f2c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x137F2Cu;
    SET_GPR_U32(ctx, 31, 0x137F34u);
    ctx->pc = 0x137F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F2Cu;
    // 0x137f30: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x137F2Cu, 0x137F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F34u;
label_137f34:
    // 0x137f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x137f38u;
}
