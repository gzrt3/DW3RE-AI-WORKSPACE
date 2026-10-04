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

// Function: FUN_00249c10
// Address: 0x249c10 - 0x249c38
void FUN_00249c10_0x249c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00249c10_0x249c10");
#endif

    switch (ctx->pc) {
        case 0x249c24u: goto label_249c24;
        default: break;
    }

    ctx->pc = 0x249c10u;

    // 0x249c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249c18: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249c1c: 0xc0923ec  jal         func_248FB0
    ctx->pc = 0x249C1Cu;
    SET_GPR_U32(ctx, 31, 0x249C24u);
    ctx->pc = 0x249C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C1Cu;
    // 0x249c20: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248FB0u, 0x249C1Cu, 0x249C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C24u;
label_249c24:
    // 0x249c24: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249c28: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x249c2c: 0x24849be0  addiu       $a0, $a0, -0x6420
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
    // 0x249c30: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x249c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x249c38u;
}
