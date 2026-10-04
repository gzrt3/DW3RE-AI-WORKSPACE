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

// Function: entry_00249d54
// Address: 0x249d54 - 0x249d64
void entry_00249d54_0x249d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249d54_0x249d54");
#endif

    ctx->pc = 0x249d54u;

    // 0x249d54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249d58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x249D58u;
    {
        const bool branch_taken_0x249d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D58u;
        // 0x249d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d58) {
            ctx->pc = 0x249DC0u;
            return;
        }
    }
    ctx->pc = 0x249D60u;
    // 0x249d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x249d64u;
}
