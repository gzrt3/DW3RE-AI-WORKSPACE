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

// Function: entry_001acb58
// Address: 0x1acb58 - 0x1acb7c
void entry_001acb58_0x1acb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acb58_0x1acb58");
#endif

    ctx->pc = 0x1acb58u;

label_1acb58:
    // 0x1acb58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1acb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1acb60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1acb64: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1acb64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acb68: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acb6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACB6Cu;
    {
        const bool branch_taken_0x1acb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acb6c) {
            ctx->pc = 0x1ACB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb58;
        }
    }
    ctx->pc = 0x1ACB74u;
    // 0x1acb74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACB74u;
    {
        const bool branch_taken_0x1acb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB74u;
        // 0x1acb78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb74) {
            ctx->pc = 0x1ACB84u;
            return;
        }
    }
    ctx->pc = 0x1ACB7Cu;
}
