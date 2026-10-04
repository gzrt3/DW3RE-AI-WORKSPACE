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

// Function: entry_001a3d90
// Address: 0x1a3d90 - 0x1a3dc0
void entry_001a3d90_0x1a3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d90_0x1a3d90");
#endif

    ctx->pc = 0x1a3d90u;

    // 0x1a3d90: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a3d94: 0x8068d2c  j           func_1A34B0
    ctx->pc = 0x1A3D94u;
    ctx->pc = 0x1A3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D94u;
    // 0x1a3d98: 0x24a5a488  addiu       $a1, $a1, -0x5B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    FUN_001a34b0_0x1a34b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3D9Cu;
    // 0x1a3d9c: 0x0  nop
    ctx->pc = 0x1a3d9cu;
    // NOP
    // 0x1a3da0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1a3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a3da4: 0x8068fa4  j           func_1A3E90
    ctx->pc = 0x1A3DA4u;
    ctx->pc = 0x1A3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DA4u;
    // 0x1a3da8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3E90u, 0x1A3DA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1A3DACu;
    // 0x1a3dac: 0x0  nop
    ctx->pc = 0x1a3dacu;
    // NOP
    // 0x1a3db0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a3db4: 0x8068fde  j           func_1A3F78
    ctx->pc = 0x1A3DB4u;
    ctx->pc = 0x1A3DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DB4u;
    // 0x1a3db8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F78u;
    FUN_001a3f78_0x1a3f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3DBCu;
    // 0x1a3dbc: 0x0  nop
    ctx->pc = 0x1a3dbcu;
    // NOP
    ctx->pc = 0x1a3dc0u;
}
