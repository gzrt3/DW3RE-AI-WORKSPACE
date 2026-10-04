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

// Function: entry_0020d020
// Address: 0x20d020 - 0x20d04c
void entry_0020d020_0x20d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d020_0x20d020");
#endif

    ctx->pc = 0x20d020u;

    // 0x20d020: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d028: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D028u;
    {
        const bool branch_taken_0x20d028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d028) {
            ctx->pc = 0x20D068u;
            return;
        }
    }
    ctx->pc = 0x20D030u;
    // 0x20d030: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d034: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20d038: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20d038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d03c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D03Cu;
    {
        const bool branch_taken_0x20d03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d03c) {
            ctx->pc = 0x20D04Cu;
            return;
        }
    }
    ctx->pc = 0x20D044u;
    // 0x20d044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D044u;
    {
        const bool branch_taken_0x20d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D044u;
        // 0x20d048: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d044) {
            ctx->pc = 0x20D054u;
            return;
        }
    }
    ctx->pc = 0x20D04Cu;
}
