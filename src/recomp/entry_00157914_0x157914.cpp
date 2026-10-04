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

// Function: entry_00157914
// Address: 0x157914 - 0x157950
void entry_00157914_0x157914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157914_0x157914");
#endif

    switch (ctx->pc) {
        case 0x157948u: goto label_157948;
        default: break;
    }

    ctx->pc = 0x157914u;

    // 0x157914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157918: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157918u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x15791c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15791cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x157920: 0x82282d  daddu       $a1, $a0, $v0
    ctx->pc = 0x157920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x157924: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x157924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x157928: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x15792c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x15792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x157930: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x157930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x157934: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x157934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
    // 0x157938: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x157938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x15793c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x15793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x157940: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x157940u;
    SET_GPR_U32(ctx, 31, 0x157948u);
    ctx->pc = 0x157944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157940u;
    // 0x157944: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x157940u, 0x157948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157948u;
label_157948:
    // 0x157948: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15794c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15794cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x157950u;
}
