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

// Function: entry_001556fc
// Address: 0x1556fc - 0x155720
void entry_001556fc_0x1556fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556fc_0x1556fc");
#endif

    ctx->pc = 0x1556fcu;

    // 0x1556fc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x155700: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155700u;
    {
        const bool branch_taken_0x155700 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x155700) {
            ctx->pc = 0x155720u;
            return;
        }
    }
    ctx->pc = 0x155708u;
    // 0x155708: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15570c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155710u;
    {
        const bool branch_taken_0x155710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155710u;
        // 0x155714: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155710) {
            ctx->pc = 0x155720u;
            return;
        }
    }
    ctx->pc = 0x155718u;
    // 0x155718: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x15571c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x15571cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x155720u;
}
