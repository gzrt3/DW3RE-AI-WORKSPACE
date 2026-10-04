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

// Function: FUN_0013ef50
// Address: 0x13ef50 - 0x13ef80
void FUN_0013ef50_0x13ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ef50_0x13ef50");
#endif

    switch (ctx->pc) {
        case 0x13ef64u: goto label_13ef64;
        case 0x13ef6cu: goto label_13ef6c;
        case 0x13ef74u: goto label_13ef74;
        case 0x13ef7cu: goto label_13ef7c;
        default: break;
    }

    ctx->pc = 0x13ef50u;

    // 0x13ef50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ef54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ef58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ef5c: 0xc04fc1c  jal         func_13F070
    ctx->pc = 0x13EF5Cu;
    SET_GPR_U32(ctx, 31, 0x13EF64u);
    ctx->pc = 0x13EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF5Cu;
    // 0x13ef60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F070u, 0x13EF5Cu, 0x13EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF64u;
label_13ef64:
    // 0x13ef64: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x13EF64u;
    SET_GPR_U32(ctx, 31, 0x13EF6Cu);
    ctx->pc = 0x13EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF64u;
    // 0x13ef68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x13EF64u, 0x13EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF6Cu;
label_13ef6c:
    // 0x13ef6c: 0xc051054  jal         func_144150
    ctx->pc = 0x13EF6Cu;
    SET_GPR_U32(ctx, 31, 0x13EF74u);
    ctx->pc = 0x13EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF6Cu;
    // 0x13ef70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144150u, 0x13EF6Cu, 0x13EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF74u;
label_13ef74:
    // 0x13ef74: 0xc04fbe4  jal         func_13EF90
    ctx->pc = 0x13EF74u;
    SET_GPR_U32(ctx, 31, 0x13EF7Cu);
    ctx->pc = 0x13EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF74u;
    // 0x13ef78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF90u, 0x13EF74u, 0x13EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF7Cu;
label_13ef7c:
    // 0x13ef7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13ef80u;
}
