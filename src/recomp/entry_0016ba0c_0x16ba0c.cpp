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

// Function: entry_0016ba0c
// Address: 0x16ba0c - 0x16ba2c
void entry_0016ba0c_0x16ba0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba0c_0x16ba0c");
#endif

    ctx->pc = 0x16ba0cu;

    // 0x16ba0c: 0x8f848700  lw          $a0, -0x7900($gp)
    ctx->pc = 0x16ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16ba10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ba14: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA14u;
    {
        const bool branch_taken_0x16ba14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ba14) {
            ctx->pc = 0x16BA2Cu;
            return;
        }
    }
    ctx->pc = 0x16BA1Cu;
    // 0x16ba1c: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16ba20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA20u;
    {
        const bool branch_taken_0x16ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA20u;
        // 0x16ba24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba20) {
            ctx->pc = 0x16BA2Cu;
            return;
        }
    }
    ctx->pc = 0x16BA28u;
    // 0x16ba28: 0xaf838700  sw          $v1, -0x7900($gp)
    ctx->pc = 0x16ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 3));
    ctx->pc = 0x16ba2cu;
}
