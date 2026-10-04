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

// Function: entry_0019a128
// Address: 0x19a128 - 0x19a14c
void entry_0019a128_0x19a128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a128_0x19a128");
#endif

    switch (ctx->pc) {
        case 0x19a138u: goto label_19a138;
        default: break;
    }

    ctx->pc = 0x19a128u;

    // 0x19a128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a130: 0xc066234  jal         func_1988D0
    ctx->pc = 0x19A130u;
    SET_GPR_U32(ctx, 31, 0x19A138u);
    ctx->pc = 0x19A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A130u;
    // 0x19a134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x19A130u, 0x19A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A138u;
label_19a138:
    // 0x19a138: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a13c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x19a13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x19a140: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a144: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x19a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x19a148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x19a14cu;
}
