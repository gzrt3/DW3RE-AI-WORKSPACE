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

// Function: entry_00157898
// Address: 0x157898 - 0x1578c0
void entry_00157898_0x157898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157898_0x157898");
#endif

    switch (ctx->pc) {
        case 0x1578b8u: goto label_1578b8;
        default: break;
    }

    ctx->pc = 0x157898u;

    // 0x157898: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15789c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x15789cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1578a0: 0x513b8  dsll        $v0, $a1, 14
    ctx->pc = 0x1578a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 14);
    // 0x1578a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1578a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1578a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1578a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1578ac: 0x45202f  dsubu       $a0, $v0, $a1
    ctx->pc = 0x1578acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1578b0: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1578B0u;
    SET_GPR_U32(ctx, 31, 0x1578B8u);
    ctx->pc = 0x1578B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578B0u;
    // 0x1578b4: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1578B0u, 0x1578B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578B8u;
label_1578b8:
    // 0x1578b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1578b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1578bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1578bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1578c0u;
}
