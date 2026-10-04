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

// Function: entry_00198a4c
// Address: 0x198a4c - 0x198a70
void entry_00198a4c_0x198a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a4c_0x198a4c");
#endif

    switch (ctx->pc) {
        case 0x198a5cu: goto label_198a5c;
        default: break;
    }

    ctx->pc = 0x198a4cu;

    // 0x198a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a54: 0xc066234  jal         func_1988D0
    ctx->pc = 0x198A54u;
    SET_GPR_U32(ctx, 31, 0x198A5Cu);
    ctx->pc = 0x198A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A54u;
    // 0x198a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x198A54u, 0x198A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A5Cu;
label_198a5c:
    // 0x198a5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198a60: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x198a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198a68: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x198a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x198a70u;
}
