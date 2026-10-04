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

// Function: entry_001576d0
// Address: 0x1576d0 - 0x15770c
void entry_001576d0_0x1576d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576d0_0x1576d0");
#endif

    switch (ctx->pc) {
        case 0x157704u: goto label_157704;
        default: break;
    }

    ctx->pc = 0x1576d0u;

    // 0x1576d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1576d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1576d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1576d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1576d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1576d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1576dc: 0x82282d  daddu       $a1, $a0, $v0
    ctx->pc = 0x1576dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1576e0: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x1576e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x1576e4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1576e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1576e8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1576e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1576ec: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1576f0: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x1576f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
    // 0x1576f4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1576f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1576f8: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1576f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1576fc: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1576FCu;
    SET_GPR_U32(ctx, 31, 0x157704u);
    ctx->pc = 0x157700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576FCu;
    // 0x157700: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1576FCu, 0x157704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157704u;
label_157704:
    // 0x157704: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x157704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157708: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157708u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->pc = 0x15770cu;
}
