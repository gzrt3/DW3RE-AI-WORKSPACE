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

// Function: entry_00131194
// Address: 0x131194 - 0x1311b0
void entry_00131194_0x131194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131194_0x131194");
#endif

    ctx->pc = 0x131194u;

label_131194:
    // 0x131194: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x131194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x131198: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131198u;
    {
        const bool branch_taken_0x131198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131198u;
        // 0x13119c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131198) {
            ctx->pc = 0x1311B0u;
            return;
        }
    }
    ctx->pc = 0x1311A0u;
    // 0x1311a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1311a4: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x1311a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1311a8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1311A8u;
    {
        const bool branch_taken_0x1311a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1311a8) {
            ctx->pc = 0x131194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131194;
        }
    }
    ctx->pc = 0x1311B0u;
}
