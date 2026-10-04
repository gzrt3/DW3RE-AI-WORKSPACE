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

// Function: entry_001ad04c
// Address: 0x1ad04c - 0x1ad080
void entry_001ad04c_0x1ad04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad04c_0x1ad04c");
#endif

    switch (ctx->pc) {
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad070u: goto label_1ad070;
        default: break;
    }

    ctx->pc = 0x1ad04cu;

    // 0x1ad04c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD04Cu;
    {
        const bool branch_taken_0x1ad04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD04Cu;
        // 0x1ad050: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad04c) {
            ctx->pc = 0x1AD080u;
            return;
        }
    }
    ctx->pc = 0x1AD054u;
    // 0x1ad054: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad058:
    // 0x1ad058: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1ad058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad05c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ad060: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ad064: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1ad064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ad068: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1AD068u;
    SET_GPR_U32(ctx, 31, 0x1AD070u);
    ctx->pc = 0x1AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD068u;
    // 0x1ad06c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1AD068u, 0x1AD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD070u;
label_1ad070:
    // 0x1ad070: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1ad074: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ad078: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD078u;
            // 0x1ad07c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad058;
        }
    }
    ctx->pc = 0x1AD080u;
}
