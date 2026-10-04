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

// Function: entry_00185b78
// Address: 0x185b78 - 0x185b88
void entry_00185b78_0x185b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b78_0x185b78");
#endif

    ctx->pc = 0x185b78u;

    // 0x185b78: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x185b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x185b7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x185B7Cu;
    {
        const bool branch_taken_0x185b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B7Cu;
        // 0x185b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b7c) {
            ctx->pc = 0x185B88u;
            return;
        }
    }
    ctx->pc = 0x185B84u;
    // 0x185b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x185b88u;
}
