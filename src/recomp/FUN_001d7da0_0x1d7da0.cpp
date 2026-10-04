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

// Function: FUN_001d7da0
// Address: 0x1d7da0 - 0x1d7dc0
void FUN_001d7da0_0x1d7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7da0_0x1d7da0");
#endif

    switch (ctx->pc) {
        case 0x1d7db0u: goto label_1d7db0;
        case 0x1d7db8u: goto label_1d7db8;
        default: break;
    }

    ctx->pc = 0x1d7da0u;

    // 0x1d7da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7da8: 0xc075ff0  jal         func_1D7FC0
    ctx->pc = 0x1D7DA8u;
    SET_GPR_U32(ctx, 31, 0x1D7DB0u);
    ctx->pc = 0x1D7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DA8u;
    // 0x1d7dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7FC0u, 0x1D7DA8u, 0x1D7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DB0u;
label_1d7db0:
    // 0x1d7db0: 0xc076198  jal         func_1D8660
    ctx->pc = 0x1D7DB0u;
    SET_GPR_U32(ctx, 31, 0x1D7DB8u);
    ctx->pc = 0x1D8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8660u, 0x1D7DB0u, 0x1D7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DB8u;
label_1d7db8:
    // 0x1d7db8: 0xc060258  jal         func_180960
    ctx->pc = 0x1D7DB8u;
    SET_GPR_U32(ctx, 31, 0x1D7DC0u);
    ctx->pc = 0x1D7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DB8u;
    // 0x1d7dbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7DB8u, 0x1D7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DC0u;
}
