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

// Function: entry_001c89b8
// Address: 0x1c89b8 - 0x1c89d8
void entry_001c89b8_0x1c89b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c89b8_0x1c89b8");
#endif

    switch (ctx->pc) {
        case 0x1c89c4u: goto label_1c89c4;
        case 0x1c89d4u: goto label_1c89d4;
        default: break;
    }

    ctx->pc = 0x1c89b8u;

    // 0x1c89b8: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c89bc: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C89BCu;
    SET_GPR_U32(ctx, 31, 0x1C89C4u);
    ctx->pc = 0x1C89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89BCu;
    // 0x1c89c0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C89BCu, 0x1C89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89C4u;
label_1c89c4:
    // 0x1c89c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c89c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89cc: 0xc041744  jal         func_105D10
    ctx->pc = 0x1C89CCu;
    SET_GPR_U32(ctx, 31, 0x1C89D4u);
    ctx->pc = 0x1C89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89CCu;
    // 0x1c89d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C89CCu, 0x1C89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89D4u;
label_1c89d4:
    // 0x1c89d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c89d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c89d8u;
}
