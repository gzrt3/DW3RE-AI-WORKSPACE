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

// Function: entry_0022fc44
// Address: 0x22fc44 - 0x22fc50
void entry_0022fc44_0x22fc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fc44_0x22fc44");
#endif

    ctx->pc = 0x22fc44u;

    // 0x22fc44: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fc48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22FC48u;
    {
        const bool branch_taken_0x22fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0xac220484  sw          $v0, 0x484($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc48) {
            ctx->pc = 0x22FC6Cu;
            return;
        }
    }
    ctx->pc = 0x22FC50u;
}
