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

// Function: entry_001ee300
// Address: 0x1ee300 - 0x1ee314
void entry_001ee300_0x1ee300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee300_0x1ee300");
#endif

    ctx->pc = 0x1ee300u;

    // 0x1ee300: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
    // 0x1ee304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE304u;
    {
        const bool branch_taken_0x1ee304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee304) {
            ctx->pc = 0x1EE314u;
            return;
        }
    }
    ctx->pc = 0x1EE30Cu;
    // 0x1ee30c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1EE30Cu;
    {
        const bool branch_taken_0x1ee30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee30c) {
            ctx->pc = 0x1EE390u;
            return;
        }
    }
    ctx->pc = 0x1EE314u;
}
