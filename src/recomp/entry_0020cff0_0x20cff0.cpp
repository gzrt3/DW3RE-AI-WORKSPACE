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

// Function: entry_0020cff0
// Address: 0x20cff0 - 0x20d020
void entry_0020cff0_0x20cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cff0_0x20cff0");
#endif

    ctx->pc = 0x20cff0u;

    // 0x20cff0: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
    // 0x20cff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cff8: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CFF8u;
    {
        const bool branch_taken_0x20cff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cff8) {
            ctx->pc = 0x20D020u;
            return;
        }
    }
    ctx->pc = 0x20D000u;
    // 0x20d000: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x20d004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d008: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
    // 0x20d00c: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x20d010: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20d010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x20d014: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D014u;
    {
        const bool branch_taken_0x20d014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d014) {
            ctx->pc = 0x20D020u;
            return;
        }
    }
    ctx->pc = 0x20D01Cu;
    // 0x20d01c: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
    ctx->pc = 0x20d020u;
}
