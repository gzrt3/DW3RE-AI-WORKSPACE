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

// Function: entry_001cf39c
// Address: 0x1cf39c - 0x1cf3b8
void entry_001cf39c_0x1cf39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf39c_0x1cf39c");
#endif

    ctx->pc = 0x1cf39cu;

    // 0x1cf39c: 0x0  nop
    ctx->pc = 0x1cf39cu;
    // NOP
    // 0x1cf3a0: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CF3A0u;
    {
        const bool branch_taken_0x1cf3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A0u;
        // 0x1cf3a4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a0) {
            ctx->pc = 0x1CF400u;
            return;
        }
    }
    ctx->pc = 0x1CF3A8u;
    // 0x1cf3a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF3A8u;
    {
        const bool branch_taken_0x1cf3a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A8u;
        // 0x1cf3ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a8) {
            ctx->pc = 0x1CF3B8u;
            return;
        }
    }
    ctx->pc = 0x1CF3B0u;
    // 0x1cf3b0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cf3b4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1cf3b8u;
}
