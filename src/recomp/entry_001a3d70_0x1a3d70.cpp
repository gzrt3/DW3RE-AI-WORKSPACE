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

// Function: entry_001a3d70
// Address: 0x1a3d70 - 0x1a3d90
void entry_001a3d70_0x1a3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d70_0x1a3d70");
#endif

    ctx->pc = 0x1a3d70u;

    // 0x1a3d70: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a3d74: 0x8068d2c  j           func_1A34B0
    ctx->pc = 0x1A3D74u;
    ctx->pc = 0x1A3D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D74u;
    // 0x1a3d78: 0x24a5a438  addiu       $a1, $a1, -0x5BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    FUN_001a34b0_0x1a34b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3D7Cu;
    // 0x1a3d7c: 0x0  nop
    ctx->pc = 0x1a3d7cu;
    // NOP
    // 0x1a3d80: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a3d84: 0x8068d2c  j           func_1A34B0
    ctx->pc = 0x1A3D84u;
    ctx->pc = 0x1A3D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D84u;
    // 0x1a3d88: 0x24a5a450  addiu       $a1, $a1, -0x5BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    FUN_001a34b0_0x1a34b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3D8Cu;
    // 0x1a3d8c: 0x0  nop
    ctx->pc = 0x1a3d8cu;
    // NOP
    ctx->pc = 0x1a3d90u;
}
