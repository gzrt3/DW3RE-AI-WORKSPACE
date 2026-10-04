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

// Function: entry_001add70
// Address: 0x1add70 - 0x1add80
void entry_001add70_0x1add70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add70_0x1add70");
#endif

    ctx->pc = 0x1add70u;

    // 0x1add70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD70u;
    {
        const bool branch_taken_0x1add70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD70u;
        // 0x1add74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add70) {
            ctx->pc = 0x1ADD80u;
            return;
        }
    }
    ctx->pc = 0x1ADD78u;
    // 0x1add78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add7c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1add7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x1add80u;
}
