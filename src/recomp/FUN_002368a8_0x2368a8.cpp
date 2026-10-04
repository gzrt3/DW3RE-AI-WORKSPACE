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

// Function: FUN_002368a8
// Address: 0x2368a8 - 0x2368dc
void FUN_002368a8_0x2368a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002368a8_0x2368a8");
#endif

    switch (ctx->pc) {
        case 0x2368c0u: goto label_2368c0;
        case 0x2368d0u: goto label_2368d0;
        default: break;
    }

    ctx->pc = 0x2368a8u;

    // 0x2368a8: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2368a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2368ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2368acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2368b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2368b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2368b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2368b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2368b8: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2368B8u;
    SET_GPR_U32(ctx, 31, 0x2368C0u);
    ctx->pc = 0x2368BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368B8u;
    // 0x2368bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2368B8u, 0x2368C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368C0u;
label_2368c0:
    // 0x2368c0: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2368c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2368c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2368c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368c8: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2368C8u;
    SET_GPR_U32(ctx, 31, 0x2368D0u);
    ctx->pc = 0x2368CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368C8u;
    // 0x2368cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2368C8u, 0x2368D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368D0u;
label_2368d0:
    // 0x2368d0: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2368d4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2368D4u;
    SET_GPR_U32(ctx, 31, 0x2368DCu);
    ctx->pc = 0x2368D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368D4u;
    // 0x2368d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2368D4u, 0x2368DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368DCu;
}
