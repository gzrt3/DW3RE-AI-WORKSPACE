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

// Function: entry_001f1f7c
// Address: 0x1f1f7c - 0x1f1fa0
void entry_001f1f7c_0x1f1f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1f7c_0x1f1f7c");
#endif

    ctx->pc = 0x1f1f7cu;

    // 0x1f1f7c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1F7Cu;
    {
        const bool branch_taken_0x1f1f7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1f7c) {
            ctx->pc = 0x1F1FB0u;
            return;
        }
    }
    ctx->pc = 0x1F1F84u;
    // 0x1f1f84: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x1f1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f1f88: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f1f8c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1f1f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1f90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1F90u;
    {
        const bool branch_taken_0x1f1f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F90u;
        // 0x1f1f94: 0xaf838fc0  sw          $v1, -0x7040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f90) {
            ctx->pc = 0x1F1FA0u;
            return;
        }
    }
    ctx->pc = 0x1F1F98u;
    // 0x1f1f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1F98u;
    {
        const bool branch_taken_0x1f1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F98u;
        // 0x1f1f9c: 0x8f838fc0  lw          $v1, -0x7040($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f98) {
            ctx->pc = 0x1F1FA4u;
            return;
        }
    }
    ctx->pc = 0x1F1FA0u;
}
