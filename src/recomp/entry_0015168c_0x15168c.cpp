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

// Function: entry_0015168c
// Address: 0x15168c - 0x15169c
void entry_0015168c_0x15168c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015168c_0x15168c");
#endif

    ctx->pc = 0x15168cu;

    // 0x15168c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x15168Cu;
    {
        const bool branch_taken_0x15168c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15168Cu;
        // 0x151690: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15168c) {
            ctx->pc = 0x15176Cu;
            return;
        }
    }
    ctx->pc = 0x151694u;
    // 0x151694: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x151694u;
    {
        const bool branch_taken_0x151694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151694u;
        // 0x151698: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151694) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x15169Cu;
}
