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

// Function: FUN_0016d590
// Address: 0x16d590 - 0x16d5cc
void FUN_0016d590_0x16d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d590_0x16d590");
#endif

    switch (ctx->pc) {
        case 0x16d5b0u: goto label_16d5b0;
        case 0x16d5bcu: goto label_16d5bc;
        case 0x16d5c8u: goto label_16d5c8;
        default: break;
    }

    ctx->pc = 0x16d590u;

    // 0x16d590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d594: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x16d594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x16d598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d59c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5a0: 0x8f8586f4  lw          $a1, -0x790C($gp)
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x16d5a4: 0xaf8486f8  sw          $a0, -0x7908($gp)
    ctx->pc = 0x16d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 4));
    // 0x16d5a8: 0xc08d950  jal         func_236540
    ctx->pc = 0x16D5A8u;
    SET_GPR_U32(ctx, 31, 0x16D5B0u);
    ctx->pc = 0x16D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5A8u;
    // 0x16d5ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236540u, 0x16D5A8u, 0x16D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5B0u;
label_16d5b0:
    // 0x16d5b0: 0x8f8586f8  lw          $a1, -0x7908($gp)
    ctx->pc = 0x16d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x16d5b4: 0xc08d2ec  jal         func_234BB0
    ctx->pc = 0x16D5B4u;
    SET_GPR_U32(ctx, 31, 0x16D5BCu);
    ctx->pc = 0x16D5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5B4u;
    // 0x16d5b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234BB0u, 0x16D5B4u, 0x16D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5BCu;
label_16d5bc:
    // 0x16d5bc: 0x8f8586f8  lw          $a1, -0x7908($gp)
    ctx->pc = 0x16d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x16d5c0: 0xc08d97a  jal         func_2365E8
    ctx->pc = 0x16D5C0u;
    SET_GPR_U32(ctx, 31, 0x16D5C8u);
    ctx->pc = 0x16D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5C0u;
    // 0x16d5c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2365E8u, 0x16D5C0u, 0x16D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5C8u;
label_16d5c8:
    // 0x16d5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16d5ccu;
}
