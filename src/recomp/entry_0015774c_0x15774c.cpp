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

// Function: entry_0015774c
// Address: 0x15774c - 0x157774
void entry_0015774c_0x15774c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015774c_0x15774c");
#endif

    switch (ctx->pc) {
        case 0x15776cu: goto label_15776c;
        default: break;
    }

    ctx->pc = 0x15774cu;

    // 0x15774c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x157750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157754: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x157754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x157758: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15775c: 0x62282d  daddu       $a1, $v1, $v0
    ctx->pc = 0x15775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x157760: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x157760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x157764: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x157764u;
    SET_GPR_U32(ctx, 31, 0x15776Cu);
    ctx->pc = 0x157768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157764u;
    // 0x157768: 0x43202f  dsubu       $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x157764u, 0x15776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15776Cu;
label_15776c:
    // 0x15776c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15776cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157770: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157770u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->pc = 0x157774u;
}
