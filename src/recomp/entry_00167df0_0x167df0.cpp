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

// Function: entry_00167df0
// Address: 0x167df0 - 0x167e14
void entry_00167df0_0x167df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167df0_0x167df0");
#endif

    ctx->pc = 0x167df0u;

    // 0x167df0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x167df4: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x167df8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x167dfc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x167dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x167e00: 0x2442bd60  addiu       $v0, $v0, -0x42A0
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
    // 0x167e04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x167e08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x167e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167e0c: 0xc05951c  jal         func_165470
    ctx->pc = 0x167E0Cu;
    SET_GPR_U32(ctx, 31, 0x167E14u);
    ctx->pc = 0x167E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E0Cu;
    // 0x167e10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165470u, 0x167E0Cu, 0x167E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E14u;
}
