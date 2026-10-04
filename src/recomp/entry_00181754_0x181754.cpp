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

// Function: entry_00181754
// Address: 0x181754 - 0x18176c
void entry_00181754_0x181754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181754_0x181754");
#endif

    ctx->pc = 0x181754u;

    // 0x181754: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x181758: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
    // 0x18175c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18175Cu;
    {
        const bool branch_taken_0x18175c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18175Cu;
        // 0x181760: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18175c) {
            ctx->pc = 0x18176Cu;
            return;
        }
    }
    ctx->pc = 0x181764u;
    // 0x181764: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181768: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x18176cu;
}
