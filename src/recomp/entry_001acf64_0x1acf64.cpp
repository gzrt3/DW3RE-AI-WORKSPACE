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

// Function: entry_001acf64
// Address: 0x1acf64 - 0x1acfa0
void entry_001acf64_0x1acf64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acf64_0x1acf64");
#endif

    switch (ctx->pc) {
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf90u: goto label_1acf90;
        default: break;
    }

    ctx->pc = 0x1acf64u;

    // 0x1acf64: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1acf68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACF68u;
    {
        const bool branch_taken_0x1acf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF68u;
        // 0x1acf6c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf68) {
            ctx->pc = 0x1ACFA0u;
            return;
        }
    }
    ctx->pc = 0x1ACF70u;
    // 0x1acf70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acf74: 0x0  nop
    ctx->pc = 0x1acf74u;
    // NOP
label_1acf78:
    // 0x1acf78: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf7c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acf80: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acf84: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1acf88: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACF88u;
    SET_GPR_U32(ctx, 31, 0x1ACF90u);
    ctx->pc = 0x1ACF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF88u;
    // 0x1acf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACF88u, 0x1ACF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF90u;
label_1acf90:
    // 0x1acf90: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1acf94: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1acf98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ACF98u;
    {
        const bool branch_taken_0x1acf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acf98) {
            ctx->pc = 0x1ACF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF98u;
            // 0x1acf9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acf78;
        }
    }
    ctx->pc = 0x1ACFA0u;
}
