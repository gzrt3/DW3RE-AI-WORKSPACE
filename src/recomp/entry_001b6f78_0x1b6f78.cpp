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

// Function: entry_001b6f78
// Address: 0x1b6f78 - 0x1b6fd8
void entry_001b6f78_0x1b6f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f78_0x1b6f78");
#endif

    switch (ctx->pc) {
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6fa0u: goto label_1b6fa0;
        case 0x1b6fbcu: goto label_1b6fbc;
        case 0x1b6fc8u: goto label_1b6fc8;
        default: break;
    }

    ctx->pc = 0x1b6f78u;

    // 0x1b6f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f80: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x1B6F80u, 0x1B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f98: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1B6F98u;
    SET_GPR_U32(ctx, 31, 0x1B6FA0u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1B6F98u, 0x1B6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FA0u;
label_1b6fa0:
    // 0x1b6fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6FA8u;
    {
        const bool branch_taken_0x1b6fa8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6fa8) {
            ctx->pc = 0x1B6FD8u;
            return;
        }
    }
    ctx->pc = 0x1B6FB0u;
    // 0x1b6fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fb4: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x1B6FB4u;
    SET_GPR_U32(ctx, 31, 0x1B6FBCu);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x1B6FB4u, 0x1B6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FBCu;
label_1b6fbc:
    // 0x1b6fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fc0: 0xc06df82  jal         func_1B7E08
    ctx->pc = 0x1B6FC0u;
    SET_GPR_U32(ctx, 31, 0x1B6FC8u);
    ctx->pc = 0x1B7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E08u, 0x1B6FC0u, 0x1B6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FC8u;
label_1b6fc8:
    // 0x1b6fc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6fcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6fd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6FD0u;
    {
        const bool branch_taken_0x1b6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FD0u;
        // 0x1b6fd4: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fd0) {
            ctx->pc = 0x1B6FECu;
            return;
        }
    }
    ctx->pc = 0x1B6FD8u;
}
