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

// Function: entry_001579d8
// Address: 0x1579d8 - 0x157a18
void entry_001579d8_0x1579d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001579d8_0x1579d8");
#endif

    switch (ctx->pc) {
        case 0x157a10u: goto label_157a10;
        default: break;
    }

    ctx->pc = 0x1579d8u;

    // 0x1579d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1579d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1579dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1579dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1579e0: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x1579e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x1579e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1579e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1579e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1579e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1579ec: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1579ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1579f0: 0x83282d  daddu       $a1, $a0, $v1
    ctx->pc = 0x1579f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1579f4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1579f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1579f8: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x1579f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1579fc: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x1579fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
    // 0x157a00: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x157a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x157a04: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x157a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x157a08: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x157A08u;
    SET_GPR_U32(ctx, 31, 0x157A10u);
    ctx->pc = 0x157A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A08u;
    // 0x157a0c: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x157A08u, 0x157A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A10u;
label_157a10:
    // 0x157a10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157a14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157a14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x157a18u;
}
