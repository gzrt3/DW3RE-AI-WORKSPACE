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

// Function: entry_001acfd0
// Address: 0x1acfd0 - 0x1ad008
void entry_001acfd0_0x1acfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acfd0_0x1acfd0");
#endif

    switch (ctx->pc) {
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acff8u: goto label_1acff8;
        default: break;
    }

    ctx->pc = 0x1acfd0u;

    // 0x1acfd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACFD0u;
    {
        const bool branch_taken_0x1acfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd0) {
            ctx->pc = 0x1AD008u;
            return;
        }
    }
    ctx->pc = 0x1ACFD8u;
    // 0x1acfd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acfdc: 0x0  nop
    ctx->pc = 0x1acfdcu;
    // NOP
label_1acfe0:
    // 0x1acfe0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfe4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acfe8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acfec: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acfecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1acff0: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACFF0u;
    SET_GPR_U32(ctx, 31, 0x1ACFF8u);
    ctx->pc = 0x1ACFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFF0u;
    // 0x1acff4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACFF0u, 0x1ACFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFF8u;
label_1acff8:
    // 0x1acff8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1acffc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ad000: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AD000u;
    {
        const bool branch_taken_0x1ad000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad000) {
            ctx->pc = 0x1AD004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD000u;
            // 0x1ad004: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1AD008u;
}
