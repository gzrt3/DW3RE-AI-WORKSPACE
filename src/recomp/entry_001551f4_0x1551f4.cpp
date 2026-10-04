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

// Function: entry_001551f4
// Address: 0x1551f4 - 0x155218
void entry_001551f4_0x1551f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551f4_0x1551f4");
#endif

    ctx->pc = 0x1551f4u;

    // 0x1551f4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1551f8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x155218u;
            return;
        }
    }
    ctx->pc = 0x155200u;
    // 0x155200: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x155204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155208u;
    {
        const bool branch_taken_0x155208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155208u;
        // 0x15520c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155208) {
            ctx->pc = 0x155218u;
            return;
        }
    }
    ctx->pc = 0x155210u;
    // 0x155210: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x155214: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x155214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x155218u;
}
