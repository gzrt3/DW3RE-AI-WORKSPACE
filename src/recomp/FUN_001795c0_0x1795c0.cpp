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

// Function: FUN_001795c0
// Address: 0x1795c0 - 0x1795e4
void FUN_001795c0_0x1795c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001795c0_0x1795c0");
#endif

    ctx->pc = 0x1795c0u;

    // 0x1795c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1795c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1795c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1795c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1795c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1795cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1795ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1795d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1795d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1795d4: 0x8c225218  lw          $v0, 0x5218($at)
    ctx->pc = 0x1795d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x365218u));
    // 0x1795d8: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1795d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1795dc: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x1795DCu;
    SET_GPR_U32(ctx, 31, 0x1795E4u);
    ctx->pc = 0x1795E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1795DCu;
    // 0x1795e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x1795DCu, 0x1795E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795E4u;
}
