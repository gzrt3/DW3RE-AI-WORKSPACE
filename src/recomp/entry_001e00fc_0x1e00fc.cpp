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

// Function: entry_001e00fc
// Address: 0x1e00fc - 0x1e0114
void entry_001e00fc_0x1e00fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e00fc_0x1e00fc");
#endif

    ctx->pc = 0x1e00fcu;

    // 0x1e00fc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E00FCu;
    {
        const bool branch_taken_0x1e00fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00FCu;
        // 0x1e0100: 0xaf848cfc  sw          $a0, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00fc) {
            ctx->pc = 0x1E0138u;
            return;
        }
    }
    ctx->pc = 0x1E0104u;
    // 0x1e0104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e0104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0108: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E0108u;
    {
        const bool branch_taken_0x1e0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0108u;
        // 0x1e010c: 0xaf838cf8  sw          $v1, -0x7308($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0108) {
            ctx->pc = 0x1E0138u;
            return;
        }
    }
    ctx->pc = 0x1E0110u;
    // 0x1e0110: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1e0114u;
}
