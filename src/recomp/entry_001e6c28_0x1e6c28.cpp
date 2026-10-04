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

// Function: entry_001e6c28
// Address: 0x1e6c28 - 0x1e6c6c
void entry_001e6c28_0x1e6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6c28_0x1e6c28");
#endif

    switch (ctx->pc) {
        case 0x1e6c64u: goto label_1e6c64;
        default: break;
    }

    ctx->pc = 0x1e6c28u;

    // 0x1e6c28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6c2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e6c30: 0xa2020123  sb          $v0, 0x123($s0)
    ctx->pc = 0x1e6c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6c34: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6c38: 0x14850012  bne         $a0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6C38u;
    {
        const bool branch_taken_0x1e6c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c38) {
            ctx->pc = 0x1E6C84u;
            return;
        }
    }
    ctx->pc = 0x1E6C40u;
    // 0x1e6c40: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
    // 0x1e6c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6c48: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6C48u;
    {
        const bool branch_taken_0x1e6c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6c48) {
            ctx->pc = 0x1E6C6Cu;
            return;
        }
    }
    ctx->pc = 0x1E6C50u;
    // 0x1e6c50: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6C50u;
    {
        const bool branch_taken_0x1e6c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c50) {
            ctx->pc = 0x1E6C6Cu;
            return;
        }
    }
    ctx->pc = 0x1E6C58u;
    // 0x1e6c58: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6c5c: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C64u);
    ctx->pc = 0x1E6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C5Cu;
    // 0x1e6c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6C5Cu, 0x1E6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C64u;
label_1e6c64:
    // 0x1e6c64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E6C64u;
    {
        const bool branch_taken_0x1e6c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C64u;
        // 0x1e6c68: 0x8f828e80  lw          $v0, -0x7180($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c64) {
            ctx->pc = 0x1E6CD0u;
            return;
        }
    }
    ctx->pc = 0x1E6C6Cu;
}
