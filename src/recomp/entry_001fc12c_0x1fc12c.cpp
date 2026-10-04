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

// Function: entry_001fc12c
// Address: 0x1fc12c - 0x1fc170
void entry_001fc12c_0x1fc12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc12c_0x1fc12c");
#endif

    switch (ctx->pc) {
        case 0x1fc138u: goto label_1fc138;
        case 0x1fc148u: goto label_1fc148;
        case 0x1fc158u: goto label_1fc158;
        case 0x1fc168u: goto label_1fc168;
        default: break;
    }

    ctx->pc = 0x1fc12cu;

    // 0x1fc12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc130: 0xc066c5c  jal         func_19B170
    ctx->pc = 0x1FC130u;
    SET_GPR_U32(ctx, 31, 0x1FC138u);
    ctx->pc = 0x1FC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC130u;
    // 0x1fc134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x1FC130u, 0x1FC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC138u;
label_1fc138:
    // 0x1fc138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc13c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc140: 0xc066d10  jal         func_19B440
    ctx->pc = 0x1FC140u;
    SET_GPR_U32(ctx, 31, 0x1FC148u);
    ctx->pc = 0x1FC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC140u;
    // 0x1fc144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1FC140u, 0x1FC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC148u;
label_1fc148:
    // 0x1fc148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc14c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fc150: 0xc066d36  jal         func_19B4D8
    ctx->pc = 0x1FC150u;
    SET_GPR_U32(ctx, 31, 0x1FC158u);
    ctx->pc = 0x1FC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC150u;
    // 0x1fc154: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC150u, 0x1FC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC158u;
label_1fc158:
    // 0x1fc158: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1fc15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc160: 0xc066d36  jal         func_19B4D8
    ctx->pc = 0x1FC160u;
    SET_GPR_U32(ctx, 31, 0x1FC168u);
    ctx->pc = 0x1FC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC160u;
    // 0x1fc164: 0x240603e0  addiu       $a2, $zero, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC160u, 0x1FC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC168u;
label_1fc168:
    // 0x1fc168: 0xc066c46  jal         func_19B118
    ctx->pc = 0x1FC168u;
    SET_GPR_U32(ctx, 31, 0x1FC170u);
    ctx->pc = 0x1FC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC168u;
    // 0x1fc16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1FC168u, 0x1FC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC170u;
}
