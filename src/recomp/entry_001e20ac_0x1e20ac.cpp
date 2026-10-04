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

// Function: entry_001e20ac
// Address: 0x1e20ac - 0x1e20dc
void entry_001e20ac_0x1e20ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e20ac_0x1e20ac");
#endif

    ctx->pc = 0x1e20acu;

    // 0x1e20ac: 0x8f838d94  lw          $v1, -0x726C($gp)
    ctx->pc = 0x1e20acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x1e20b0: 0xaf828d80  sw          $v0, -0x7280($gp)
    ctx->pc = 0x1e20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), GPR_U32(ctx, 2));
    // 0x1e20b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e20b8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E20B8u;
    {
        const bool branch_taken_0x1e20b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e20b8) {
            ctx->pc = 0x1E20FCu;
            return;
        }
    }
    ctx->pc = 0x1E20C0u;
    // 0x1e20c0: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x1e20c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e20c8: 0x28410108  slti        $at, $v0, 0x108
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x1e20cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E20CCu;
    {
        const bool branch_taken_0x1e20cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20cc) {
            ctx->pc = 0x1E20DCu;
            return;
        }
    }
    ctx->pc = 0x1E20D4u;
    // 0x1e20d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E20D4u;
    {
        const bool branch_taken_0x1e20d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D4u;
        // 0x1e20d8: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20d4) {
            ctx->pc = 0x1E20E4u;
            return;
        }
    }
    ctx->pc = 0x1E20DCu;
}
