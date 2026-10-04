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

// Function: entry_001cf42c
// Address: 0x1cf42c - 0x1cf444
void entry_001cf42c_0x1cf42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf42c_0x1cf42c");
#endif

    ctx->pc = 0x1cf42cu;

    // 0x1cf42c: 0x2475001c  addiu       $s5, $v1, 0x1C
    ctx->pc = 0x1cf42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1cf430: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cf434: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF434u;
    {
        const bool branch_taken_0x1cf434 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf434) {
            ctx->pc = 0x1CF444u;
            return;
        }
    }
    ctx->pc = 0x1CF43Cu;
    // 0x1cf43c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cf440: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1cf444u;
}
