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

// Function: entry_001d4f74
// Address: 0x1d4f74 - 0x1d4f9c
void entry_001d4f74_0x1d4f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f74_0x1d4f74");
#endif

    ctx->pc = 0x1d4f74u;

    // 0x1d4f74: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4f78: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d4f7c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4F7Cu;
    {
        const bool branch_taken_0x1d4f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f7c) {
            ctx->pc = 0x1D4FCCu;
            return;
        }
    }
    ctx->pc = 0x1D4F84u;
    // 0x1d4f84: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d4f88: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1d4f8c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1d4f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1d4f90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4F90u;
    {
        const bool branch_taken_0x1d4f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F90u;
        // 0x1d4f94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f90) {
            ctx->pc = 0x1D4F9Cu;
            return;
        }
    }
    ctx->pc = 0x1D4F98u;
    // 0x1d4f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d4f9cu;
}
