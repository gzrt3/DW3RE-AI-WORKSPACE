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

// Function: entry_0020d2c0
// Address: 0x20d2c0 - 0x20d2ec
void entry_0020d2c0_0x20d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d2c0_0x20d2c0");
#endif

    ctx->pc = 0x20d2c0u;

    // 0x20d2c0: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d2c8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D2C8u;
    {
        const bool branch_taken_0x20d2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d2c8) {
            ctx->pc = 0x20D308u;
            return;
        }
    }
    ctx->pc = 0x20D2D0u;
    // 0x20d2d0: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20d2d8: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20d2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d2dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2DCu;
    {
        const bool branch_taken_0x20d2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d2dc) {
            ctx->pc = 0x20D2ECu;
            return;
        }
    }
    ctx->pc = 0x20D2E4u;
    // 0x20d2e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2E4u;
    {
        const bool branch_taken_0x20d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2E4u;
        // 0x20d2e8: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2e4) {
            ctx->pc = 0x20D2F4u;
            return;
        }
    }
    ctx->pc = 0x20D2ECu;
}
