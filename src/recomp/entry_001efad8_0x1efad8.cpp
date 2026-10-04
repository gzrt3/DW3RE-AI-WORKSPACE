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

// Function: entry_001efad8
// Address: 0x1efad8 - 0x1efafc
void entry_001efad8_0x1efad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efad8_0x1efad8");
#endif

    ctx->pc = 0x1efad8u;

    // 0x1efad8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFAD8u;
    {
        const bool branch_taken_0x1efad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1efad8) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFAE0u;
    // 0x1efae0: 0x8f848f6c  lw          $a0, -0x7094($gp)
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1efae4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1efae8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1efae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1efaec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFAECu;
    {
        const bool branch_taken_0x1efaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAECu;
        // 0x1efaf0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaec) {
            ctx->pc = 0x1EFAFCu;
            return;
        }
    }
    ctx->pc = 0x1EFAF4u;
    // 0x1efaf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFAF4u;
    {
        const bool branch_taken_0x1efaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAF4u;
        // 0x1efaf8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaf4) {
            ctx->pc = 0x1EFB00u;
            return;
        }
    }
    ctx->pc = 0x1EFAFCu;
}
