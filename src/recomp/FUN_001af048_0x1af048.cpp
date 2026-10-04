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

// Function: FUN_001af048
// Address: 0x1af048 - 0x1af074
void FUN_001af048_0x1af048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af048_0x1af048");
#endif

    ctx->pc = 0x1af048u;

    // 0x1af048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1af04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af050: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1af050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1af054: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1af054u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1af058: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1af058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1af05c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1af05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1af060: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1af060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1af064: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1af064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1af068: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1af06c: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1AF06Cu;
    SET_GPR_U32(ctx, 31, 0x1AF074u);
    ctx->pc = 0x1AF070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF06Cu;
    // 0x1af070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1AF06Cu, 0x1AF074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF074u;
}
