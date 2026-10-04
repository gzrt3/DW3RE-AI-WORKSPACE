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

// Function: entry_001c5f5c
// Address: 0x1c5f5c - 0x1c5f74
void entry_001c5f5c_0x1c5f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f5c_0x1c5f5c");
#endif

    ctx->pc = 0x1c5f5cu;

    // 0x1c5f5c: 0x0  nop
    ctx->pc = 0x1c5f5cu;
    // NOP
    // 0x1c5f60: 0xdd430158  ld          $v1, 0x158($t2)
    ctx->pc = 0x1c5f60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 344)));
    // 0x1c5f64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F64u;
    {
        const bool branch_taken_0x1c5f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F64u;
        // 0x1c5f68: 0x25470150  addiu       $a3, $t2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f64) {
            ctx->pc = 0x1C5F74u;
            return;
        }
    }
    ctx->pc = 0x1C5F6Cu;
    // 0x1c5f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F6Cu;
    {
        const bool branch_taken_0x1c5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F6Cu;
        // 0x1c5f70: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f6c) {
            ctx->pc = 0x1C5F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F74u;
}
