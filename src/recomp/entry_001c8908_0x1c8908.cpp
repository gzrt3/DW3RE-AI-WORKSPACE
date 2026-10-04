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

// Function: entry_001c8908
// Address: 0x1c8908 - 0x1c892c
void entry_001c8908_0x1c8908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8908_0x1c8908");
#endif

    switch (ctx->pc) {
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8924u: goto label_1c8924;
        default: break;
    }

    ctx->pc = 0x1c8908u;

    // 0x1c8908: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c890c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C890Cu;
    SET_GPR_U32(ctx, 31, 0x1C8914u);
    ctx->pc = 0x1C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C890Cu;
    // 0x1c8910: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C890Cu, 0x1C8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c891c: 0xc041744  jal         func_105D10
    ctx->pc = 0x1C891Cu;
    SET_GPR_U32(ctx, 31, 0x1C8924u);
    ctx->pc = 0x1C8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C891Cu;
    // 0x1c8920: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C891Cu, 0x1C8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8924u;
label_1c8924:
    // 0x1c8924: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C8924u;
    {
        const bool branch_taken_0x1c8924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8924u;
        // 0x1c8928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8924) {
            ctx->pc = 0x1C89D8u;
            return;
        }
    }
    ctx->pc = 0x1C892Cu;
}
