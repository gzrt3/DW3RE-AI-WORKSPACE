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

// Function: entry_001311b0
// Address: 0x1311b0 - 0x1311d8
void entry_001311b0_0x1311b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001311b0_0x1311b0");
#endif

    ctx->pc = 0x1311b0u;

    // 0x1311b0: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x1311b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1311b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1311b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1311b8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1311B8u;
    {
        const bool branch_taken_0x1311b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311B8u;
        // 0x1311bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311b8) {
            ctx->pc = 0x131268u;
            return;
        }
    }
    ctx->pc = 0x1311C0u;
    // 0x1311c0: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1311C0u;
    {
        const bool branch_taken_0x1311c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1311c0) {
            ctx->pc = 0x13121Cu;
            return;
        }
    }
    ctx->pc = 0x1311C8u;
    // 0x1311c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1311C8u;
    {
        const bool branch_taken_0x1311c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1311c8) {
            ctx->pc = 0x1311D8u;
            return;
        }
    }
    ctx->pc = 0x1311D0u;
    // 0x1311d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1311D0u;
    {
        const bool branch_taken_0x1311d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1311d0) {
            ctx->pc = 0x131274u;
            return;
        }
    }
    ctx->pc = 0x1311D8u;
}
