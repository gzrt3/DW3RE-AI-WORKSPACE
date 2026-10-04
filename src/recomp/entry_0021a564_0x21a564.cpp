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

// Function: entry_0021a564
// Address: 0x21a564 - 0x21a594
void entry_0021a564_0x21a564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a564_0x21a564");
#endif

    ctx->pc = 0x21a564u;

    // 0x21a564: 0x0  nop
    ctx->pc = 0x21a564u;
    // NOP
    // 0x21a568: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21a568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a570: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A570u;
    {
        const bool branch_taken_0x21a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a570) {
            ctx->pc = 0x21A5B0u;
            return;
        }
    }
    ctx->pc = 0x21A578u;
    // 0x21a578: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a57c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a580: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a584: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A584u;
    {
        const bool branch_taken_0x21a584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a584) {
            ctx->pc = 0x21A594u;
            return;
        }
    }
    ctx->pc = 0x21A58Cu;
    // 0x21a58c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A58Cu;
    {
        const bool branch_taken_0x21a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A58Cu;
        // 0x21a590: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a58c) {
            ctx->pc = 0x21A59Cu;
            return;
        }
    }
    ctx->pc = 0x21A594u;
}
