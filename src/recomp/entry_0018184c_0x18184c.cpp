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

// Function: entry_0018184c
// Address: 0x18184c - 0x181860
void entry_0018184c_0x18184c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018184c_0x18184c");
#endif

    ctx->pc = 0x18184cu;

    // 0x18184c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18184Cu;
    {
        const bool branch_taken_0x18184c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18184Cu;
        // 0x181850: 0x28c10238  slti        $at, $a2, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18184c) {
            ctx->pc = 0x181860u;
            return;
        }
    }
    ctx->pc = 0x181854u;
    // 0x181854: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x181854u;
    {
        const bool branch_taken_0x181854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181854) {
            ctx->pc = 0x181860u;
            return;
        }
    }
    ctx->pc = 0x18185Cu;
    // 0x18185c: 0x24c93dc8  addiu       $t1, $a2, 0x3DC8
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 15816));
    ctx->pc = 0x181860u;
}
