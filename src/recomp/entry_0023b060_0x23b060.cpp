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

// Function: entry_0023b060
// Address: 0x23b060 - 0x23b07c
void entry_0023b060_0x23b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b060_0x23b060");
#endif

    ctx->pc = 0x23b060u;

label_23b060:
    // 0x23b060: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23b064: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x23b064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x23b068: 0x0  nop
    ctx->pc = 0x23b068u;
    // NOP
    // 0x23b06c: 0x0  nop
    ctx->pc = 0x23b06cu;
    // NOP
    // 0x23b070: 0x0  nop
    ctx->pc = 0x23b070u;
    // NOP
    // 0x23b074: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B074u;
    {
        const bool branch_taken_0x23b074 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B074u;
        // 0x23b078: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b074) {
            ctx->pc = 0x23B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b060;
        }
    }
    ctx->pc = 0x23B07Cu;
}
