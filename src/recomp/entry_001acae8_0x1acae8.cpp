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

// Function: entry_001acae8
// Address: 0x1acae8 - 0x1acb0c
void entry_001acae8_0x1acae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acae8_0x1acae8");
#endif

    ctx->pc = 0x1acae8u;

label_1acae8:
    // 0x1acae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1acaec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1acaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1acaf0: 0x0  nop
    ctx->pc = 0x1acaf0u;
    // NOP
    // 0x1acaf4: 0x0  nop
    ctx->pc = 0x1acaf4u;
    // NOP
    // 0x1acaf8: 0x0  nop
    ctx->pc = 0x1acaf8u;
    // NOP
    // 0x1acafc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACAFCu;
    {
        const bool branch_taken_0x1acafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acafc) {
            ctx->pc = 0x1ACAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acae8;
        }
    }
    ctx->pc = 0x1ACB04u;
    // 0x1acb04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACB04u;
    {
        const bool branch_taken_0x1acb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB04u;
        // 0x1acb08: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb04) {
            ctx->pc = 0x1ACB14u;
            return;
        }
    }
    ctx->pc = 0x1ACB0Cu;
}
