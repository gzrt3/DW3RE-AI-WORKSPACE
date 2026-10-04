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

// Function: entry_00135980
// Address: 0x135980 - 0x1359ac
void entry_00135980_0x135980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135980_0x135980");
#endif

    switch (ctx->pc) {
        case 0x135988u: goto label_135988;
        case 0x135990u: goto label_135990;
        default: break;
    }

    ctx->pc = 0x135980u;

    // 0x135980: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x135980u;
    SET_GPR_U32(ctx, 31, 0x135988u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x135980u, 0x135988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135988u;
label_135988:
    // 0x135988: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x135988u;
    SET_GPR_U32(ctx, 31, 0x135990u);
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x135988u, 0x135990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135990u;
label_135990:
    // 0x135990: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135994: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x135994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x135998: 0x8c30a410  lw          $s0, -0x5BF0($at)
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x30A410u));
    // 0x13599c: 0x24849f20  addiu       $a0, $a0, -0x60E0
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x1359a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1359a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359a4: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x1359A4u;
    SET_GPR_U32(ctx, 31, 0x1359ACu);
    ctx->pc = 0x1359A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359A4u;
    // 0x1359a8: 0x24060540  addiu       $a2, $zero, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x1359A4u, 0x1359ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359ACu;
}
