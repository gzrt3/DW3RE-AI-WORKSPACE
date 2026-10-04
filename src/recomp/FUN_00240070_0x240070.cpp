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

// Function: FUN_00240070
// Address: 0x240070 - 0x240088
void FUN_00240070_0x240070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240070_0x240070");
#endif

    switch (ctx->pc) {
        case 0x240084u: goto label_240084;
        default: break;
    }

    ctx->pc = 0x240070u;

    // 0x240070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240074: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x240078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24007c: 0xc0545ec  jal         func_1517B0
    ctx->pc = 0x24007Cu;
    SET_GPR_U32(ctx, 31, 0x240084u);
    ctx->pc = 0x240080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24007Cu;
    // 0x240080: 0x2484f940  addiu       $a0, $a0, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1517B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1517B0u, 0x24007Cu, 0x240084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240084u;
label_240084:
    // 0x240084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x240088u;
}
