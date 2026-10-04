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

// Function: FUN_00155900
// Address: 0x155900 - 0x15593c
void FUN_00155900_0x155900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155900_0x155900");
#endif

    switch (ctx->pc) {
        case 0x155910u: goto label_155910;
        case 0x155918u: goto label_155918;
        case 0x155920u: goto label_155920;
        case 0x155928u: goto label_155928;
        case 0x155930u: goto label_155930;
        case 0x155938u: goto label_155938;
        default: break;
    }

    ctx->pc = 0x155900u;

    // 0x155900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155908: 0xc055654  jal         func_155950
    ctx->pc = 0x155908u;
    SET_GPR_U32(ctx, 31, 0x155910u);
    ctx->pc = 0x155950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155950u, 0x155908u, 0x155910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155910u;
label_155910:
    // 0x155910: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x155910u;
    SET_GPR_U32(ctx, 31, 0x155918u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x155910u, 0x155918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155918u;
label_155918:
    // 0x155918: 0xc04e120  jal         func_138480
    ctx->pc = 0x155918u;
    SET_GPR_U32(ctx, 31, 0x155920u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x155918u, 0x155920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155920u;
label_155920:
    // 0x155920: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x155920u;
    SET_GPR_U32(ctx, 31, 0x155928u);
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x155920u, 0x155928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155928u;
label_155928:
    // 0x155928: 0xc0692b4  jal         func_1A4AD0
    ctx->pc = 0x155928u;
    SET_GPR_U32(ctx, 31, 0x155930u);
    ctx->pc = 0x15592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155928u;
    // 0x15592c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AD0u, 0x155928u, 0x155930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155930u;
label_155930:
    // 0x155930: 0xc060298  jal         func_180A60
    ctx->pc = 0x155930u;
    SET_GPR_U32(ctx, 31, 0x155938u);
    ctx->pc = 0x155934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155930u;
    // 0x155934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A60u, 0x155930u, 0x155938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155938u;
label_155938:
    // 0x155938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15593cu;
}
