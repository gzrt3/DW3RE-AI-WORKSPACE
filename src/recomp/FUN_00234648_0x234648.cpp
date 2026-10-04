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

// Function: FUN_00234648
// Address: 0x234648 - 0x234674
void FUN_00234648_0x234648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234648_0x234648");
#endif

    switch (ctx->pc) {
        case 0x234670u: goto label_234670;
        default: break;
    }

    ctx->pc = 0x234648u;

    // 0x234648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23464c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x234650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234654: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x234654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x234658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23465c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x234660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x234664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x234664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x234668: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234668u;
    SET_GPR_U32(ctx, 31, 0x234670u);
    ctx->pc = 0x23466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234668u;
    // 0x23466c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234668u, 0x234670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234670u;
label_234670:
    // 0x234670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x234670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234674u;
}
