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

// Function: entry_001e0b38
// Address: 0x1e0b38 - 0x1e0b4c
void entry_001e0b38_0x1e0b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b38_0x1e0b38");
#endif

    ctx->pc = 0x1e0b38u;

    // 0x1e0b38: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1e0b3c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B3Cu;
    {
        const bool branch_taken_0x1e0b3c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B3Cu;
        // 0x1e0b40: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b3c) {
            ctx->pc = 0x1E0B4Cu;
            return;
        }
    }
    ctx->pc = 0x1E0B44u;
    // 0x1e0b44: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x1e0b48: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    ctx->pc = 0x1e0b4cu;
}
