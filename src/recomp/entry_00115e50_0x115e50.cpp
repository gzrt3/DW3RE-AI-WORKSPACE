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

// Function: entry_00115e50
// Address: 0x115e50 - 0x115e6c
void entry_00115e50_0x115e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e50_0x115e50");
#endif

    ctx->pc = 0x115e50u;

    // 0x115e50: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x115e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115e54: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x115E54u;
    {
        const bool branch_taken_0x115e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x115e54) {
            ctx->pc = 0x115E7Cu;
            return;
        }
    }
    ctx->pc = 0x115E5Cu;
    // 0x115e5c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115E5Cu;
    {
        const bool branch_taken_0x115e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x115e5c) {
            ctx->pc = 0x115E6Cu;
            return;
        }
    }
    ctx->pc = 0x115E64u;
    // 0x115e64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115E64u;
    {
        const bool branch_taken_0x115e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E64u;
        // 0x115e68: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e64) {
            ctx->pc = 0x115E7Cu;
            return;
        }
    }
    ctx->pc = 0x115E6Cu;
}
